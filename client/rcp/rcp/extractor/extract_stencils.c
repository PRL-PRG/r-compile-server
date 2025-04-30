#include <stdio.h>
#include <stdlib.h>
#include <bfd.h>
#include <string.h>
#include "../rcp_common.h"
#include <stddef.h>

typedef enum {
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
} HoleKind;




uint8_t* rodata;
size_t rodata_size = 0;

//StencilMutable init_stencil;
StencilMutable stencils[sizeof(OPCODES) / sizeof( * OPCODES)] = { 0 };


typedef struct NamedStencil {
  char * name;
  StencilMutable * stencil;
  struct NamedStencil * next;
} NamedStencil;

NamedStencil extraStencilFirst = { NULL, NULL, NULL };
NamedStencil* extraStencilLast = &extraStencilFirst;


// Function to check if str starts with prefix
static int starts_with(const char *str, const char *prefix) {
  while (*prefix) {
      if (*str != *prefix) {
          return 0;
      }
      str++;
      prefix++;
  }
  return 1;
}

static int get_opcode(const char * str) {
  if(!starts_with(str, "_RCP_"))
  {
    return -1;
  }

  str += 5;

  for (int i = 0; i < sizeof(OPCODES) / sizeof( * OPCODES); ++i)
  {
    if (strcmp(str, OPCODES[i]) == 0)
      return i;
  }
  return -1;
}

static void print_byte_array(FILE *file, const unsigned char * arr, size_t len) {
  for (size_t i = 0; i < len; i++)
  {
    fprintf(file, "0x%02X, ", arr[i]); // Print each byte in hex format
  }
}


static void export_body(FILE *file, const StencilMutable* stencil, const char* opcode_name)
{
  //if(stencils[opcode].holes_size != 0)
  
  fprintf(file, "const Hole _%s_HOLES[] = {\n", opcode_name);
  for (size_t j = 0; j < stencil->holes_size; ++j)
  {
    fprintf(file, "{ .offset = 0x%lX, .addend = %ld, .size = %hu, .kind = %u, .is_pc_relative = %u, .indirection_level = %u", stencil->holes[j].offset, stencil->holes[j].addend, stencil->holes[j].size, stencil->holes[j].kind, stencil->holes[j].is_pc_relative, stencil->holes[j].indirection_level);
    switch(stencil->holes[j].kind)
    {
      case RELOC_RUNTIME_SYMBOL:
        fprintf(file, ", .val.symbol = &%s", stencil->holes[j].val.symbol_name);
        break;
      case RELOC_RCP_GOTO_IMM:
      case RELOC_RCP_RAW_IMM:
      case RELOC_RCP_CONST_AT_IMM:
      case RELOC_RCP_CONSTCELL_AT_IMM:
      case RELOC_RCP_CONST_STR_AT_IMM:
      case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
        fprintf(file, ", .val.imm_pos = %zu", stencil->holes[j].val.imm_pos);
        break;
    }
    fprintf(file, " },\n");
  }
  fprintf(file, "};\n\n");
  /*
  fprintf(file, "const uint8_t _%s_RO[] = {\n", opcode_name);
  print_byte_array(file, stencil->ro, stencil->ro_size);
  fprintf(file, "\n};\n\n");
  */
  fprintf(file, "const uint8_t _%s_BODY[] = {\n", opcode_name);
  print_byte_array(file, stencil->body, stencil->body_size);
  fprintf(file, "\n};\n\n");
}



static void export_to_files()
{
  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if(stencils[i].body_size != 0)
    {
      char filename[32];
      strcpy(filename, OPCODES[i]);
      strcat(filename, ".h");
      FILE *file = fopen(filename, "wt"); 
      export_body(file, &stencils[i], OPCODES[i]);
      fclose(file);
    }
  }
  {
    NamedStencil* current = &extraStencilFirst;

    while (current -> next != NULL)
    {
      char filename[64];
      strcpy(filename, current->name);
      strcat(filename, ".h");

      FILE *file = fopen(filename, "wt"); 
      export_body(file, current->stencil, current->name);
      fclose(file);

      current = current -> next;
    }
  }

  FILE *file = fopen("stencils.h", "wt"); 

  {
    NamedStencil* current = &extraStencilFirst;

    while (current -> next != NULL)
    {
      fprintf(file, "#include \"%s.h\"\n", current->name);

      current = current -> next;
    }
  }

  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if(stencils[i].body_size != 0)
      fprintf(file, "#include \"%s.h\"\n", OPCODES[i]);
  }

  fprintf(file, "uint8_t rodata[] = { ");
  print_byte_array(file, rodata, rodata_size);
  fprintf(file, "};\n");

  {
    NamedStencil* current = &extraStencilFirst;

    while (current -> next != NULL)
    {
      fprintf(file, "const Stencil %s = { %zu, _%s_BODY, %zu, _%s_HOLES};\n", current->name, current->stencil->body_size, current->name, current->stencil->holes_size, current->name);//, %zu, _%s_RO

      current = current -> next;
    }
  }

  fprintf(file, "\nconst Stencil stencils[%zu] = {\n", sizeof(OPCODES) / sizeof( * OPCODES));

  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if(stencils[i].body_size != 0)
    {
      //fprintf(file, "{%zu, _%s_BODY, %zu, _%s_HOLES, %zu, _%s_RO}, // %s\n", stencils[i].body_size, OPCODES[i], stencils[i].holes_size, OPCODES[i], stencils[i].ro_size, OPCODES[i], OPCODES[i]);
      fprintf(file, "{%zu, _%s_BODY, %zu, _%s_HOLES}, // %s\n", stencils[i].body_size, OPCODES[i], stencils[i].holes_size, OPCODES[i], OPCODES[i]);
    }
    else
    {
      fprintf(file, "{0, NULL, 0, NULL}, // %s\n", OPCODES[i]);
    }
  }

  fprintf(file, "};\n");
  fclose(file);
}

static int get_imm_name(const char* name)
{
  if(starts_with(name, "_IMM"))
    return atoi(&name[4]);
  else
    return -1;
}

static void replace_mov(uint8_t* mov_address)
{
  // Extract register from ModR/M byte
  uint8_t reg_index = (mov_address[1] >> 3) & 0x07;
  uint8_t mov_opcode = 0xB8 + reg_index;  // Corresponding MOV r32, imm32 opcode

  // Construct patched instruction
  mov_address[0] = 0x90; // Replace with NOP
  mov_address[1] = mov_opcode;
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

static int rsh_symbol_id(const char * name)
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

  if (strcmp(name, "R_MATH1_EXT_FUNS") == 0)
    return counter;
  counter += 24;

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

  //fprintf(stderr, "Unknown symbol: %s\n", name);
  return -1;
}

static void process_relocation(StencilMutable* stencil, Hole* hole, const arelent * rel)
{
  hole->offset = rel->address;
  hole->addend = rel->addend;
    
  if(strcmp(rel->howto->name, "R_X86_64_PLT32") == 0)
  {
    hole->indirection_level = 1;
    hole->is_pc_relative = 1;
    hole->size = 4;

    if(starts_with((*rel->sym_ptr_ptr)->name, "_RCP_"))
    {
      const char* descr = &((*rel->sym_ptr_ptr)->name)[5];
      if(strcmp(descr, "GOTO_NEXT") == 0)
      {
        if(rel->address - rel->addend == stencil->body_size && stencil->body[rel->address-1] == 0xE9 /*JMP*/) // This is the last instruction, no need to relocate; just delete it
        {
          stencil->body_size = rel->address - 1;
          return; // No relocation from this
        }
        else
        {
          hole->kind = RELOC_RCP_NEXTOP;
          hole->is_pc_relative = 0;
          hole->indirection_level = 0;
        }
      }
      else if(starts_with(descr, "GOTO_IMM"))
      {
        int pos = atoi(&descr[8]);
        if(pos < 0 || pos > 3)
        {
          fprintf(stderr, "Unsupported immediate index\n");
          return;
        }
        hole->kind = RELOC_RCP_GOTO_IMM;
        hole->val.imm_pos = pos;
        hole->indirection_level = 0;
      }
      else
      {
        fprintf(stderr, "Unsupported relocation symbol: %s\n", (*rel->sym_ptr_ptr)->name);
      }
    }
    else
    {
      hole->kind = RELOC_RUNTIME_SYMBOL;
      hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
    }
  }
  else if(strcmp(rel->howto->name, "R_X86_64_PC32") == 0)
  {
      hole->size = 4;
      hole->is_pc_relative = 1;
      hole->indirection_level = 1;
      if(starts_with((*rel->sym_ptr_ptr)->name, "_RCP_"))
      {
        const char* descr = &((*rel->sym_ptr_ptr)->name)[5];
        
        if(strcmp(descr, "RHO") == 0)
        {
          hole->kind = RELOC_RHO;
        }
        else if(starts_with(descr, "IMM"))
        {
          int pos = atoi(&descr[3]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          if (stencil->body[rel->address-2] == 0x8B && (stencil->body[rel->address-1] & 0xC7) == 0x05) // MOV hack
          {
            replace_mov(&stencil->body[rel->address-2]);
            hole->indirection_level = 0;
            hole->is_pc_relative = 0;
          }

          hole->kind = RELOC_RCP_RAW_IMM;
          hole->val.imm_pos = pos;
        }
        else
        if(starts_with(descr, "CONSTANT_AT_IMM"))
        {
          int pos = atoi(&descr[15]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_CONST_AT_IMM;
          hole->val.imm_pos = pos;
          hole->indirection_level = 0;
        }
        else if(starts_with(descr, "CONSTCELL_AT_IMM"))
        {
          int pos = atoi(&descr[16]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_CONSTCELL_AT_IMM;
          hole->val.imm_pos = pos;
        }
        else if(starts_with(descr, "CONSTCELL_AT_LABEL_IMM0"))
        {
          int pos = atoi(&descr[16]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM;
          hole->val.imm_pos = pos;
        }
        else if(strcmp(descr, "PRECOMPILED") == 0)
        {
          hole->kind = RELOC_RCP_PRECOMPILED;
        }
        else if(starts_with(descr, "CONSTANT_STR_AT_IMM"))
        {
          int pos = atoi(&descr[19]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_CONST_STR_AT_IMM;
          hole->val.imm_pos = pos;
        }
        else
        {
          fprintf(stderr, "Unsupported relocation symbol: %s\n", (*rel->sym_ptr_ptr)->name);
          //todo no use
          hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
          hole->kind = RELOC_RUNTIME_SYMBOL;
        }
      }
      else if(strcmp((*rel->sym_ptr_ptr)->name, ".rodata") == 0)
      {
        hole->kind = RELOC_RODATA;
        hole->is_pc_relative = 1;
      }
      else
      {
        int id = rsh_symbol_id((*rel->sym_ptr_ptr)->name);
        if(id != -1)
        {
          hole->kind = RELOC_RCP_PRECOMPILED;
          hole->addend += id*sizeof(void*);
        }
        else
        {
          hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
          hole->kind = RELOC_RUNTIME_SYMBOL;
          hole->is_pc_relative = 1;
        }
      }
   }
    else if(strcmp(rel->howto->name, "R_X86_64_32") == 0 || strcmp(rel->howto->name, "R_X86_64_32S") == 0 || strcmp(rel->howto->name, "R_X86_64_64") == 0)
    {
      hole->is_pc_relative = 0;
      hole->indirection_level = 1;

      if(starts_with((*rel->sym_ptr_ptr)->name, "_RCP_"))
      {
        const char* descr = &((*rel->sym_ptr_ptr)->name)[5];
        if(starts_with(descr, "CONSTANT_AT_IMM"))
        {
          int pos = atoi(&descr[15]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_CONST_AT_IMM;
          hole->val.imm_pos = pos;
          hole->indirection_level = 0;
        }
        else if(starts_with(descr, "IMM"))
        {
          int pos = atoi(&descr[3]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_RAW_IMM;
          hole->val.imm_pos = pos;
          hole->indirection_level = 0;
        }
        else if(starts_with(descr, "CONSTANT_STR_AT_IMM"))
        {
          int pos = atoi(&descr[19]);
          if(pos < 0 || pos > 3)
          {
            fprintf(stderr, "Unsupported immediate index\n");
            return;
          }
          hole->kind = RELOC_RCP_CONST_STR_AT_IMM;
          hole->val.imm_pos = pos;
          hole->indirection_level = 0;
        }
      } else
      //fprintf(stderr, "%s\n", (*rel->sym_ptr_ptr)->name);
      if(strcmp((*rel->sym_ptr_ptr)->name, ".rodata") == 0)
      {
        hole->kind = RELOC_RODATA;
      }
      //else if(starts_with((*rel->sym_ptr_ptr)->name, ".rodata"))
      //{
      //  hole->kind = RELOC_RODATA_FUNCTION;
      //}
      else
      {
        int id = rsh_symbol_id((*rel->sym_ptr_ptr)->name);
        if(id != -1)
        {
          hole->kind = RELOC_RCP_PRECOMPILED;
          hole->addend += id*sizeof(void*);
        }
        else
        {
          hole->kind = RELOC_RUNTIME_SYMBOL;
          hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
        }
      }

      if(strcmp(rel->howto->name, "R_X86_64_64") == 0)
        hole->size = 8;
      else
        hole->size = 4;
    }
    else if(strcmp(rel->howto->name, "R_X86_64_REX_GOTPCRELX") == 0)
    {
      if(starts_with((*rel->sym_ptr_ptr)->name, "_RCP_"))
      {
        fprintf(stderr, "Internal RCP relocations must be done using the small model: %s\n", (*rel->sym_ptr_ptr)->name);
        //continue;
      }
      hole->val.symbol_name = strdup((*rel->sym_ptr_ptr)->name);
      hole->kind = RELOC_RUNTIME_SYMBOL;
      hole->is_pc_relative = 1;
      hole->indirection_level = 2;
      hole->size = 4;
    }
    else
    {
      fprintf(stderr, "Unsupported relocation type: %d: %s (relocating: %s)\n", rel->howto->type,  rel->howto->name, (*rel->sym_ptr_ptr)->name);
      return;
    }

    stencil->holes_size++;

  //printf("  Offset: 0x%08lx,  Addend: 0x%08lx, Symbol: %s, Type: %d\n", rel->address, rel->addend, *rel->sym_ptr_ptr->name, rel->howto->type);
}

static void process_relocations(StencilMutable* const stencil, long reloc_count, arelent ** relocs)
{
  stencil->holes = malloc(reloc_count * sizeof(Hole));
  stencil->holes_size = 0;

  for (long i = 0; i < reloc_count; i++)
  {
    const arelent * rel = relocs[i];
    if (!(rel -> sym_ptr_ptr && * rel -> sym_ptr_ptr) || !rel->howto->name)
    {
      fprintf(stderr, "Missing relocation symbol!\n");
      continue;
    }

    process_relocation(stencil, &stencil->holes[i], rel);
  }
}


static void process_sections(bfd * abfd, asection * section, void * data) {
  uint8_t opcode;

  bfd_size_type size = bfd_section_size(section);
  if (size > 0) {
    asymbol * sym = section -> symbol;
    bfd_byte * buffer = (bfd_byte * ) malloc(size);
    if (!buffer)
      return;

    if (bfd_get_section_contents(abfd, section, buffer, 0, size))
    {
      //fprintf(stderr, "%x\t%s\n", section -> flags, section -> symbol -> name);

      if(section -> flags & SEC_CODE)
      {
        if (section->alignment_power > 0)
          fprintf(stderr, "WARNING: Stencil requires alignment to 2^%u, but this is not supported\n", section->alignment_power);

        StencilMutable* stencil = NULL;
        int opcode = get_opcode(sym -> name + 6);
        if (opcode != -1)
        {
          stencil = &stencils[opcode];
        }
        else
        {
          extraStencilLast->name = strdup(sym->name + 6);
          extraStencilLast->stencil = malloc(sizeof(StencilMutable));
          stencil = extraStencilLast->stencil;
          extraStencilLast->next = malloc(sizeof(NamedStencil));
          extraStencilLast->next->next = NULL;
          extraStencilLast = extraStencilLast->next;
        }

        stencil->body_size = size;
        stencil->body = buffer;

        /* Get relocations */
        long reloc_size = bfd_get_reloc_upper_bound(abfd, section);
        if (reloc_size <= 0)
          return;

        /* Read symbol table */
        long symtab_size;
        asymbol ** symbol_table = NULL;
        symtab_size = bfd_get_symtab_upper_bound(abfd);
        if (symtab_size > 0)
        {
          symbol_table = (asymbol ** ) malloc(symtab_size);
          if (symbol_table)
            bfd_canonicalize_symtab(abfd, symbol_table);
        }
        arelent ** relocs = (arelent ** ) malloc(reloc_size);
        long reloc_count = bfd_canonicalize_reloc(abfd, section, relocs, symbol_table);

        process_relocations(stencil, reloc_count, relocs);

        free(relocs);

        free(symbol_table);
      }
      else if((section -> flags & SEC_READONLY) && (section -> flags & BSF_KEEP))
      {
        if(strcmp(sym->name, ".rodata") == 0)
        {
          rodata_size = size;
          rodata = buffer;
          //fprintf(stderr, "Allign rodata to 2^%u\n", section->alignment_power);
        }
        else
        {
          fprintf(stderr, "Section/Function %s could not be matched to a valid R opcode\n", sym -> name);
          free(buffer);
          return;
        }

        /* Get relocations */
        long reloc_size = bfd_get_reloc_upper_bound(abfd, section);
        if (reloc_size <= 0)
          return;

        /* Read symbol table */
        long symtab_size;
        asymbol ** symbol_table = NULL;
        symtab_size = bfd_get_symtab_upper_bound(abfd);
        if (symtab_size > 0)
        {
          symbol_table = (asymbol ** ) malloc(symtab_size);
          if (symbol_table)
            bfd_canonicalize_symtab(abfd, symbol_table);
        }
        arelent ** relocs = (arelent ** ) malloc(reloc_size);
        long reloc_count = bfd_canonicalize_reloc(abfd, section, relocs, symbol_table);
        if(reloc_count > 0)
          fprintf(stderr, "There are some relocations in the section of %s, this is not yet supported!\n", sym -> name);

        free(relocs);
        free(symbol_table);
      }
      else
        free(buffer);

    }
  }
}

static void free_stencil(StencilMutable* stencil)
{
  for (size_t j = 0; j < stencil->holes_size; ++j)
  {
    if(stencil->holes[j].kind == 0)
      free(stencil->holes[j].val.symbol_name);
  }
  free(stencil->holes);
  stencil->holes = NULL;
  free(stencil->body);
  stencil->body = NULL;
}

static void cleanup()
{
  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof( * OPCODES); ++i)
  {
    free_stencil(&stencils[i]);
    stencils[i];
  }

  NamedStencil* current = &extraStencilFirst;

  do
  {
    free(current->name);
    free_stencil(current->stencil);
    free(current->stencil);

    current = current -> next;
  }
  while (current -> next != NULL);

  current = extraStencilFirst.next;
  while(current -> next != NULL)
  {
    NamedStencil* next = current->next;
    free(current);
    current = next;
  }
}

void analyze_object_file(const char * filename) {
  bfd * abfd = bfd_openr(filename, NULL);
  if (!abfd) {
    fprintf(stderr, "Failed to open file: %s\n", filename);
    return;
  }

  if (!bfd_check_format(abfd, bfd_object)) {
    fprintf(stderr, "Invalid object file format.\n");
    bfd_close(abfd);
    return;
  }

  bfd_map_over_sections(abfd, process_sections, NULL);
  bfd_close(abfd);
}

static void print_sizes()
{
  int64_t total_size = 0;
  size_t count = 0;
  for (uint8_t i = 0; i < sizeof(OPCODES) / sizeof(*OPCODES); ++i)
  {
    if(stencils[i].body_size != 0)
    {
      total_size += stencils[i].body_size;
      count++;
    }
  }
  fprintf(stderr, "Total size of stencils: %zu bytes\n", total_size);
  fprintf(stderr, "Average size of stencils: %lf bytes\n", ((double)total_size)/count);

}

int main(int argc, char ** argv) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <object file>\n", argv[0]);
    return 1;
  }
  bfd_init();
  analyze_object_file(argv[1]);

  //export_body();
  export_to_files();

  print_sizes();

  cleanup();

  return 0;
}