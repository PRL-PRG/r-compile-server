#include "gdb_jit.h"
#include <assert.h>

#ifdef GDB_JIT_SUPPORT

extern const char *const OPCODES_NAMES[];
extern const uint8_t OPCODES_COUNT;

#define _GNU_SOURCE
#include <elf.h>
#include <fcntl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

/* DWARF Constants */
#define DW_TAG_compile_unit 0x11
#define DW_TAG_subprogram 0x2e
#define DW_AT_name 0x03
#define DW_AT_stmt_list 0x10
#define DW_AT_low_pc 0x11
#define DW_AT_high_pc 0x12
#define DW_FORM_addr 0x01
#define DW_FORM_data4 0x06
#define DW_FORM_string 0x08
#define DW_LNS_copy 1
#define DW_LNS_advance_pc 2
#define DW_LNS_advance_line 3
#define DW_LNS_set_file 4
#define DW_LNE_end_sequence 1
#define DW_LNE_set_address 2

/* DWARF CFI opcodes */
#define DW_CFA_nop 0x00
#define DW_CFA_advance_loc1 0x02
#define DW_CFA_advance_loc2 0x03
#define DW_CFA_advance_loc4 0x04
#define DW_CFA_def_cfa 0x0c
#define DW_CFA_def_cfa_offset 0x0e
#define DW_CFA_offset_base 0x80

/* x86-64 DWARF register numbers */
#define DWARF_REG_RBX 3
#define DWARF_REG_RBP 6
#define DWARF_REG_RSP 7
#define DWARF_REG_R12 12
#define DWARF_REG_R13 13
#define DWARF_REG_R14 14
#define DWARF_REG_R15 15
#define DWARF_REG_RA 16

/*
 * GDB JIT Interface Implementation
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
  do {
    uint8_t byte = val & 0x7f;
    val >>= 7;
    if (val != 0)
      byte |= 0x80;
    buf_write(buf, &byte, 1);
  } while (val != 0);
}

static void buf_write_sleb128(Buffer *buf, int64_t val) {
  int more = 1;
  while (more) {
    uint8_t byte = val & 0x7f;
    val >>= 7;
    /* sign extend if neg */
    int sign = (byte & 0x40);
    if ((val == 0 && !sign) || (val == -1 && sign)) {
      more = 0;
    } else {
      byte |= 0x80;
    }
    buf_write(buf, &byte, 1);
  }
}

static void buf_free(Buffer *buf) {
  free(buf->data);
  buf->data = NULL;
  buf->size = 0;
  buf->capacity = 0;
}

/*
 * Detect stack adjustment at the beginning of a stencil.
 * Returns the number of bytes subtracted from RSP and the instruction size.
 */
typedef struct {
  int adjustment; /* bytes subtracted from RSP */
  int insn_size;  /* size of the adjustment instruction in bytes */
} StackAdj;

static StackAdj detect_stack_adjustment(const uint8_t *code) {
  /* sub $imm8, %rsp: REX.W=48 83 ec NN */
  if (code[0] == 0x48 && code[1] == 0x83 && code[2] == 0xec)
    return (StackAdj){(uint8_t)code[3], 4};
  /* sub $imm32, %rsp: REX.W=48 81 ec NN NN NN NN */
  if (code[0] == 0x48 && code[1] == 0x81 && code[2] == 0xec)
    return (StackAdj){*(const uint32_t *)&code[3], 7};
  /* push r64 (rax-rdi): 50-57 */
  if (code[0] >= 0x50 && code[0] <= 0x57)
    return (StackAdj){8, 1};
  /* push r8-r15: REX 41 50-57 */
  if (code[0] == 0x41 && code[1] >= 0x50 && code[1] <= 0x57)
    return (StackAdj){8, 2};
  return (StackAdj){0, 0};
}

/*
 * Generate a temporary source file with opcode names.
 * Only instruction positions (where inst_addrs[i] != NULL) are emitted,
 * so argument slots in the bytecode array are skipped.
 */
static char *write_source_file(const char *func_name, const int *bytecode,
                               int bytecode_count, uint8_t **inst_addrs) {
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

  /* L1 prologue */
  fprintf(fp, "__rcp_jit_prologue\n");

  /* L2+ opcodes — only emit lines for actual instructions */
  for (int i = 0; i < bytecode_count; i++) {
    if (!inst_addrs[i])
      continue;
    assert(bytecode[i] >= 0 && bytecode[i] < OPCODES_COUNT);
    fprintf(fp, "%s\n", OPCODES_NAMES[bytecode[i]]);
  }

  fclose(fp);
  return path;
}

/*
 * Build complete ELF image with symbols and DWARF info
 */
static void *create_debug_elf(const char *func_name, void *code_addr,
                              size_t code_size, uint8_t **inst_addrs,
                              int bytecode_count, const int *bytecode,
                              size_t *elf_size) {

  /* Generate source file */
  char *source_path =
      write_source_file(func_name, bytecode, bytecode_count, inst_addrs);

  if (!source_path) {
    return NULL;
  }

  /* Build dynamic string table */
  Buffer strtab;
  buf_init(&strtab, 1024);
  buf_write_u8(&strtab, 0); // NULL byte
  size_t func_name_offset = buf_write_string(&strtab, func_name);

  /* Build symbol table */
  /* Entry 0: NULL, Entry 1: Main function */
  int sym_count = 2;
  Elf64_Sym *symtab = calloc(sym_count, sizeof(Elf64_Sym));

  /* Entry 1: Main function */
  int main_sym_idx = 1;
  symtab[main_sym_idx].st_name = func_name_offset;
  symtab[main_sym_idx].st_info = ELF64_ST_INFO(STB_GLOBAL, STT_FUNC);
  symtab[main_sym_idx].st_shndx = SEC_TEXT;
  symtab[main_sym_idx].st_value = (uint64_t)code_addr;
  symtab[main_sym_idx].st_size = code_size;

  /* Build DWARF .debug_abbrev */
  Buffer abbrev;
  buf_init(&abbrev, 128);

  /* Abbrev 1: Compile Unit */
  buf_write_uleb128(&abbrev, 1);
  buf_write_uleb128(&abbrev, DW_TAG_compile_unit);
  buf_write_u8(&abbrev, 1); // CHILDREN_YES

  buf_write_uleb128(&abbrev, DW_AT_name);
  buf_write_uleb128(&abbrev, DW_FORM_string);
  buf_write_uleb128(&abbrev, DW_AT_stmt_list);
  buf_write_uleb128(&abbrev, DW_FORM_data4);
  buf_write_uleb128(&abbrev, DW_AT_low_pc);
  buf_write_uleb128(&abbrev, DW_FORM_addr);
  buf_write_uleb128(&abbrev, DW_AT_high_pc);
  buf_write_uleb128(&abbrev, DW_FORM_addr); // Using addr for absolute end
  buf_write_u16(&abbrev, 0);                // End attributes

  /* Abbrev 2: Subprogram */
  buf_write_uleb128(&abbrev, 2);
  buf_write_uleb128(&abbrev, DW_TAG_subprogram);
  buf_write_u8(&abbrev, 0); // CHILDREN_NO

  buf_write_uleb128(&abbrev, DW_AT_name);
  buf_write_uleb128(&abbrev, DW_FORM_string);
  buf_write_uleb128(&abbrev, DW_AT_low_pc);
  buf_write_uleb128(&abbrev, DW_FORM_addr);
  buf_write_uleb128(&abbrev, DW_AT_high_pc);
  buf_write_uleb128(&abbrev, DW_FORM_addr);
  buf_write_u16(&abbrev, 0); // End attributes

  buf_write_u8(&abbrev, 0); // End abbrevs

  /* Build DWARF .debug_info */
  Buffer dbg_info;
  buf_init(&dbg_info, 256);

  /* Header - length will be fixed up after all DIEs are written */
  buf_write_u32(&dbg_info, 0); // Length (placeholder)
  buf_write_u16(&dbg_info, 4); // DWARF Version 4
  buf_write_u32(&dbg_info, 0); // Abbrev offset
  buf_write_u8(&dbg_info, 8);  // Ptr size

  /* DIE 1: Compile Unit */
  buf_write_uleb128(&dbg_info, 1);          // Abbrev 1
  buf_write_string(&dbg_info, source_path); // DW_AT_name
  buf_write_u32(&dbg_info, 0); // DW_AT_stmt_list (offset 0 in .debug_line)
  buf_write_u64(&dbg_info, (uint64_t)code_addr);             // DW_AT_low_pc
  buf_write_u64(&dbg_info, (uint64_t)code_addr + code_size); // DW_AT_high_pc

  /* DIE 2: Subprogram */
  buf_write_uleb128(&dbg_info, 2);                           // Abbrev 2
  buf_write_string(&dbg_info, func_name);                    // DW_AT_name
  buf_write_u64(&dbg_info, (uint64_t)code_addr);             // DW_AT_low_pc
  buf_write_u64(&dbg_info, (uint64_t)code_addr + code_size); // DW_AT_high_pc

  buf_write_u8(&dbg_info, 0); // End of children

  /* Fixup length */
  uint32_t total_info_len = dbg_info.size - 4;
  memcpy(dbg_info.data, &total_info_len, 4);

  /* Build DWARF .debug_line */
  Buffer dbg_line;
  buf_init(&dbg_line, 512);

  /* Header */
  size_t line_header_start = dbg_line.size;
  buf_write_u32(&dbg_line, 0); // Length (placeholder)
  buf_write_u16(&dbg_line, 4); // Version
  buf_write_u32(&dbg_line, 0); // Prologue Length (placeholder)
  size_t prologue_start = dbg_line.size;

  buf_write_u8(&dbg_line, 1);  // Min Inst Length
  buf_write_u8(&dbg_line, 1);  // Max Ops Per Inst
  buf_write_u8(&dbg_line, 1);  // Default is_stmt
  buf_write_u8(&dbg_line, -5); // Line Base
  buf_write_u8(&dbg_line, 14); // Line Range
  buf_write_u8(&dbg_line, 13); // Opcode Base

  /* Standard Opcode Lengths (12 entries for opcodes 1..12) */
  uint8_t std_lens[] = {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1};
  buf_write(&dbg_line, std_lens, sizeof(std_lens));

  /* Include Dirs */
  buf_write_u8(&dbg_line, 0); // End

  /* File Names */
  buf_write_string(&dbg_line, source_path);
  buf_write_uleb128(&dbg_line, 0); // Dir index
  buf_write_uleb128(&dbg_line, 0); // Time
  buf_write_uleb128(&dbg_line, 0); // Size
  buf_write_u8(&dbg_line, 0);      // End

  /* Fixup Prologue Length */
  uint32_t prologue_len = dbg_line.size - prologue_start;
  memcpy(dbg_line.data + line_header_start + 6, &prologue_len, 4);

  /* Line Number Program */

  /* Emit row for prologue: line 1, address = code_addr */
  buf_write_u8(&dbg_line, 0); // Extended opcode
  buf_write_uleb128(&dbg_line, 1 + 8); // Length (opcode byte + 8-byte addr)
  buf_write_u8(&dbg_line, DW_LNE_set_address);
  buf_write_u64(&dbg_line, (uint64_t)code_addr);
  buf_write_u8(&dbg_line, DW_LNS_copy); // Emit row: (code_addr, line 1)

  /* Emit a row for each bytecode instruction.
   * inst_addrs[i] is non-NULL only at instruction start positions;
   * argument slots are NULL and skipped. */
  uint64_t last_addr = (uint64_t)code_addr;
  for (int i = 0; i < bytecode_count; i++) {
    if (!inst_addrs[i])
      continue;
    uint64_t curr = (uint64_t)inst_addrs[i];

    buf_write_u8(&dbg_line, DW_LNS_advance_pc);
    buf_write_uleb128(&dbg_line, curr - last_addr);

    buf_write_u8(&dbg_line, DW_LNS_advance_line);
    buf_write_sleb128(&dbg_line, 1);

    buf_write_u8(&dbg_line, DW_LNS_copy);

    last_addr = curr;
  }

  /* End sequence */
  buf_write_u8(&dbg_line, 0);
  buf_write_uleb128(&dbg_line, 1);
  buf_write_u8(&dbg_line, DW_LNE_end_sequence);

  /* Fixup Total Length */
  uint32_t line_total_len = dbg_line.size - 4;
  memcpy(dbg_line.data, &line_total_len, 4);

  /* Build .debug_frame (CIE + FDE) */
  Buffer dbg_frame;
  buf_init(&dbg_frame, 512);

  /* CIE (Common Information Entry) */
  size_t cie_start = dbg_frame.size;
  buf_write_u32(&dbg_frame, 0);          /* length (placeholder) */
  buf_write_u32(&dbg_frame, 0xffffffff); /* CIE_id = -1 for .debug_frame */
  buf_write_u8(&dbg_frame, 4);           /* version (DWARF 4) */
  buf_write_u8(&dbg_frame, 0);           /* augmentation string (empty) */
  buf_write_u8(&dbg_frame, 8);           /* address_size */
  buf_write_u8(&dbg_frame, 0);           /* segment_selector_size */
  buf_write_uleb128(&dbg_frame, 1);      /* code_alignment_factor */
  buf_write_sleb128(&dbg_frame, -8);     /* data_alignment_factor */
  buf_write_uleb128(&dbg_frame, DWARF_REG_RA); /* return_address_register */

  /* Initial instructions: DW_CFA_def_cfa(RSP, 8) */
  buf_write_u8(&dbg_frame, DW_CFA_def_cfa);
  buf_write_uleb128(&dbg_frame, DWARF_REG_RSP);
  buf_write_uleb128(&dbg_frame, 8);

  /* DW_CFA_offset(RA, 1) => RA at CFA-8 (factored: 1 * -8 = -8) */
  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_RA);
  buf_write_uleb128(&dbg_frame, 1);

  /* Pad CIE to pointer-size alignment */
  while ((dbg_frame.size - cie_start) % 8)
    buf_write_u8(&dbg_frame, DW_CFA_nop);

  /* Fixup CIE length */
  uint32_t cie_len = dbg_frame.size - cie_start - 4;
  memcpy(dbg_frame.data + cie_start, &cie_len, 4);

  /* FDE (Frame Description Entry) */
  size_t fde_start = dbg_frame.size;
  buf_write_u32(&dbg_frame, 0);          /* length (placeholder) */
  buf_write_u32(&dbg_frame, cie_start);  /* CIE_pointer (offset of CIE) */
  buf_write_u64(&dbg_frame, (uint64_t)code_addr); /* initial_location */
  buf_write_u64(&dbg_frame, code_size);  /* address_range */

  /*
   * After _RCP_INIT prologue (7 pushes + call), CFA = RSP + 0x48 (72).
   * The prologue pushes: r15, r14, r13, r12, rbp, rbx, rax (padding).
   */
  buf_write_u8(&dbg_frame, DW_CFA_def_cfa_offset);
  buf_write_uleb128(&dbg_frame, 0x48);

  /* Register save locations (factored offset = CFA_offset / 8) */
  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_R15);
  buf_write_uleb128(&dbg_frame, 2); /* CFA-16 */

  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_R14);
  buf_write_uleb128(&dbg_frame, 3); /* CFA-24 */

  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_R13);
  buf_write_uleb128(&dbg_frame, 4); /* CFA-32 */

  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_R12);
  buf_write_uleb128(&dbg_frame, 5); /* CFA-40 */

  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_RBP);
  buf_write_uleb128(&dbg_frame, 6); /* CFA-48 */

  buf_write_u8(&dbg_frame, DW_CFA_offset_base | DWARF_REG_RBX);
  buf_write_uleb128(&dbg_frame, 7); /* CFA-56 */

  /* Per-stencil CFI rows: advance to each instruction and set CFA offset.
   *
   * At the start of each stencil, RSP is at base (CFA = RSP + 0x48).
   * The stencil may then adjust RSP (sub/push) before calling C helpers.
   * We emit TWO rows for stencils with adjustments:
   *   1. At inst_addrs[i]:            CFA = RSP + 0x48 (before adjustment)
   *   2. At inst_addrs[i]+insn_size:  CFA = RSP + 0x48 + adj (after adjustment)
   * This ensures GDB computes a consistent CFA both at the instruction
   * start (for frame identity) and at call sites (for unwinding). */
  uint64_t fde_last_addr = (uint64_t)code_addr;
  for (int i = 0; i < bytecode_count; i++) {
    if (!inst_addrs[i])
      continue;
    uint64_t curr = (uint64_t)inst_addrs[i];
    uint64_t delta = curr - fde_last_addr;
    if (delta > 0) {
      if (delta <= 0xff) {
        buf_write_u8(&dbg_frame, DW_CFA_advance_loc1);
        buf_write_u8(&dbg_frame, (uint8_t)delta);
      } else if (delta <= 0xffff) {
        buf_write_u8(&dbg_frame, DW_CFA_advance_loc2);
        buf_write_u16(&dbg_frame, (uint16_t)delta);
      } else {
        buf_write_u8(&dbg_frame, DW_CFA_advance_loc4);
        buf_write_u32(&dbg_frame, (uint32_t)delta);
      }
      fde_last_addr = curr;
    }

    /* At stencil entry, no stack adjustment yet */
    buf_write_u8(&dbg_frame, DW_CFA_def_cfa_offset);
    buf_write_uleb128(&dbg_frame, 0x48);

    StackAdj adj = detect_stack_adjustment(inst_addrs[i]);
    if (adj.adjustment > 0) {
      /* Advance past the adjustment instruction, then set new CFA offset */
      buf_write_u8(&dbg_frame, DW_CFA_advance_loc1);
      buf_write_u8(&dbg_frame, (uint8_t)adj.insn_size);
      fde_last_addr += adj.insn_size;
      buf_write_u8(&dbg_frame, DW_CFA_def_cfa_offset);
      buf_write_uleb128(&dbg_frame, 0x48 + adj.adjustment);
    }
  }

  /* Pad FDE to pointer-size alignment */
  while ((dbg_frame.size - fde_start) % 8)
    buf_write_u8(&dbg_frame, DW_CFA_nop);

  /* Fixup FDE length */
  uint32_t fde_len = dbg_frame.size - fde_start - 4;
  memcpy(dbg_frame.data + fde_start, &fde_len, 4);

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
  size_t symtab_size = sym_count * sizeof(Elf64_Sym);

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

  /* ELF Header */
  Elf64_Ehdr *ehdr = (Elf64_Ehdr *)elf;
  memcpy(ehdr->e_ident, ELFMAG, SELFMAG);
  ehdr->e_ident[EI_CLASS] = ELFCLASS64;
  ehdr->e_ident[EI_DATA] = ELFDATA2LSB;
  ehdr->e_ident[EI_VERSION] = EV_CURRENT;
  ehdr->e_ident[EI_OSABI] = ELFOSABI_NONE;
  ehdr->e_type = ET_EXEC;
  ehdr->e_machine = EM_X86_64;
  ehdr->e_version = EV_CURRENT;
  ehdr->e_entry = (uint64_t)code_addr;
  ehdr->e_phoff = ehdr_size;
  ehdr->e_shoff = shoff;
  ehdr->e_ehsize = sizeof(Elf64_Ehdr);
  ehdr->e_phentsize = sizeof(Elf64_Phdr);
  ehdr->e_phnum = 1;
  ehdr->e_shentsize = sizeof(Elf64_Shdr);
  ehdr->e_shnum = SEC_COUNT;
  ehdr->e_shstrndx = SEC_SHSTRTAB;

  /* Program Header */
  Elf64_Phdr *phdr = (Elf64_Phdr *)(elf + ehdr_size);
  phdr->p_type = PT_LOAD;
  phdr->p_flags = PF_R | PF_X;
  phdr->p_vaddr = (uint64_t)code_addr;
  phdr->p_paddr = (uint64_t)code_addr;
  phdr->p_memsz = code_size;
  phdr->p_align = 16;

  /* Copy Data */
  memcpy(elf + symtab_offset, symtab, symtab_size);
  memcpy(elf + strtab_offset, strtab.data, strtab.size);
  memcpy(elf + shstrtab_offset, shstrtab_data, shstrtab_size);
  memcpy(elf + abbrev_offset, abbrev.data, abbrev.size);
  memcpy(elf + info_offset, dbg_info.data, dbg_info.size);
  memcpy(elf + line_offset, dbg_line.data, dbg_line.size);
  memcpy(elf + frame_offset, dbg_frame.data, dbg_frame.size);

  /* Section Headers */
  Elf64_Shdr *shdrs = (Elf64_Shdr *)(elf + shoff);

  /* .text */
  shdrs[SEC_TEXT].sh_name = 1;
  shdrs[SEC_TEXT].sh_type = SHT_NOBITS;
  shdrs[SEC_TEXT].sh_flags = SHF_ALLOC | SHF_EXECINSTR;
  shdrs[SEC_TEXT].sh_addr = (uint64_t)code_addr;
  shdrs[SEC_TEXT].sh_size = code_size;
  shdrs[SEC_TEXT].sh_addralign = 16;

  /* .symtab */
  shdrs[SEC_SYMTAB].sh_name = 7;
  shdrs[SEC_SYMTAB].sh_type = SHT_SYMTAB;
  shdrs[SEC_SYMTAB].sh_offset = symtab_offset;
  shdrs[SEC_SYMTAB].sh_size = symtab_size;
  shdrs[SEC_SYMTAB].sh_link = SEC_STRTAB;
  shdrs[SEC_SYMTAB].sh_info = 1;
  shdrs[SEC_SYMTAB].sh_addralign = 8;
  shdrs[SEC_SYMTAB].sh_entsize = sizeof(Elf64_Sym);

  /* .strtab */
  shdrs[SEC_STRTAB].sh_name = 15;
  shdrs[SEC_STRTAB].sh_type = SHT_STRTAB;
  shdrs[SEC_STRTAB].sh_offset = strtab_offset;
  shdrs[SEC_STRTAB].sh_size = strtab.size;
  shdrs[SEC_STRTAB].sh_addralign = 1;

  /* .shstrtab */
  shdrs[SEC_SHSTRTAB].sh_name = 23;
  shdrs[SEC_SHSTRTAB].sh_type = SHT_STRTAB;
  shdrs[SEC_SHSTRTAB].sh_offset = shstrtab_offset;
  shdrs[SEC_SHSTRTAB].sh_size = shstrtab_size;
  shdrs[SEC_SHSTRTAB].sh_addralign = 1;

  /* .debug_abbrev */
  shdrs[SEC_DEBUG_ABBREV].sh_name = 33;
  shdrs[SEC_DEBUG_ABBREV].sh_type = SHT_PROGBITS;
  shdrs[SEC_DEBUG_ABBREV].sh_offset = abbrev_offset;
  shdrs[SEC_DEBUG_ABBREV].sh_size = abbrev.size;
  shdrs[SEC_DEBUG_ABBREV].sh_addralign = 1;

  /* .debug_info */
  shdrs[SEC_DEBUG_INFO].sh_name = 47;
  shdrs[SEC_DEBUG_INFO].sh_type = SHT_PROGBITS;
  shdrs[SEC_DEBUG_INFO].sh_offset = info_offset;
  shdrs[SEC_DEBUG_INFO].sh_size = dbg_info.size;
  shdrs[SEC_DEBUG_INFO].sh_addralign = 1;

  /* .debug_line */
  shdrs[SEC_DEBUG_LINE].sh_name = 59;
  shdrs[SEC_DEBUG_LINE].sh_type = SHT_PROGBITS;
  shdrs[SEC_DEBUG_LINE].sh_offset = line_offset;
  shdrs[SEC_DEBUG_LINE].sh_size = dbg_line.size;
  shdrs[SEC_DEBUG_LINE].sh_addralign = 1;

  /* .debug_frame */
  shdrs[SEC_DEBUG_FRAME].sh_name = 71;
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
                                        int bytecode_count,
                                        const int *bytecode) {
  if (!func_name || !code_addr || code_size == 0)
    return NULL;

  /* Create ELF image with symbols */
  size_t elf_size;
  void *elf = create_debug_elf(func_name, code_addr, code_size, inst_addrs,
                               bytecode_count, bytecode, &elf_size);
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
