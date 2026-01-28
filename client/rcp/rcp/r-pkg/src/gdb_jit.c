#include "gdb_jit.h"

#ifdef GDB_JIT_SUPPORT

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <elf.h>

#include "rcp_bc_info.h"

/*
 * GDB JIT Interface Implementation
 *
 * This generates minimal ELF images with DWARF debug info for JIT-compiled
 * R bytecode functions, allowing GDB to:
 * - Show function names in backtraces
 * - Step through bytecode instructions (each bytecode = one "line")
 * - Set breakpoints on bytecode boundaries
 */

/* Global descriptor - GDB looks for this symbol */
struct jit_descriptor __jit_debug_descriptor = { 1, JIT_NOACTION, NULL, NULL };

/* GDB sets a breakpoint on this function to be notified of JIT events */
void __attribute__((noinline)) __jit_debug_register_code(void) {
    __asm__ volatile("");
}

/*
 * DWARF constants (minimal subset needed)
 */

/* Tags */
#define DW_TAG_compile_unit     0x11
#define DW_TAG_subprogram       0x2e

/* Attributes */
#define DW_AT_name              0x03
#define DW_AT_stmt_list         0x10
#define DW_AT_low_pc            0x11
#define DW_AT_high_pc           0x12
#define DW_AT_language          0x13
#define DW_AT_producer          0x25

/* Forms */
#define DW_FORM_addr            0x01
#define DW_FORM_data4           0x06
#define DW_FORM_data8           0x07
#define DW_FORM_string          0x08
#define DW_FORM_sec_offset      0x17

/* Languages */
#define DW_LANG_C               0x02

/* Line number opcodes */
#define DW_LNS_copy             1
#define DW_LNS_advance_pc       2
#define DW_LNS_advance_line     3
#define DW_LNS_set_file         4
#define DW_LNS_set_column       5
#define DW_LNS_negate_stmt      6
#define DW_LNS_set_basic_block  7
#define DW_LNS_const_add_pc     8
#define DW_LNS_fixed_advance_pc 9

/* Extended line opcodes */
#define DW_LNE_end_sequence     1
#define DW_LNE_set_address      2
#define DW_LNE_define_file      3

/* Children flag */
#define DW_CHILDREN_no          0
#define DW_CHILDREN_yes         1

/*
 * ELF Section indices
 */
enum {
    SEC_NULL = 0,
    SEC_TEXT,
    SEC_DEBUG_INFO,
    SEC_DEBUG_ABBREV,
    SEC_DEBUG_LINE,
    SEC_SYMTAB,
    SEC_STRTAB,
    SEC_SHSTRTAB,
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

static void buf_write_u8(Buffer *buf, uint8_t val) {
    buf_write(buf, &val, 1);
}

static void buf_write_u16(Buffer *buf, uint16_t val) {
    buf_write(buf, &val, 2);
}

static void buf_write_u32(Buffer *buf, uint32_t val) {
    buf_write(buf, &val, 4);
}

static void buf_write_u64(Buffer *buf, uint64_t val) {
    buf_write(buf, &val, 8);
}

static void buf_write_uleb128(Buffer *buf, uint64_t val) {
    do {
        uint8_t byte = val & 0x7f;
        val >>= 7;
        if (val != 0)
            byte |= 0x80;
        buf_write_u8(buf, byte);
    } while (val != 0);
}

static void buf_write_sleb128(Buffer *buf, int64_t val) {
    int more = 1;
    while (more) {
        uint8_t byte = val & 0x7f;
        val >>= 7;
        if ((val == 0 && !(byte & 0x40)) || (val == -1 && (byte & 0x40)))
            more = 0;
        else
            byte |= 0x80;
        buf_write_u8(buf, byte);
    }
}

static void buf_write_string(Buffer *buf, const char *str) {
    buf_write(buf, str, strlen(str) + 1);
}

static void buf_free(Buffer *buf) {
    free(buf->data);
    buf->data = NULL;
    buf->size = 0;
    buf->capacity = 0;
}

static size_t buf_align(Buffer *buf, size_t alignment) {
    size_t padding = (alignment - (buf->size % alignment)) % alignment;
    for (size_t i = 0; i < padding; i++)
        buf_write_u8(buf, 0);
    return padding;
}

/*
 * Build .debug_abbrev section
 */
static void build_debug_abbrev(Buffer *buf) {
    /* Abbreviation 1: DW_TAG_compile_unit */
    buf_write_uleb128(buf, 1);                  /* abbrev code */
    buf_write_uleb128(buf, DW_TAG_compile_unit);
    buf_write_u8(buf, DW_CHILDREN_yes);

    buf_write_uleb128(buf, DW_AT_name);
    buf_write_uleb128(buf, DW_FORM_string);

    buf_write_uleb128(buf, DW_AT_low_pc);
    buf_write_uleb128(buf, DW_FORM_addr);

    buf_write_uleb128(buf, DW_AT_high_pc);
    buf_write_uleb128(buf, DW_FORM_data8);

    buf_write_uleb128(buf, DW_AT_stmt_list);
    buf_write_uleb128(buf, DW_FORM_sec_offset);

    buf_write_uleb128(buf, 0);                  /* end of attributes */
    buf_write_uleb128(buf, 0);

    /* Abbreviation 2: DW_TAG_subprogram */
    buf_write_uleb128(buf, 2);                  /* abbrev code */
    buf_write_uleb128(buf, DW_TAG_subprogram);
    buf_write_u8(buf, DW_CHILDREN_no);

    buf_write_uleb128(buf, DW_AT_name);
    buf_write_uleb128(buf, DW_FORM_string);

    buf_write_uleb128(buf, DW_AT_low_pc);
    buf_write_uleb128(buf, DW_FORM_addr);

    buf_write_uleb128(buf, DW_AT_high_pc);
    buf_write_uleb128(buf, DW_FORM_data8);

    buf_write_uleb128(buf, 0);                  /* end of attributes */
    buf_write_uleb128(buf, 0);

    /* End of abbreviations */
    buf_write_uleb128(buf, 0);
}

/*
 * Build .debug_info section
 */
static void build_debug_info(Buffer *buf, const char *func_name,
                              uint64_t code_addr, uint64_t code_size,
                              uint32_t debug_line_offset) {
    size_t unit_start = buf->size;

    /* Compilation unit header */
    buf_write_u32(buf, 0);          /* unit_length - placeholder */
    buf_write_u16(buf, 4);          /* version (DWARF 4) */
    buf_write_u32(buf, 0);          /* debug_abbrev_offset */
    buf_write_u8(buf, 8);           /* address_size */

    /* DIE 1: DW_TAG_compile_unit (abbrev 1) */
    buf_write_uleb128(buf, 1);
    buf_write_string(buf, func_name);           /* DW_AT_name */
    buf_write_u64(buf, code_addr);              /* DW_AT_low_pc */
    buf_write_u64(buf, code_size);              /* DW_AT_high_pc (offset form) */
    buf_write_u32(buf, debug_line_offset);      /* DW_AT_stmt_list */

    /* DIE 2: DW_TAG_subprogram (abbrev 2) */
    buf_write_uleb128(buf, 2);
    buf_write_string(buf, func_name);           /* DW_AT_name */
    buf_write_u64(buf, code_addr);              /* DW_AT_low_pc */
    buf_write_u64(buf, code_size);              /* DW_AT_high_pc */

    /* End of children (for compile_unit) */
    buf_write_uleb128(buf, 0);

    /* Patch unit_length */
    uint32_t unit_length = buf->size - unit_start - 4;
    memcpy(buf->data + unit_start, &unit_length, 4);
}

/*
 * Build .debug_line section (line number program)
 *
 * Maps each bytecode instruction to a synthetic line number.
 * Line 1 = bytecode PC 0, Line 2 = bytecode PC 1, etc.
 */
static void build_debug_line(Buffer *buf, const char *func_name,
                              uint64_t code_addr,
                              uint8_t **inst_addrs, int bytecode_count,
                              const int *bytecode) {
    size_t header_start = buf->size;

    /* Line number program header */
    buf_write_u32(buf, 0);          /* unit_length - placeholder */
    buf_write_u16(buf, 4);          /* version (DWARF 4) */
    buf_write_u32(buf, 0);          /* header_length - placeholder */
    size_t after_header_length = buf->size;

    buf_write_u8(buf, 1);           /* minimum_instruction_length */
    buf_write_u8(buf, 1);           /* maximum_operations_per_instruction (DWARF 4) */
    buf_write_u8(buf, 1);           /* default_is_stmt */
    buf_write_u8(buf, (uint8_t)-5); /* line_base */
    buf_write_u8(buf, 14);          /* line_range */
    buf_write_u8(buf, 13);          /* opcode_base */

    /* Standard opcode lengths */
    buf_write_u8(buf, 0);   /* DW_LNS_copy */
    buf_write_u8(buf, 1);   /* DW_LNS_advance_pc */
    buf_write_u8(buf, 1);   /* DW_LNS_advance_line */
    buf_write_u8(buf, 1);   /* DW_LNS_set_file */
    buf_write_u8(buf, 1);   /* DW_LNS_set_column */
    buf_write_u8(buf, 0);   /* DW_LNS_negate_stmt */
    buf_write_u8(buf, 0);   /* DW_LNS_set_basic_block */
    buf_write_u8(buf, 0);   /* DW_LNS_const_add_pc */
    buf_write_u8(buf, 1);   /* DW_LNS_fixed_advance_pc */
    buf_write_u8(buf, 0);   /* DW_LNS_set_prologue_end (DWARF 3) */
    buf_write_u8(buf, 0);   /* DW_LNS_set_epilogue_begin */
    buf_write_u8(buf, 1);   /* DW_LNS_set_isa */

    /* Include directories (empty) */
    buf_write_u8(buf, 0);

    /* File names table */
    /* File 1: synthetic file name based on function */
    buf_write_string(buf, func_name);   /* file name */
    buf_write_uleb128(buf, 0);          /* directory index */
    buf_write_uleb128(buf, 0);          /* last modification time */
    buf_write_uleb128(buf, 0);          /* file size */
    buf_write_u8(buf, 0);               /* end of file names */

    /* Patch header_length */
    uint32_t header_length = buf->size - after_header_length;
    memcpy(buf->data + after_header_length - 4, &header_length, 4);

    /* Line number program - emit entries for each bytecode instruction */
    int current_line = 1;
    uint64_t current_addr = 0;

    for (int i = 0; i < bytecode_count; i++) {
        uint64_t addr = (uint64_t)inst_addrs[i];
        if (addr == 0) continue;  /* Skip unused entries */

        /* DW_LNE_set_address */
        buf_write_u8(buf, 0);               /* extended opcode marker */
        buf_write_uleb128(buf, 9);          /* length (1 + 8) */
        buf_write_u8(buf, DW_LNE_set_address);
        buf_write_u64(buf, addr);

        /* Set line if not first */
        if (current_line != i + 1) {
            int line_delta = (i + 1) - current_line;
            buf_write_u8(buf, DW_LNS_advance_line);
            buf_write_sleb128(buf, line_delta);
            current_line = i + 1;
        }

        /* DW_LNS_copy - emit a row */
        buf_write_u8(buf, DW_LNS_copy);
        current_addr = addr;
    }

    /* DW_LNE_end_sequence */
    buf_write_u8(buf, 0);               /* extended opcode marker */
    buf_write_uleb128(buf, 1);          /* length */
    buf_write_u8(buf, DW_LNE_end_sequence);

    /* Patch unit_length */
    uint32_t unit_length = buf->size - header_start - 4;
    memcpy(buf->data + header_start, &unit_length, 4);
}

/*
 * Build complete ELF image with DWARF debug info
 */
static void *create_debug_elf(const char *func_name,
                               void *code_addr, size_t code_size,
                               uint8_t **inst_addrs, int bytecode_count,
                               const int *bytecode,
                               size_t *out_size) {
    Buffer debug_abbrev, debug_info, debug_line;

    buf_init(&debug_abbrev, 256);
    buf_init(&debug_info, 512);
    buf_init(&debug_line, 1024);

    /* Build DWARF sections */
    build_debug_abbrev(&debug_abbrev);

    /* debug_line offset will be 0 relative to its section */
    build_debug_line(&debug_line, func_name, (uint64_t)code_addr,
                     inst_addrs, bytecode_count, bytecode);

    build_debug_info(&debug_info, func_name,
                     (uint64_t)code_addr, code_size, 0);

    /* Section name string table */
    const char *shstrtab =
        "\0"
        ".text\0"
        ".debug_info\0"
        ".debug_abbrev\0"
        ".debug_line\0"
        ".symtab\0"
        ".strtab\0"
        ".shstrtab\0";
    size_t shstrtab_size = 1 + 6 + 12 + 14 + 12 + 8 + 8 + 10;

    /* Symbol string table */
    size_t func_name_len = strlen(func_name);
    size_t strtab_size = 1 + func_name_len + 1;  /* \0 + name + \0 */

    /* Symbol table - one entry for the function */
    Elf64_Sym symtab[2];
    memset(symtab, 0, sizeof(symtab));
    /* Entry 0: NULL symbol */
    /* Entry 1: Function symbol - use SHN_ABS for absolute address */
    symtab[1].st_name = 1;  /* Offset in strtab */
    symtab[1].st_info = ELF64_ST_INFO(STB_GLOBAL, STT_FUNC);
    symtab[1].st_shndx = SHN_ABS;  /* Absolute address, not section-relative */
    symtab[1].st_value = (uint64_t)code_addr;
    symtab[1].st_size = code_size;

    /* Calculate section offsets */
    size_t offset = sizeof(Elf64_Ehdr);

    /* Align sections */
    size_t text_offset = offset;
    size_t text_size = 0;  /* .text is just a reference, no data */
    offset += text_size;

    size_t debug_info_offset = offset;
    offset += debug_info.size;

    size_t debug_abbrev_offset = offset;
    offset += debug_abbrev.size;

    size_t debug_line_offset = offset;
    offset += debug_line.size;

    size_t symtab_offset = (offset + 7) & ~7;  /* Align to 8 */
    offset = symtab_offset + sizeof(symtab);

    size_t strtab_offset = offset;
    offset += strtab_size;

    size_t shstrtab_offset = offset;
    offset += shstrtab_size;

    /* Section headers offset (aligned) */
    size_t shoff = (offset + 7) & ~7;
    size_t total_size = shoff + SEC_COUNT * sizeof(Elf64_Shdr);

    /* Allocate and fill ELF image */
    uint8_t *elf = calloc(1, total_size);
    if (!elf) {
        buf_free(&debug_abbrev);
        buf_free(&debug_info);
        buf_free(&debug_line);
        return NULL;
    }

    /* ELF header */
    Elf64_Ehdr *ehdr = (Elf64_Ehdr *)elf;
    memcpy(ehdr->e_ident, ELFMAG, SELFMAG);
    ehdr->e_ident[EI_CLASS] = ELFCLASS64;
    ehdr->e_ident[EI_DATA] = ELFDATA2LSB;
    ehdr->e_ident[EI_VERSION] = EV_CURRENT;
    ehdr->e_ident[EI_OSABI] = ELFOSABI_NONE;
    ehdr->e_type = ET_REL;
    ehdr->e_machine = EM_X86_64;
    ehdr->e_version = EV_CURRENT;
    ehdr->e_entry = 0;
    ehdr->e_phoff = 0;
    ehdr->e_shoff = shoff;
    ehdr->e_flags = 0;
    ehdr->e_ehsize = sizeof(Elf64_Ehdr);
    ehdr->e_phentsize = 0;
    ehdr->e_phnum = 0;
    ehdr->e_shentsize = sizeof(Elf64_Shdr);
    ehdr->e_shnum = SEC_COUNT;
    ehdr->e_shstrndx = SEC_SHSTRTAB;

    /* Copy section data */
    memcpy(elf + debug_info_offset, debug_info.data, debug_info.size);
    memcpy(elf + debug_abbrev_offset, debug_abbrev.data, debug_abbrev.size);
    memcpy(elf + debug_line_offset, debug_line.data, debug_line.size);
    memcpy(elf + symtab_offset, symtab, sizeof(symtab));

    /* String table */
    elf[strtab_offset] = 0;  /* First byte is null */
    memcpy(elf + strtab_offset + 1, func_name, func_name_len + 1);

    /* Section name string table */
    memcpy(elf + shstrtab_offset, shstrtab, shstrtab_size);

    /* Section headers */
    Elf64_Shdr *shdrs = (Elf64_Shdr *)(elf + shoff);

    /* SEC_NULL */
    /* Already zeroed */

    /* SEC_TEXT - references the JIT code (not copied into ELF) */
    /* Use SHT_NOBITS since code is in memory, not in this file */
    shdrs[SEC_TEXT].sh_name = 1;  /* ".text" offset in shstrtab */
    shdrs[SEC_TEXT].sh_type = SHT_NOBITS;
    shdrs[SEC_TEXT].sh_flags = SHF_ALLOC | SHF_EXECINSTR;
    shdrs[SEC_TEXT].sh_addr = (uint64_t)code_addr;
    shdrs[SEC_TEXT].sh_offset = 0;
    shdrs[SEC_TEXT].sh_size = code_size;
    shdrs[SEC_TEXT].sh_addralign = 16;

    /* SEC_DEBUG_INFO */
    shdrs[SEC_DEBUG_INFO].sh_name = 7;  /* ".debug_info" */
    shdrs[SEC_DEBUG_INFO].sh_type = SHT_PROGBITS;
    shdrs[SEC_DEBUG_INFO].sh_offset = debug_info_offset;
    shdrs[SEC_DEBUG_INFO].sh_size = debug_info.size;
    shdrs[SEC_DEBUG_INFO].sh_addralign = 1;

    /* SEC_DEBUG_ABBREV */
    shdrs[SEC_DEBUG_ABBREV].sh_name = 19;  /* ".debug_abbrev" */
    shdrs[SEC_DEBUG_ABBREV].sh_type = SHT_PROGBITS;
    shdrs[SEC_DEBUG_ABBREV].sh_offset = debug_abbrev_offset;
    shdrs[SEC_DEBUG_ABBREV].sh_size = debug_abbrev.size;
    shdrs[SEC_DEBUG_ABBREV].sh_addralign = 1;

    /* SEC_DEBUG_LINE */
    shdrs[SEC_DEBUG_LINE].sh_name = 33;  /* ".debug_line" */
    shdrs[SEC_DEBUG_LINE].sh_type = SHT_PROGBITS;
    shdrs[SEC_DEBUG_LINE].sh_offset = debug_line_offset;
    shdrs[SEC_DEBUG_LINE].sh_size = debug_line.size;
    shdrs[SEC_DEBUG_LINE].sh_addralign = 1;

    /* SEC_SYMTAB */
    shdrs[SEC_SYMTAB].sh_name = 45;  /* ".symtab" */
    shdrs[SEC_SYMTAB].sh_type = SHT_SYMTAB;
    shdrs[SEC_SYMTAB].sh_offset = symtab_offset;
    shdrs[SEC_SYMTAB].sh_size = sizeof(symtab);
    shdrs[SEC_SYMTAB].sh_link = SEC_STRTAB;
    shdrs[SEC_SYMTAB].sh_info = 1;  /* First non-local symbol index */
    shdrs[SEC_SYMTAB].sh_addralign = 8;
    shdrs[SEC_SYMTAB].sh_entsize = sizeof(Elf64_Sym);

    /* SEC_STRTAB */
    shdrs[SEC_STRTAB].sh_name = 53;  /* ".strtab" */
    shdrs[SEC_STRTAB].sh_type = SHT_STRTAB;
    shdrs[SEC_STRTAB].sh_offset = strtab_offset;
    shdrs[SEC_STRTAB].sh_size = strtab_size;
    shdrs[SEC_STRTAB].sh_addralign = 1;

    /* SEC_SHSTRTAB */
    shdrs[SEC_SHSTRTAB].sh_name = 61;  /* ".shstrtab" */
    shdrs[SEC_SHSTRTAB].sh_type = SHT_STRTAB;
    shdrs[SEC_SHSTRTAB].sh_offset = shstrtab_offset;
    shdrs[SEC_SHSTRTAB].sh_size = shstrtab_size;
    shdrs[SEC_SHSTRTAB].sh_addralign = 1;

    buf_free(&debug_abbrev);
    buf_free(&debug_info);
    buf_free(&debug_line);

    *out_size = total_size;
    return elf;
}

/*
 * Public API
 */

struct jit_code_entry *gdb_jit_register(
    const char *func_name,
    void *code_addr,
    size_t code_size,
    uint8_t **inst_addrs,
    int bytecode_count,
    const int *bytecode)
{
    if (!func_name || !code_addr || code_size == 0)
        return NULL;

    /* Create ELF image with debug info */
    size_t elf_size;
    void *elf = create_debug_elf(func_name, code_addr, code_size,
                                  inst_addrs, bytecode_count, bytecode,
                                  &elf_size);
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
