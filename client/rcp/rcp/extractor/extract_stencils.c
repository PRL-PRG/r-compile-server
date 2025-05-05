#include <stdio.h>
#include <stdlib.h>
#include <bfd.h>
#include <string.h>
#include "../rcp_common.h"
#include <stddef.h>
#include <assert.h>

typedef enum
{
  R_X86_64_NONE = 0,
  R_X86_64_64,
  R_X86_64_PC32,
  R_X86_64_GOT32,
  R_X86_64_PLT32,
  R_X86_64_COPY,
  R_X86_64_GLOB_DAT,
  R_X86_64_JUMP_SLOT,
  R_X86_64_RELATIVE,
  R_X86_64_GOTPCREL,
  R_X86_64_32,
  R_X86_64_32S,
  R_X86_64_16,
  R_X86_64_PC16,
  R_X86_64_8,
  R_X86_64_PC8,
  R_X86_64_DPTMOD64,
  R_X86_64_DTPOFF64,
  R_X86_64_TPOFF64,
  R_X86_64_TLSGD,
  R_X86_64_TLSLD,
  R_X86_64_DTPOFF32,
  R_X86_64_GOTTPOFF,
  R_X86_64_TPOFF32
} X86_64_RELOC_KIND;

typedef struct NamedStencil {
  char name[32];
  StencilMutable stencil;
  struct NamedStencil * next;
} NamedStencil;

typedef struct
{
  uint8_t *rodata;
  size_t rodata_size;
  StencilMutable stencils_opcodes[sizeof(OPCODES) / sizeof(*OPCODES)];
  NamedStencil stencil_extra_first;
  NamedStencil *stencil_extra_last;
} Stencils;

// Function to check if str starts with prefix
static int starts_with(const char *str, const char *prefix)
{
  while (*prefix)
  {
    if (*str != *prefix)
      return 0;
    str++;
    prefix++;
  }
  return 1;
}

static const char *remove_prefix(const char *str, const char *prefix)
{
  while (*prefix)
  {
    if (*str != *prefix)
      return NULL;
    str++;
    prefix++;
  }
  return str;
}

static int get_opcode(const char *str)
{
  if (!starts_with(str, "_RCP_"))
    return -1;

  str += 5;

  for (int i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
    if (strcmp(str, OPCODES[i]) == 0)
      return i;
  return -1;
}

static void print_byte_array(FILE *file, const unsigned char *arr, size_t len)
{
  for (size_t i = 0; i < len; i++)
    fprintf(file, "0x%02X, ", arr[i]); // Print each byte in hex format
}

static void export_body(FILE *file, const StencilMutable *stencil, const char *opcode_name)
{
  fprintf(file, "const Hole _%s_HOLES[] = {\n", opcode_name);
  for (size_t j = 0; j < stencil->holes_size; ++j)
  {
    const Hole *hole = &stencil->holes[j];

    fprintf(file, "{ .offset = 0x%lX, .addend = %ld, .size = %hu, .kind = %u, .is_pc_relative = %u, .indirection_level = %u",
            hole->offset, hole->addend, hole->size, hole->kind, hole->is_pc_relative, hole->indirection_level);

    switch (hole->kind)
    {
    case RELOC_RUNTIME_SYMBOL:
      fprintf(file, ", .val.symbol = &%s", hole->val.symbol_name);
      break;
    case RELOC_RCP_EXEC_IMM:
    case RELOC_RCP_RAW_IMM:
    case RELOC_RCP_CONST_AT_IMM:
    case RELOC_RCP_CONST_STR_AT_IMM:
    case RELOC_RCP_CONSTCELL_AT_IMM:
    case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
      fprintf(file, ", .val.imm_pos = %zu", hole->val.imm_pos);
      break;
    }

    fprintf(file, " },\n");
  }

  fprintf(file, "};\n\n");
  fprintf(file, "const uint8_t _%s_BODY[] = {\n", opcode_name);
  print_byte_array(file, stencil->body, stencil->body_size);
  fprintf(file, "\n};\n\n");
}

static void export_to_files(const Stencils *stencils)
{
  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if (stencils->stencils_opcodes[i].body_size != 0)
    {
      char filename[32];
      strcpy(filename, OPCODES[i]);
      strcat(filename, ".h");
      FILE *file = fopen(filename, "wt");
      export_body(file, &stencils->stencils_opcodes[i], OPCODES[i]);
      fclose(file);
    }
  }
  for (const NamedStencil *current = &stencils->stencil_extra_first; current->next != NULL; current = current->next)
  {
    char filename[64];
    strcpy(filename, current->name);
    strcat(filename, ".h");

    FILE *file = fopen(filename, "wt");
    export_body(file, &current->stencil, current->name);
    fclose(file);
  }

  FILE *file = fopen("stencils.h", "wt");

  for (const NamedStencil *current = &stencils->stencil_extra_first; current->next != NULL; current = current->next)
    fprintf(file, "#include \"%s.h\"\n", current->name);

  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if (stencils->stencils_opcodes[i].body_size != 0)
      fprintf(file, "#include \"%s.h\"\n", OPCODES[i]);
  }

  fprintf(file, "uint8_t rodata[] = { ");
  print_byte_array(file, stencils->rodata, stencils->rodata_size);
  fprintf(file, "};\n");

  for (const NamedStencil *current = &stencils->stencil_extra_first; current->next != NULL; current = current->next)
    fprintf(file, "const Stencil %s = { %zu, _%s_BODY, %zu, _%s_HOLES};\n", current->name, current->stencil.body_size, current->name, current->stencil.holes_size, current->name);

  fprintf(file, "\nconst Stencil stencils[%zu] = {\n", sizeof(OPCODES) / sizeof(*OPCODES));

  for (int i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if (stencils->stencils_opcodes[i].body_size != 0)
      fprintf(file, "{%zu, _%s_BODY, %zu, _%s_HOLES}, // %s\n", stencils->stencils_opcodes[i].body_size, OPCODES[i], stencils->stencils_opcodes[i].holes_size, OPCODES[i], OPCODES[i]);
    else
      fprintf(file, "{0, NULL, 0, NULL}, // %s\n", OPCODES[i]);
  }

  fprintf(file, "};\n");
  fclose(file);
}

#define RSH_R_SYMBOLS                                                          \
  X([, Rsh_Subset)                                                        \
  X([[, Rsh_Subset2)                                                      \
  X(value, Rsh_Value)                                                     \
  X([<-, Rsh_Subassign)                                                   \
  X([[<-, Rsh_Subassign2)                                                 \
  X(.External2, Rsh_DotExternal2)                                         \
  X(*tmp*, Rsh_Tmpval)                                                    \
  X(:, Rsh_Colon)                                                         \
  X(seq_along, Rsh_SeqAlong)                                              \
  X(seq_len, Rsh_SeqLen)                                                  \
  X(log, Rsh_Log)

static int rsh_symbol_id(const char *name)
{
  int counter = 0;
  if (strcmp(name, "R_ARITH_OPS") == 0)
    return counter;
  counter += 5;

  if (strcmp(name, "R_ARITH_OP_SYMS") == 0)
    return counter;
  counter += 5;

  if (strcmp(name, "R_REL_OPS") == 0)
    return counter;
  counter += 6;

  if (strcmp(name, "R_REL_OP_SYMS") == 0)
    return counter;
  counter += 6;

  if (strcmp(name, "R_MATH1_OPS") == 0)
    return counter;
  counter += 2;

  if (strcmp(name, "R_UNARY_OPS") == 0)
    return counter;
  counter += 2;

  if (strcmp(name, "R_UNARY_OP_SYMS") == 0)
    return counter;
  counter += 2;

  if (strcmp(name, "R_LOGIC2_OPS") == 0)
    return counter;
  counter += 2;

  if (strcmp(name, "R_MATH1_EXT_OPS") == 0)
    return counter;
  counter += 24;

  if (strcmp(name, "R_MATH1_EXT_SYMS") == 0)
    return counter;
  counter += 24;

  //if (strcmp(name, "R_MATH1_EXT_FUNS") == 0)
  //  return counter;
  //counter += 24;

  #define X(a, b) if (strcmp(name, #b"Sym") == 0) return counter; counter += 1;
  RSH_R_SYMBOLS
  #undef X
  #define X(a, b) if (strcmp(name, #b"Op") == 0) return counter; counter += 1;
  RSH_R_SYMBOLS
  #undef X

  if (strcmp(name, "NOT_OP") == 0)
    return counter;
  counter += 1;

  if (strcmp(name, "LOG_OP") == 0)
    return counter;
  counter += 1;

  return -1;
}

static void process_relocation(StencilMutable *stencil, Hole *hole, const arelent *rel)
{
  hole->offset = rel->address;
  hole->addend = rel->addend;
  hole->is_pc_relative = rel->howto->pc_relative;
  hole->size = rel->howto->size;

  switch (rel->howto->type)
  {
  case R_X86_64_PLT32:
  {
    assert(strcmp(rel->howto->name, "R_X86_64_PLT32") == 0);
    assert(rel->howto->pc_relative == 1);
    assert(rel->howto->size == 4);
    hole->indirection_level = 1;
  }
  break;
  case R_X86_64_PC32:
  {
    assert(strcmp(rel->howto->name, "R_X86_64_PC32") == 0);
    assert(rel->howto->pc_relative == 1);
    assert(rel->howto->size == 4);
    hole->indirection_level = 1;
  }
  break;
  case R_X86_64_32:
  case R_X86_64_32S:
  {
    assert(strcmp(rel->howto->name, "R_X86_64_32") == 0 || strcmp(rel->howto->name, "R_X86_64_32S") == 0);
    assert(rel->howto->pc_relative == 0);
    assert(rel->howto->size == 4);
    hole->indirection_level = 1;
  }
  break;
  case R_X86_64_64:
  {
    assert(strcmp(rel->howto->name, "R_X86_64_64") == 0);
    assert(rel->howto->pc_relative == 0);
    assert(rel->howto->size == 8);
    hole->indirection_level = 1;
  }
  break;
  //case R_X86_64_REX_GOTPCRELX: // not tested
  //{
  //  assert(strcmp(rel->howto->name, "R_X86_64_REX_GOTPCRELX") == 0);
  //  assert(rel->howto->pc_relative == 1);
  //  hole->size = 4;
  //  hole->indirection_level = 2;
  //} break;
  default:
  {
    fprintf(stderr, "Unsupported relocation type: %d: %s (relocating: %s)\n", rel->howto->type, rel->howto->name, (*rel->sym_ptr_ptr)->name);
    return;
  }
  break;
  }

  if (starts_with((*rel->sym_ptr_ptr)->name, "_RCP_"))
  {
    const char *descr = &((*rel->sym_ptr_ptr)->name)[5];
    const char *descr_imm = NULL;

    if (descr_imm = remove_prefix(descr, "CONST_AT_IMM"))
    {
      hole->kind = RELOC_RCP_CONST_AT_IMM;
      hole->indirection_level = 0; // Tricked into patching immediate value
    }
    else if (descr_imm = remove_prefix(descr, "RAW_IMM"))
    {
      hole->kind = RELOC_RCP_RAW_IMM;
      hole->indirection_level = 0; // Tricked into patching immediate value
    }
    else if (descr_imm = remove_prefix(descr, "CONST_STR_AT_IMM"))
    {
      hole->kind = RELOC_RCP_CONST_STR_AT_IMM;
      hole->indirection_level = 0; // Tricked into patching immediate value
    }
    else if (descr_imm = remove_prefix(descr, "CONSTCELL_AT_IMM"))
    {
      hole->kind = RELOC_RCP_CONSTCELL_AT_IMM;
    }
    else if (descr_imm = remove_prefix(descr, "CONSTCELL_AT_LABEL_IMM"))
    {
      hole->kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM;
    }
    else if (strcmp(descr, "EXEC_NEXT") == 0)
    {
      if (rel->address - rel->addend == stencil->body_size && stencil->body[rel->address - 1] == 0xE9 /*JMP*/)
      {
        // This is the last instruction; safe to just delete
        stencil->body_size = rel->address - 1;
        return; // No relocation from this
      }
      else
      {
        hole->kind = RELOC_RCP_EXEC_NEXT;
        hole->indirection_level = 0;
      }
    }
    else if (descr_imm = remove_prefix(descr, "EXEC_IMM"))
    {
      hole->kind = RELOC_RCP_EXEC_IMM;
      hole->indirection_level = 0;
    }
    else if (strcmp(descr, "RHO") == 0)
    {
      hole->kind = RELOC_RHO;
    }
    else
    {
      fprintf(stderr, "Unsupported internal relocation symbol: %s\n", (*rel->sym_ptr_ptr)->name);

      hole->kind = RELOC_RUNTIME_SYMBOL;
      hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
    }

    if (descr_imm != NULL)
    {
      int pos = atoi(descr_imm);
      if (pos < 0 || pos > 3)
        fprintf(stderr, "Invalid immediate position: %d\n", pos);
      hole->val.imm_pos = pos;
    }
  }
  else if (strcmp((*rel->sym_ptr_ptr)->name, ".rodata") == 0)
  {
    hole->kind = RELOC_RODATA;
  }
  else
  {
    int id = rsh_symbol_id((*rel->sym_ptr_ptr)->name);
    if (id != -1)
    {
      hole->kind = RELOC_RCP_PRECOMPILED;
      hole->addend += id * sizeof(void *);
    }
    else
    {
      hole->kind = RELOC_RUNTIME_SYMBOL;
      hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
    }
  }

  stencil->holes_size++;

  //fprintf(stederr, "  Offset: 0x%08lx,  Addend: 0x%08lx, Symbol: %s, Type: %d\n", rel->address, rel->addend, *rel->sym_ptr_ptr->name, rel->howto->type);
}

static void process_relocations(StencilMutable *const stencil, long reloc_count, arelent **relocs)
{
  stencil->holes = malloc(reloc_count * sizeof(Hole));
  stencil->holes_size = 0;

  for (long i = 0; i < reloc_count; i++)
  {
    const arelent *rel = relocs[i];
    if (rel->sym_ptr_ptr && *rel->sym_ptr_ptr && rel->howto->name)
      process_relocation(stencil, &stencil->holes[i], rel);
    else
      fprintf(stderr, "Missing relocation symbol!\n");
  }
}

static void process_sections(bfd *abfd, asection *section, void *data)
{
  Stencils *stencils = (Stencils *)data;

  bfd_size_type size = bfd_section_size(section);
  if (size == 0)
    return;

  const char *symbol = section->symbol->name;
  bfd_byte *body = (bfd_byte *)malloc(size * sizeof(bfd_byte));

  if (!bfd_get_section_contents(abfd, section, body, 0, size))
  {
    fprintf(stderr, "Failed to read section contents\n");
    free(body);
    return;
  }

  //fprintf(stderr, "%x\t%s\n", section -> flags, symbol);

  /* Get relocations */
  long reloc_size = bfd_get_reloc_upper_bound(abfd, section);
  if (reloc_size <= 0)
    return;

  /* Read symbol table */
  long symtab_size = bfd_get_symtab_upper_bound(abfd);
  if (symtab_size <= 0)
    return;

  asymbol **symbol_table = (asymbol **)malloc(symtab_size);

  bfd_canonicalize_symtab(abfd, symbol_table);

  arelent **relocs = (arelent **)malloc(reloc_size);
  long reloc_count = bfd_canonicalize_reloc(abfd, section, relocs, symbol_table);

  if (section->flags & SEC_CODE)
  {
    if (section->alignment_power > 0)
      fprintf(stderr, "WARNING: Stencil %s requires alignment to 2^%u, but this is not supported\n", section->name, section->alignment_power);

    StencilMutable *stencil;
    int opcode = get_opcode(&symbol[6]);
    if (opcode != -1)
    {
      stencil = &stencils->stencils_opcodes[opcode];
    }
    else
    {
      strcpy(stencils->stencil_extra_last->name, &symbol[6]);
      stencil = &stencils->stencil_extra_last->stencil;
      stencils->stencil_extra_last->next = malloc(sizeof(NamedStencil));
      stencils->stencil_extra_last->next->next = NULL;
      stencils->stencil_extra_last = stencils->stencil_extra_last->next;
    }

    stencil->body_size = size;
    stencil->body = body;

    process_relocations(stencil, reloc_count, relocs);
  }
  else if ((section->flags & SEC_READONLY) && (section->flags & BSF_KEEP))
  {
    if (strcmp(symbol, ".rodata") == 0)
    {
      stencils->rodata_size = size;
      stencils->rodata = body;
      //fprintf(stderr, "Allign rodata to 2^%u\n", section->alignment_power);

      if (reloc_count > 0)
        fprintf(stderr, "There are some relocations in the section of %s, this is not supported!\n", symbol);
    }
    else
    {
      fprintf(stderr, "Section/Function %s could not be matched to a valid R opcode\n", symbol);
      free(body);
    }
  }
  else
    free(body);

  free(relocs);
  free(symbol_table);
}

static void free_stencil(StencilMutable *stencil)
{
  for (size_t j = 0; j < stencil->holes_size; ++j)
  {
    if (stencil->holes[j].kind == 0)
      free(stencil->holes[j].val.symbol_name);
  }
  free(stencil->holes);
  stencil->holes = NULL;
  free(stencil->body);
  stencil->body = NULL;
}

static void cleanup(Stencils *stencils)
{
  free(stencils->rodata);
  stencils->rodata = NULL;

  // Free the stencils array
  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    free_stencil(&stencils->stencils_opcodes[i]);
  }

  NamedStencil *current = &stencils->stencil_extra_first;

  do
  {
    free_stencil(&current->stencil);
    current = current->next;
  } while (current->next != NULL);

  current = stencils->stencil_extra_first.next;
  while (current != NULL)
  {
    NamedStencil *next = current->next;
    free(current);
    current = next;
  }

  stencils->stencil_extra_first.next = NULL;
}

static void analyze_object_file(const char *filename, Stencils *stencils)
{
  bfd *abfd = bfd_openr(filename, NULL);
  if (!abfd)
  {
    fprintf(stderr, "Failed to open file: %s\n", filename);
    return;
  }

  if (!bfd_check_format(abfd, bfd_object))
  {
    fprintf(stderr, "Invalid object file format.\n");
    bfd_close(abfd);
    return;
  }

  bfd_map_over_sections(abfd, process_sections, stencils);
  bfd_close(abfd);
}

static void print_sizes(Stencils *stencils)
{
  int64_t total_size = 0;
  size_t count = 0;
  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if (stencils->stencils_opcodes[i].body_size != 0)
    {
      total_size += stencils->stencils_opcodes[i].body_size;
      count++;
    }
  }
  NamedStencil *current = &stencils->stencil_extra_first;
  do
  {
    total_size += current->stencil.body_size;
    count++;
    current = current->next;
  } while (current->next != NULL);

  fprintf(stderr, "Total size of stencils: %zu bytes\n", total_size);
  fprintf(stderr, "Average size of stencils: %lf bytes\n", ((double)total_size) / count);
}

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    fprintf(stderr, "Usage: %s <object file>\n", argv[0]);
    return 1;
  }
  bfd_init();

  Stencils stencils = {
    .rodata = NULL,
    .rodata_size = 0,
    .stencils_opcodes = {0},
    .stencil_extra_first = {"", {}, NULL},
    .stencil_extra_last = &stencils.stencil_extra_first
  };

  analyze_object_file(argv[1], &stencils);

  //export_body();
  export_to_files(&stencils);

  print_sizes(&stencils);

  cleanup(&stencils);

  return 0;
}