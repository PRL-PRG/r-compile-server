#define _GNU_SOURCE
#include "gdb_jit.h"
#include <assert.h>

#ifdef GDB_JIT_SUPPORT

#include "shared/dwarf.h"
#include "shared/opcodes.h"
#include "stencils_data.h"

#include <elf.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

/*
 * GDB JIT Interface Implementation
 *
 * This module constructs in-memory ELF objects containing DWARF debug
 * information for JIT-compiled functions and registers them with GDB via the
 * GDB JIT compilation interface.
 *
 * Debug Info Data Flow
 * --------------------
 *
 * At build time, `extract_stencils` parses the `.debug_frame` section from the
 * compiled stencils object file and exports the raw FDE (Frame Description
 * Entry) bytes for each stencil as C byte arrays (e.g.
 * `_RETURN_OP__debug_frame[]`). It also computes `RCP_INIT_CFA_OFFSET` -- the
 * maximum CFA depth of the
 * `_RCP_INIT` prologue stencil.
 *
 * At runtime, when a function is JIT-compiled, this module:
 *
 * 1. Generates a pseudo-source file listing opcode names (for GDB's source
 * view).
 * 2. Builds an ELF image in memory with the following DWARF sections:
 *    - `.debug_abbrev`: Abbreviation table (schema for .debug_info).
 *    - `.debug_info`:   DIEs describing the function, its parameters, and
 * types.
 *    - `.debug_line`:   Line table mapping machine addresses to opcode lines.
 *    - `.debug_frame`:  CFI for stack unwinding, assembled from stencil FDEs.
 *
 * 3. For `.debug_frame`, it copies CFI instructions from each stencil's
 *    pre-extracted FDE, adjusting `DW_CFA_def_cfa_offset` values.  Each
 *    stencil was compiled as a standalone function with its own 8-byte return
 *    address on the stack.  In the JIT-compiled function, these stencils are
 *    inlined after the `_RCP_INIT` prologue which establishes a deeper stack
 *    frame.  The adjustment formula is:
 *
 *        new_offset = original_offset - 8 + base_cfa_offset
 *
 *    where `-8` removes the template's implicit return-address push and
 *    `base_cfa_offset` is the actual CFA depth of the JIT function.
 *
 * 4. Registers the ELF image with GDB, which reads the debug info to provide
 *    backtraces, stepping, and variable inspection for JIT code.
 */

/* Global descriptor - GDB looks for this symbol */
struct jit_descriptor __jit_debug_descriptor = {1, JIT_NOACTION, NULL, NULL};

/* GDB sets a breakpoint on this function to be notified of JIT events */
void __attribute__((noinline)) __jit_debug_register_code(void) {
  __asm__ volatile("");
}

/*
 * ELF Section indices
 */
enum {
  SEC_NULL = 0,
  SEC_TEXT,
  SEC_SYMTAB,
  SEC_STRTAB,
  SEC_SHSTRTAB,
  SEC_DEBUG_ABBREV,
  SEC_DEBUG_INFO,
  SEC_DEBUG_LINE,
  SEC_DEBUG_FRAME,
  SEC_COUNT
};

/*
 * Buffer helper for building sections
 */
typedef struct {
  uint8_t *data;
  size_t size;
  size_t capacity;
} Buffer;

static void buf_init(Buffer *buf, size_t initial_capacity) {
  buf->data = malloc(initial_capacity);
  buf->size = 0;
  buf->capacity = initial_capacity;
}

static void buf_ensure(Buffer *buf, size_t needed) {
  if (buf->size + needed > buf->capacity) {
    while (buf->size + needed > buf->capacity)
      buf->capacity *= 2;
    buf->data = realloc(buf->data, buf->capacity);
  }
}

static void buf_write(Buffer *buf, const void *data, size_t size) {
  buf_ensure(buf, size);
  memcpy(buf->data + buf->size, data, size);
  buf->size += size;
}

static size_t buf_write_string(Buffer *buf, const char *str) {
  size_t offset = buf->size;
  buf_write(buf, str, strlen(str) + 1);
  return offset;
}

static void buf_write_u8(Buffer *buf, uint8_t val) { buf_write(buf, &val, 1); }

static void buf_write_u16(Buffer *buf, uint16_t val) {
  buf_write(buf, &val, 2);
}

static void buf_write_u32(Buffer *buf, uint32_t val) {
  buf_write(buf, &val, 4);
}

static void buf_write_u64(Buffer *buf, uint64_t val) {
  buf_write(buf, &val, 8);
}

/* Write LEB128 value to buffer */
static void buf_write_uleb128(Buffer *buf, uint64_t val) {
  buf_ensure(buf, 10);
  size_t len = dwarf_encode_uleb128(val, buf->data + buf->size);
  buf->size += len;
}

static void buf_write_sleb128(Buffer *buf, int64_t val) {
  buf_ensure(buf, 10);
  size_t len = dwarf_encode_sleb128(val, buf->data + buf->size);
  buf->size += len;
}

static void buf_free(Buffer *buf) {
  free(buf->data);
  buf->data = NULL;
  buf->size = 0;
  buf->capacity = 0;
}

//
// Copy CFI instructions from a template FDE into a Buffer, adjusting CFA
// offsets.
//
// Each stencil was compiled as a standalone function whose CFI assumes an
// 8-byte return address as the only stack usage.  In the JIT function the
// stencil code runs after a deeper prologue, so DW_CFA_def_cfa_offset values
// must be rebased:
//
//     new_offset = original_offset - 8 + base_cfa_offset
//
// All other instructions (advance_loc, register saves, etc.) are copied
// verbatim. Advance-location instructions additionally update *fde_last_addr so
// the caller can track the current PC position in the FDE.
//
static void copy_cfi_with_adjusted_cfa(Buffer *buf, const uint8_t *start,
                                       const uint8_t *end,
                                       uint64_t *fde_last_addr,
                                       int base_cfa_offset) {
  DwarfCFI inst;
  const uint8_t *p = start;
  while (dwarf_decode_cfi(&p, end, &inst)) {
    if (inst.opcode == DW_CFA_def_cfa_offset) {
      // Rebase: remove template's 8-byte RA, add actual stack depth
      buf_write_u8(buf, DW_CFA_def_cfa_offset);
      buf_write_uleb128(buf, inst.operand1 - 8 + base_cfa_offset);
    } else {
      // Copy instruction verbatim
      buf_write(buf, inst.raw, inst.raw_size);
      // Track address advances
      if (inst.opcode == DW_CFA_advance_loc ||
          inst.opcode == DW_CFA_advance_loc1 ||
          inst.opcode == DW_CFA_advance_loc2 ||
          inst.opcode == DW_CFA_advance_loc4) {
        *fde_last_addr += inst.operand1;
      }
    }
  }
}

/*
 * Generate a temporary source file with opcode names.
 * Only instruction positions (where inst_addrs[i] != NULL) are emitted,
 * so argument slots in the bytecode array are skipped.
 */
static char *write_source_file(const char *func_name, int instruction_count,
                               const Stencil **stencils, uint8_t **inst_addrs) {
  char dir_templ[] = "/tmp/rcp_jit_XXXXXX";
  if (!mkdtemp(dir_templ))
    return NULL;

  char *path = malloc(1024);
  snprintf(path, 1024, "%s/%s.S", dir_templ, func_name);

  FILE *fp = fopen(path, "w");
  if (!fp) {
    free(path);
    return NULL;
  }

  // One line per instruction (including _RCP_INIT prologue at index 0)
  for (int i = 0; i < instruction_count; i++) {
    if (!inst_addrs[i])
      continue;
    fprintf(fp, "%s\n", stencils[i]->name);
  }

  fclose(fp);
  return path;
}

/*
 * Build the Symbol Table (.symtab)
 *
 * We need a symbol table to map the function name to its memory address.
 * GDB uses this to know that the code at `code_addr` corresponds to
 * `func_name`.
 */
static void build_symtab(Elf64_Sym *symtab, size_t func_name_offset,
                         void *code_addr, size_t code_size) {
  /* Entry 0: NULL (Required by ELF standard) */
  /* Already zeroed by calloc in caller */

  /* Entry 1: Main function */
  int main_sym_idx = 1;
  symtab[main_sym_idx].st_name = func_name_offset;
  symtab[main_sym_idx].st_info = ELF64_ST_INFO(STB_GLOBAL, STT_FUNC);
  symtab[main_sym_idx].st_shndx = SEC_TEXT;
  symtab[main_sym_idx].st_value = (uint64_t)code_addr;
  symtab[main_sym_idx].st_size = code_size;
}

/*
 * Build DWARF Abbreviations (.debug_abbrev)
 *
 * Abbreviations describe the format of Debugging Information Entries (DIEs).
 * They act as a schema, allowing `.debug_info` to be compact by referencing
 * these definitions instead of repeating the structure for every entry.
 */
static void build_debug_abbrev(Buffer *abbrev) {
  buf_init(abbrev, 128);

  /* Abbrev 1: Compile Unit */
  buf_write_uleb128(abbrev, 1);
  buf_write_uleb128(abbrev, DW_TAG_compile_unit);
  buf_write_u8(abbrev, 1); // CHILDREN_YES

  buf_write_uleb128(abbrev, DW_AT_name);
  buf_write_uleb128(abbrev, DW_FORM_string);
  buf_write_uleb128(abbrev, DW_AT_stmt_list);
  buf_write_uleb128(abbrev, DW_FORM_data4);
  buf_write_uleb128(abbrev, DW_AT_low_pc);
  buf_write_uleb128(abbrev, DW_FORM_addr);
  buf_write_uleb128(abbrev, DW_AT_high_pc);
  buf_write_uleb128(abbrev, DW_FORM_addr); // Using addr for absolute end
  buf_write_u16(abbrev, 0);                // End attributes

  /* Abbrev 2: Subprogram */
  buf_write_uleb128(abbrev, 2);
  buf_write_uleb128(abbrev, DW_TAG_subprogram);
  buf_write_u8(abbrev, 1); // CHILDREN_YES

  buf_write_uleb128(abbrev, DW_AT_name);
  buf_write_uleb128(abbrev, DW_FORM_string);
  buf_write_uleb128(abbrev, DW_AT_low_pc);
  buf_write_uleb128(abbrev, DW_FORM_addr);
  buf_write_uleb128(abbrev, DW_AT_high_pc);
  buf_write_uleb128(abbrev, DW_FORM_addr);
  buf_write_u16(abbrev, 0); // End attributes

  /* Abbrev 3: Formal Parameter */
  buf_write_uleb128(abbrev, 3);
  buf_write_uleb128(abbrev, DW_TAG_formal_parameter);
  buf_write_u8(abbrev, 0); // CHILDREN_NO

  buf_write_uleb128(abbrev, DW_AT_name);
  buf_write_uleb128(abbrev, DW_FORM_string);
  buf_write_uleb128(abbrev, DW_AT_type);
  buf_write_uleb128(abbrev, DW_FORM_ref4);
  buf_write_uleb128(abbrev, DW_AT_location);
  buf_write_uleb128(abbrev, DW_FORM_block1);
  buf_write_u16(abbrev, 0);

  /* Abbrev 4: Pointer Type */
  buf_write_uleb128(abbrev, 4);
  buf_write_uleb128(abbrev, DW_TAG_pointer_type);
  buf_write_u8(abbrev, 0);

  buf_write_uleb128(abbrev, DW_AT_byte_size);
  buf_write_uleb128(abbrev, DW_FORM_data1);
  buf_write_u16(abbrev, 0);

  buf_write_u8(abbrev, 0); // End abbrevs
}

/*
 * Build DWARF Debug Info (.debug_info)
 *
 * This section contains the actual debugging information entries (DIEs)
 * that describe the code, matching the schema in `.debug_abbrev`.
 */
static void build_debug_info(Buffer *dbg_info, const char *func_name,
                             void *code_addr, size_t code_size,
                             const char *source_path) {
  buf_init(dbg_info, 256);

  /* Header - length will be fixed up after all DIEs are written */
  buf_write_u32(dbg_info, 0); // Length (placeholder)
  buf_write_u16(dbg_info, 4); // DWARF Version 4
  buf_write_u32(dbg_info, 0); // Abbrev offset
  buf_write_u8(dbg_info, 8);  // Ptr size

  /* DIE 1: Compile Unit */
  buf_write_uleb128(dbg_info, 1);          // Abbrev 1
  buf_write_string(dbg_info, source_path); // DW_AT_name
  buf_write_u32(dbg_info, 0); // DW_AT_stmt_list (offset 0 in .debug_line)
  buf_write_u64(dbg_info, (uint64_t)code_addr);             // DW_AT_low_pc
  buf_write_u64(dbg_info, (uint64_t)code_addr + code_size); // DW_AT_high_pc

  // Pointer Type DIE (void*) -- must precede Subprogram so it can be referenced
  size_t void_ptr_offset = dbg_info->size;
  buf_write_uleb128(dbg_info, 4); // Abbrev 4
  buf_write_u8(dbg_info, 8);      // DW_AT_byte_size = 8

  // Subprogram DIE
  buf_write_uleb128(dbg_info, 2);                           // Abbrev 2
  buf_write_string(dbg_info, func_name);                    // DW_AT_name
  buf_write_u64(dbg_info, (uint64_t)code_addr);             // DW_AT_low_pc
  buf_write_u64(dbg_info, (uint64_t)code_addr + code_size); // DW_AT_high_pc

  /* Formal Parameter: stack */
  buf_write_uleb128(dbg_info, 3);                     // Abbrev 3
  buf_write_string(dbg_info, "stack");                // Name
  buf_write_u32(dbg_info, (uint32_t)void_ptr_offset); // Type
  buf_write_u8(dbg_info, 1);                          // Block len
  buf_write_u8(dbg_info, DW_OP_reg5);                 // RDI

  /* Formal Parameter: locals */
  buf_write_uleb128(dbg_info, 3);                     // Abbrev 3
  buf_write_string(dbg_info, "locals");               // Name
  buf_write_u32(dbg_info, (uint32_t)void_ptr_offset); // Type
  buf_write_u8(dbg_info, 1);                          // Block len
  buf_write_u8(dbg_info, DW_OP_reg4);                 // RSI

  buf_write_u8(dbg_info, 0); // End of Subprogram children
  buf_write_u8(dbg_info, 0); // End of CU children

  // Fixup length
  uint32_t total_info_len = dbg_info->size - 4;
  memcpy(dbg_info->data, &total_info_len, 4);
}

/*
 * Build DWARF Line Table (.debug_line)
 *
 * Maps machine code addresses to source file lines. This allows GDB to step
 * through the "source code" (our generated assembly-like file) line by line.
 */
static void build_debug_line(Buffer *dbg_line, void *code_addr,
                             size_t code_size, uint8_t **inst_addrs,
                             int instruction_count, const char *source_path) {
  buf_init(dbg_line, 512);

  /* Header */
  size_t line_header_start = dbg_line->size;
  buf_write_u32(dbg_line, 0); // Length (placeholder)
  buf_write_u16(dbg_line, 4); // Version
  buf_write_u32(dbg_line, 0); // Prologue Length (placeholder)
  size_t prologue_start = dbg_line->size;

  buf_write_u8(dbg_line, 1);    // Min Inst Length
  buf_write_u8(dbg_line, 1);    // Max Ops Per Inst
  buf_write_u8(dbg_line, 1);    // Default is_stmt
  buf_write_u8(dbg_line, 0xFB); // Line Base (-5 as uint8_t)
  buf_write_u8(dbg_line, 14);   // Line Range
  buf_write_u8(dbg_line, 13);   // Opcode Base

  /* Standard Opcode Lengths (12 entries for opcodes 1..12) */
  uint8_t std_lens[] = {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1};
  buf_write(dbg_line, std_lens, sizeof(std_lens));

  /* Include Dirs */
  buf_write_u8(dbg_line, 0); // End

  /* File Names */
  buf_write_string(dbg_line, source_path);
  buf_write_uleb128(dbg_line, 0); // Dir index
  buf_write_uleb128(dbg_line, 0); // Time
  buf_write_uleb128(dbg_line, 0); // Size
  buf_write_u8(dbg_line, 0);      // End

  /* Fixup Prologue Length */
  uint32_t prologue_len = dbg_line->size - prologue_start;
  memcpy(dbg_line->data + line_header_start + 6, &prologue_len, 4);

  /* Line Number Program */

  // Set initial address
  buf_write_u8(dbg_line, 0);
  buf_write_uleb128(dbg_line, 1 + 8);
  buf_write_u8(dbg_line, DW_LNE_set_address);
  buf_write_u64(dbg_line, (uint64_t)code_addr);

  // Emit a row for each instruction. DWARF line state starts at line 1.
  uint64_t last_addr = (uint64_t)code_addr;
  for (int i = 0; i < instruction_count; i++) {
    if (!inst_addrs[i])
      continue;
    uint64_t curr = (uint64_t)inst_addrs[i];

    buf_write_u8(dbg_line, DW_LNS_advance_pc);
    buf_write_uleb128(dbg_line, curr - last_addr);

    buf_write_u8(dbg_line, DW_LNS_copy);

    buf_write_u8(dbg_line, DW_LNS_advance_line);
    buf_write_sleb128(dbg_line, 1);

    last_addr = curr;
  }

  /* End sequence */
  uint64_t end_addr = (uint64_t)code_addr + code_size;
  if (end_addr > last_addr) {
    buf_write_u8(dbg_line, DW_LNS_advance_pc);
    buf_write_uleb128(dbg_line, end_addr - last_addr);
  }
  buf_write_u8(dbg_line, 0);
  buf_write_uleb128(dbg_line, 1);
  buf_write_u8(dbg_line, DW_LNE_end_sequence);

  /* Fixup Total Length */
  uint32_t line_total_len = dbg_line->size - 4;
  memcpy(dbg_line->data, &line_total_len, 4);
}

/*
 * Build DWARF Frame info (.debug_frame)
 *
 * Provides Call Frame Information (CFI) to help GDB unwind the stack.
 * It describes how to restore registers and find the return address
 * for any instruction pointer within the JIT-compiled code.
 */
static void build_debug_frame(Buffer *dbg_frame, void *code_addr,
                              size_t code_size, uint8_t **inst_addrs,
                              int instruction_count, const Stencil **stencils,
                              int base_cfa_offset) {
  buf_init(dbg_frame, 512);

  /* CIE (Common Information Entry) */
  size_t cie_start = dbg_frame->size;
  buf_write_u32(dbg_frame, 0);                /* length (placeholder) */
  buf_write_u32(dbg_frame, 0xffffffff);       /* CIE_id = -1 for .debug_frame */
  buf_write_u8(dbg_frame, 4);                 /* version (DWARF 4) */
  buf_write_u8(dbg_frame, 0);                 /* augmentation string (empty) */
  buf_write_u8(dbg_frame, 8);                 /* address_size */
  buf_write_u8(dbg_frame, 0);                 /* segment_selector_size */
  buf_write_uleb128(dbg_frame, 1);            /* code_alignment_factor */
  buf_write_sleb128(dbg_frame, -8);           /* data_alignment_factor */
  buf_write_uleb128(dbg_frame, DWARF_REG_RA); /* return_address_register */

  /* Initial instructions: DW_CFA_def_cfa(RSP, 8) */
  buf_write_u8(dbg_frame, DW_CFA_def_cfa);
  buf_write_uleb128(dbg_frame, DWARF_REG_RSP);
  buf_write_uleb128(dbg_frame, 8);

  /* DW_CFA_offset(RA, 1) => RA at CFA-8 (factored: 1 * -8 = -8) */
  buf_write_u8(dbg_frame, DW_CFA_offset_base | DWARF_REG_RA);
  buf_write_uleb128(dbg_frame, 1);

  /* Pad CIE to pointer-size alignment */
  while ((dbg_frame->size - cie_start) % 8)
    buf_write_u8(dbg_frame, DW_CFA_nop);

  /* Fixup CIE length */
  uint32_t cie_len = dbg_frame->size - cie_start - 4;
  memcpy(dbg_frame->data + cie_start, &cie_len, 4);

  /* FDE (Frame Description Entry) */
  size_t fde_start = dbg_frame->size;
  buf_write_u32(dbg_frame, 0);         /* length (placeholder) */
  buf_write_u32(dbg_frame, cie_start); /* CIE_pointer (offset of CIE) */
  buf_write_u64(dbg_frame, (uint64_t)code_addr); /* initial_location */
  buf_write_u64(dbg_frame, code_size);           /* address_range */

  // =========================================================================
  // CFI Generation for jitted function body
  // =========================================================================
  //
  // At build time, each stencil is compiled as a standalone function. The
  // compiler generates a .debug_frame FDE (Frame Description Entry) for it,
  // which the extractor copies directly into stencil->debug_frame[].
  //
  // The FDE contains CFI bytecode describing how the CFA changes during the
  // stencil's execution. For a stencil compiled standalone, the CFI assumes:
  //   - Entry: CFA = RSP + 8 (just the return address pushed by CALL)
  //   - If the stencil does PUSH: CFA = RSP + 16, etc.
  //
  // At runtime, stencils are inlined into a JIT function after _RCP_INIT.
  // There is no CALL into each stencil, so there's no 8-byte return address
  // per stencil. Instead, the stack depth is determined by _RCP_INIT's frame
  // (base_cfa_offset = RCP_INIT_CFA_OFFSET computed by the extractor).
  //
  // The adjustment formula in copy_cfi_with_adjusted_cfa() is:
  //   new_cfa_offset = original_cfa_offset - 8 + base_cfa_offset
  //
  // The CFI virtual machine maintains a "current state" (CFA rule + register
  // rules). Each stencil's CFI may modify this state (e.g., after PUSH/POP).
  //
  // Problem: <F12>Stencil N's CFI changes leave the state "dirty" for stencil
  // N+1. But each stencil should start from the same clean post-prologue state.
  //
  // Solution: DWARF provides a state stack:
  //   - DW_CFA_remember_state: push current state onto the stack
  //   - DW_CFA_restore_state: pop state from the stack
  //
  // After _RCP_INIT, we remember_state to save the post-prologue state.
  // Before each body stencil, we restore_state (pop) then remember_state
  // (push again) to reset to the clean state while keeping it on the stack.
  //
  //
  // Loop structure
  // --------------
  // stencils[0] = _RCP_INIT (prologue), stencils[1..n] = body stencils
  //
  // For _RCP_INIT:
  //   emit CFI -> remember_state
  //
  // For each body stencil:
  //   restore_state -> remember_state -> def_cfa_offset -> emit CFI
  //
  // =========================================================================

  uint64_t fde_last_addr = (uint64_t)code_addr;
  int prologue_emitted = 0;

  for (int i = 0; i < instruction_count; i++) {
    if (!inst_addrs[i])
      continue;

    // DW_CFA_advance_loc: Move the "location counter" to this stencil's
    // address. CFI instructions apply to the address range from the previous
    // advance_loc to the next one. We emit the smallest encoding that fits the
    // delta.
    uint64_t curr = (uint64_t)inst_addrs[i];
    uint64_t delta = curr - fde_last_addr;
    if (delta > 0) {
      if (delta <= 0xff) {
        buf_write_u8(dbg_frame, DW_CFA_advance_loc1);
        buf_write_u8(dbg_frame, (uint8_t)delta);
      } else if (delta <= 0xffff) {
        buf_write_u8(dbg_frame, DW_CFA_advance_loc2);
        buf_write_u16(dbg_frame, (uint16_t)delta);
      } else {
        buf_write_u8(dbg_frame, DW_CFA_advance_loc4);
        buf_write_u32(dbg_frame, (uint32_t)delta);
      }
      fde_last_addr = curr;
    }

    const uint8_t *frame_data = stencils[i]->debug_frame;
    if (frame_data) {
      // FDE layout: [4B length][4B CIE_ptr][8B pc_begin][8B pc_range][CFI...]
      uint32_t length;
      memcpy(&length, frame_data, 4);
      const uint8_t *cfi_start = frame_data + 24;
      const uint8_t *cfi_end = frame_data + 4 + length;

      if (!prologue_emitted) {
        // _RCP_INIT: emit its CFI (describes frame setup), then save state
        copy_cfi_with_adjusted_cfa(dbg_frame, cfi_start, cfi_end,
                                   &fde_last_addr, base_cfa_offset);
        buf_write_u8(dbg_frame, DW_CFA_remember_state);
        prologue_emitted = 1;
      } else {
        // Body stencil: reset to post-prologue state, then emit its CFI
        buf_write_u8(dbg_frame, DW_CFA_restore_state);
        buf_write_u8(dbg_frame, DW_CFA_remember_state);
        buf_write_u8(dbg_frame, DW_CFA_def_cfa_offset);
        buf_write_uleb128(dbg_frame, base_cfa_offset);
        copy_cfi_with_adjusted_cfa(dbg_frame, cfi_start, cfi_end,
                                   &fde_last_addr, base_cfa_offset);
      }
    }
  }

  /* Pad FDE to pointer-size alignment */
  while ((dbg_frame->size - fde_start) % 8)
    buf_write_u8(dbg_frame, DW_CFA_nop);

  /* Fixup FDE length */
  uint32_t fde_len = dbg_frame->size - fde_start - 4;
  memcpy(dbg_frame->data + fde_start, &fde_len, 4);
}

/*
 * Build complete ELF image with symbols and DWARF info
 */
static void *create_debug_elf(const char *func_name, void *code_addr,
                              size_t code_size, uint8_t **inst_addrs,
                              int instruction_count, const Stencil **stencils,
                              int base_cfa_offset, size_t *elf_size) {

  /* Generate source file */
  char *source_path =
      write_source_file(func_name, instruction_count, stencils, inst_addrs);

  if (!source_path) {
    return NULL;
  }

  /* 1. Build String Table */
  Buffer strtab;
  buf_init(&strtab, 1024);
  buf_write_u8(&strtab, 0); // NULL byte
  size_t func_name_offset = buf_write_string(&strtab, func_name);

  /* 2. Build Symbol Table */
  Elf64_Sym *symtab = calloc(2, sizeof(Elf64_Sym));
  build_symtab(symtab, func_name_offset, code_addr, code_size);

  /* 3. Build .debug_abbrev */
  Buffer abbrev;
  build_debug_abbrev(&abbrev);

  /* 4. Build .debug_info */
  Buffer dbg_info;
  build_debug_info(&dbg_info, func_name, code_addr, code_size, source_path);

  /* 5. Build .debug_line */
  Buffer dbg_line;
  build_debug_line(&dbg_line, code_addr, code_size, inst_addrs,
                   instruction_count, source_path);

  /* 6. Build .debug_frame */
  Buffer dbg_frame;
  build_debug_frame(&dbg_frame, code_addr, code_size, inst_addrs,
                    instruction_count, stencils, base_cfa_offset);

  /* Section Headers String Table */
  const char shstrtab_data[] = "\0"
                               ".text\0"
                               ".symtab\0"
                               ".strtab\0"
                               ".shstrtab\0"
                               ".debug_abbrev\0"
                               ".debug_info\0"
                               ".debug_line\0"
                               ".debug_frame";
  size_t shstrtab_size = sizeof(shstrtab_data);

  /* Calculate Layout */
  size_t symtab_size = 2 * sizeof(Elf64_Sym); // 2 symbols

  size_t ehdr_size = sizeof(Elf64_Ehdr);
  size_t phdr_size = sizeof(Elf64_Phdr);

  size_t offset = ehdr_size + phdr_size;

  size_t symtab_offset = (offset + 7) & ~7;
  offset = symtab_offset + symtab_size;

  size_t strtab_offset = offset;
  offset += strtab.size;

  size_t shstrtab_offset = offset;
  offset += shstrtab_size;

  size_t abbrev_offset = offset;
  offset += abbrev.size;

  size_t info_offset = offset;
  offset += dbg_info.size;

  size_t line_offset = offset;
  offset += dbg_line.size;

  size_t frame_offset = (offset + 7) & ~7; /* align to 8 bytes */
  offset = frame_offset + dbg_frame.size;

  size_t shoff = (offset + 7) & ~7;
  size_t total_size = shoff + SEC_COUNT * sizeof(Elf64_Shdr);

  /* Allocate ELF */
  uint8_t *elf = calloc(1, total_size);
  if (!elf) {
    // Cleanup
    free(source_path);
    free(symtab);
    buf_free(&strtab);
    buf_free(&abbrev);
    buf_free(&dbg_info);
    buf_free(&dbg_line);
    buf_free(&dbg_frame);
    return NULL;
  }

  /* 7. Construct ELF Header */
  Elf64_Ehdr *ehdr = (Elf64_Ehdr *)elf;

  /* e_ident: Magic number and other info */
  memcpy(ehdr->e_ident, ELFMAG, SELFMAG); // "\x7fELF"

  /* e_ident[EI_CLASS]: File class.
   * ELFCLASS64 = 64-bit objects.
   * Necessary because we are running on a 64-bit architecture (x86_64). */
  ehdr->e_ident[EI_CLASS] = ELFCLASS64;

  /* e_ident[EI_DATA]: Data encoding.
   * ELFDATA2LSB = Little Endian (Least Significant Byte first).
   * x86_64 is little-endian. */
  ehdr->e_ident[EI_DATA] = ELFDATA2LSB;

  /* e_ident[EI_VERSION]: ELF version. Must be EV_CURRENT. */
  ehdr->e_ident[EI_VERSION] = EV_CURRENT;

  /* e_ident[EI_OSABI]: OS/ABI identification.
   * ELFOSABI_NONE (or ELFOSABI_SYSV) is standard for Linux/Unix. */
  ehdr->e_ident[EI_OSABI] = ELFOSABI_NONE;

  /* e_type: Object file type.
   * ET_EXEC = Executable file.
   * We treat the JIT code as an in-memory executable. */
  ehdr->e_type = ET_EXEC;

  /* e_machine: Architecture.
   * EM_X86_64 = AMD x86-64. Matches the host architecture. */
  ehdr->e_machine = EM_X86_64;

  /* e_version: Object file version. */
  ehdr->e_version = EV_CURRENT;

  /* e_entry: Entry point virtual address.
   * Set to the start of the JIT code (`code_addr`).
   * Though GDB might not use this for execution, it identifies the code
   * location. */
  ehdr->e_entry = (uint64_t)code_addr;

  /* e_phoff: Program Header Table offset.
   * Immediately follows the ELF header. */
  ehdr->e_phoff = ehdr_size;

  /* e_shoff: Section Header Table offset.
   * Placed at the very end of the file/buffer. */
  ehdr->e_shoff = shoff;

  /* e_ehsize: ELF Header size. */
  ehdr->e_ehsize = sizeof(Elf64_Ehdr);

  /* e_phentsize: Program Header Entry size. */
  ehdr->e_phentsize = sizeof(Elf64_Phdr);

  /* e_phnum: Number of Program Header entries.
   * We have 1 segment (PT_LOAD) covering the JIT code. */
  ehdr->e_phnum = 1;

  /* e_shentsize: Section Header Entry size. */
  ehdr->e_shentsize = sizeof(Elf64_Shdr);

  /* e_shnum: Number of Section Header entries.
   * Defined by `SEC_COUNT` enum. */
  ehdr->e_shnum = SEC_COUNT;

  /* e_shstrndx: Section Header String Table index.
   * Index of the section that contains section names (.shstrtab). */
  ehdr->e_shstrndx = SEC_SHSTRTAB;

  /* 8. Construct Program Header */
  Elf64_Phdr *phdr = (Elf64_Phdr *)(elf + ehdr_size);

  /* p_type: Segment type.
   * PT_LOAD = Loadable segment. The code is already in memory,
   * but this tells GDB that this segment maps to memory. */
  phdr->p_type = PT_LOAD;

  /* p_flags: Segment flags.
   * PF_R (Read) | PF_X (Execute). The code is readable and executable. */
  phdr->p_flags = PF_R | PF_X;

  /* p_vaddr: Virtual address.
   * The actual address of the JIT code in memory. */
  phdr->p_vaddr = (uint64_t)code_addr;

  /* p_paddr: Physical address. Same as vaddr on this system. */
  phdr->p_paddr = (uint64_t)code_addr;

  /* p_memsz: Memory size of the segment. */
  phdr->p_memsz = code_size;

  /* p_align: Alignment. */
  phdr->p_align = 16;

  /* 9. Copy Section Data */
  memcpy(elf + symtab_offset, symtab, 2 * sizeof(Elf64_Sym));
  memcpy(elf + strtab_offset, strtab.data, strtab.size);
  memcpy(elf + shstrtab_offset, shstrtab_data, shstrtab_size);
  memcpy(elf + abbrev_offset, abbrev.data, abbrev.size);
  memcpy(elf + info_offset, dbg_info.data, dbg_info.size);
  memcpy(elf + line_offset, dbg_line.data, dbg_line.size);
  memcpy(elf + frame_offset, dbg_frame.data, dbg_frame.size);

  /* 10. Construct Section Headers
   * The Section Header Table describes the sections of the ELF file.
   * GDB uses this table to locate debug information and map code.
   */
  Elf64_Shdr *shdrs = (Elf64_Shdr *)(elf + shoff);

  /* .text Section Header
   * Represents the executable code.
   */
  shdrs[SEC_TEXT].sh_name = 1;          /* Index into .shstrtab for ".text" */
  shdrs[SEC_TEXT].sh_type = SHT_NOBITS; /* No data in file, occupies memory.
                                         * We use SHT_NOBITS because the code
                                         * exists in memory at `code_addr`,
                                         * not in this ELF image. */
  shdrs[SEC_TEXT].sh_flags =
      SHF_ALLOC | SHF_EXECINSTR;                 /* Allocatable (in memory)
                                                  * and Executable. */
  shdrs[SEC_TEXT].sh_addr = (uint64_t)code_addr; /* Virtual address in memory */
  shdrs[SEC_TEXT].sh_size = code_size;           /* Size of the code */
  shdrs[SEC_TEXT].sh_addralign = 16;             /* Alignment */

  /* .symtab Section Header
   * Symbol Table: definitions of functions and variables.
   */
  shdrs[SEC_SYMTAB].sh_name = 7; /* Index for ".symtab" */
  shdrs[SEC_SYMTAB].sh_type = SHT_SYMTAB;
  shdrs[SEC_SYMTAB].sh_offset = symtab_offset; /* File offset */
  shdrs[SEC_SYMTAB].sh_size = symtab_size;
  shdrs[SEC_SYMTAB].sh_link = SEC_STRTAB; /* Associated string table index */
  shdrs[SEC_SYMTAB].sh_info = 1;          /* One local symbol (required) */
  shdrs[SEC_SYMTAB].sh_addralign = 8;
  shdrs[SEC_SYMTAB].sh_entsize = sizeof(Elf64_Sym); /* Size of one entry */

  /* .strtab Section Header
   * String Table: names associated with symbols.
   */
  shdrs[SEC_STRTAB].sh_name = 15; /* Index for ".strtab" */
  shdrs[SEC_STRTAB].sh_type = SHT_STRTAB;
  shdrs[SEC_STRTAB].sh_offset = strtab_offset;
  shdrs[SEC_STRTAB].sh_size = strtab.size;
  shdrs[SEC_STRTAB].sh_addralign = 1;

  /* .shstrtab Section Header
   * Section Header String Table: names of sections (.text, .symtab, etc.)
   */
  shdrs[SEC_SHSTRTAB].sh_name = 23; /* Index for ".shstrtab" */
  shdrs[SEC_SHSTRTAB].sh_type = SHT_STRTAB;
  shdrs[SEC_SHSTRTAB].sh_offset = shstrtab_offset;
  shdrs[SEC_SHSTRTAB].sh_size = shstrtab_size;
  shdrs[SEC_SHSTRTAB].sh_addralign = 1;

  /* .debug_abbrev Section Header
   * DWARF Abbreviations: schema for .debug_info.
   */
  shdrs[SEC_DEBUG_ABBREV].sh_name = 33; /* Index for ".debug_abbrev" */
  shdrs[SEC_DEBUG_ABBREV].sh_type = SHT_PROGBITS; /* Program defined data */
  shdrs[SEC_DEBUG_ABBREV].sh_offset = abbrev_offset;
  shdrs[SEC_DEBUG_ABBREV].sh_size = abbrev.size;
  shdrs[SEC_DEBUG_ABBREV].sh_addralign = 1;

  /* .debug_info Section Header
   * DWARF Debug Info: core debugging data (DIEs).
   */
  shdrs[SEC_DEBUG_INFO].sh_name = 47; /* Index for ".debug_info" */
  shdrs[SEC_DEBUG_INFO].sh_type = SHT_PROGBITS;
  shdrs[SEC_DEBUG_INFO].sh_offset = info_offset;
  shdrs[SEC_DEBUG_INFO].sh_size = dbg_info.size;
  shdrs[SEC_DEBUG_INFO].sh_addralign = 1;

  /* .debug_line Section Header
   * DWARF Line Table: source line mappings.
   */
  shdrs[SEC_DEBUG_LINE].sh_name = 59; /* Index for ".debug_line" */
  shdrs[SEC_DEBUG_LINE].sh_type = SHT_PROGBITS;
  shdrs[SEC_DEBUG_LINE].sh_offset = line_offset;
  shdrs[SEC_DEBUG_LINE].sh_size = dbg_line.size;
  shdrs[SEC_DEBUG_LINE].sh_addralign = 1;

  /* .debug_frame Section Header
   * DWARF Frame Info: stack unwinding (CFI).
   */
  shdrs[SEC_DEBUG_FRAME].sh_name = 71; /* Index for ".debug_frame" */
  shdrs[SEC_DEBUG_FRAME].sh_type = SHT_PROGBITS;
  shdrs[SEC_DEBUG_FRAME].sh_offset = frame_offset;
  shdrs[SEC_DEBUG_FRAME].sh_size = dbg_frame.size;
  shdrs[SEC_DEBUG_FRAME].sh_addralign = 8;

  free(source_path);
  free(symtab);
  buf_free(&strtab);
  buf_free(&abbrev);
  buf_free(&dbg_info);
  buf_free(&dbg_line);
  buf_free(&dbg_frame);

  *elf_size = total_size;
  return elf;
}

/*
 * Public API
 */

struct jit_code_entry *gdb_jit_register(const char *func_name, void *code_addr,
                                        size_t code_size, uint8_t **inst_addrs,
                                        int instruction_count,
                                        const Stencil **stencils,
                                        int base_cfa_offset) {

  if (!func_name || !code_addr || code_size == 0)
    return NULL;

  /* Create ELF image with symbols */
  size_t elf_size;
  void *elf =
      create_debug_elf(func_name, code_addr, code_size, inst_addrs,
                       instruction_count, stencils, base_cfa_offset, &elf_size);
  if (!elf)
    return NULL;

  /* Create JIT code entry */
  struct jit_code_entry *entry = malloc(sizeof(struct jit_code_entry));
  if (!entry) {
    free(elf);
    return NULL;
  }

  entry->symfile_addr = elf;
  entry->symfile_size = elf_size;
  entry->next_entry = NULL;
  entry->prev_entry = NULL;

  /* Register with GDB */
  entry->next_entry = __jit_debug_descriptor.first_entry;
  if (__jit_debug_descriptor.first_entry)
    __jit_debug_descriptor.first_entry->prev_entry = entry;
  __jit_debug_descriptor.first_entry = entry;

  __jit_debug_descriptor.relevant_entry = entry;
  __jit_debug_descriptor.action_flag = JIT_REGISTER_FN;

  /* Notify GDB */
  __jit_debug_register_code();

  __jit_debug_descriptor.action_flag = JIT_NOACTION;

  return entry;
}

void gdb_jit_unregister(struct jit_code_entry *entry) {
  if (!entry)
    return;

  /* Remove from linked list */
  if (entry->prev_entry)
    entry->prev_entry->next_entry = entry->next_entry;
  else
    __jit_debug_descriptor.first_entry = entry->next_entry;

  if (entry->next_entry)
    entry->next_entry->prev_entry = entry->prev_entry;

  /* Notify GDB */
  __jit_debug_descriptor.relevant_entry = entry;
  __jit_debug_descriptor.action_flag = JIT_UNREGISTER_FN;
  __jit_debug_register_code();
  __jit_debug_descriptor.action_flag = JIT_NOACTION;

  /* Free memory */
  free((void *)entry->symfile_addr);
  free(entry);
}

#endif /* GDB_JIT_SUPPORT */
