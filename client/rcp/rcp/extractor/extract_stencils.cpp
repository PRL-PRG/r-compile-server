#include <stdlib.h>
#include <bfd.h>
#include "../rcp_common.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <format>
#include <cassert>
#include <cstring>
#include <unordered_map>
#include <string_view>

enum X86_64_RELOC_KIND
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
  R_X86_64_TPOFF32,
  R_X86_64_GOTPCRELX = 41
};


struct StencilExport
{
  std::vector<uint8_t> body;
  std::vector<Hole> holes;
  uint8_t alignment = 0;
};

struct StencilExportNamed : public StencilExport
{
  std::string name;

  StencilExportNamed(std::string name) : name(std::move(name)) {}
};

struct StencilExportOpcode : public StencilExport
{
  const char* name;

  StencilExportOpcode(const char* name) : name(std::move(name)) {}
  StencilExportOpcode() = default;
};


struct Stencils
{
  std::vector<uint8_t> rodata;
  std::array<StencilExportOpcode, sizeof(OPCODES_NAMES) / sizeof(*OPCODES_NAMES)> stencils_opcodes;
  std::vector<StencilExportNamed> stencils_extra;

  Stencils()
  {
    for (size_t i = 0; i < stencils_opcodes.size(); i++)
      stencils_opcodes[i].name = OPCODES_NAMES[i];
  }
};

template<typename T>
static bool fits_in(int64_t value)
{
    return value >= std::numeric_limits<T>::min() && value <= std::numeric_limits<T>::max();
}

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

  for (int i = 0; i < sizeof(OPCODES_NAMES) / sizeof(*OPCODES_NAMES); ++i)
    if (strcmp(str, OPCODES_NAMES[i]) == 0)
      return i;
  return -1;
}

static void prepare_variant_one(StencilExport& stencil, size_t stepfor_max_size)
{
    int32_t offset_comparison = stepfor_max_size - stencil.body.size();

    // Different variants of StepFor (can) have different sizes, we need to ensure that all will finish executing at the same memory address.
    // This can be done by filling the gap with NOPs (0x90) for very small differences
    if (offset_comparison <= 2)
    {
        DEBUG_PRINT("StepFor correction: NOP\n");
        size_t gap_fill = stepfor_max_size - stencil.body.size();
        stencil.body.resize(stencil.body.size() + gap_fill, 0x90); // NOPs to fill the gap
    }
    // If the offset fits in 1 byte, we can use a short jump (0xEB)
    else if (fits_in<int8_t>(offset_comparison - 2))
    {
        DEBUG_PRINT("StepFor correction: Short jump\n");
        stencil.body.push_back(0xEB); // JMP instruction
        int8_t offset = (int8_t)(offset_comparison - 2);
        stencil.body.push_back(offset); // JMP instruction
    }
    // If it doesn't, we need to use a near jump (0xE9)
    else
    {
        DEBUG_PRINT("StepFor correction: Near jump\n");
        stencil.body.push_back(0xE9); // JMP instruction
        int32_t offset = offset_comparison - 5;
        stencil.body.resize(stencil.body.size() + 4);

        memcpy(&stencil.body[stencil.body.size() - 4], &offset, sizeof(offset));
    }
}

void prepare_stepfor(std::vector<StencilExportNamed>& stencil_list)
{
  size_t stepfor_max_size = 0;
  for(auto& current : stencil_list)
    if(current.name.starts_with("_RCP_STEPFOR_"))
      stepfor_max_size = std::max(stepfor_max_size, current.body.size());

  for(auto& current : stencil_list)
    if(current.name.starts_with("_RCP_STEPFOR_"))
      prepare_variant_one(current, stepfor_max_size);
}

static void print_byte_array(std::ostream& file, const unsigned char *arr, size_t len)
{
  for (size_t i = 0; i < len; i++)
    file << std::format("0x{:02X}, ", arr[i]);
}

static void export_body(std::ostream& file, const StencilExport& stencil, const char *opcode_name)
{
  file << std::format("Hole _{}_HOLES[] = {{\n", opcode_name);
  for (const auto& hole : stencil.holes)
  {
    file << std::format("{{ .offset = 0x{:x}, .addend = {}, .size = {}, .kind = {}, .is_pc_relative = {}",
            hole.offset, hole.addend, hole.size, hole.kind, hole.is_pc_relative);

    switch (hole.kind)
    {
    case RELOC_RUNTIME_SYMBOL:
    case RELOC_RUNTIME_SYMBOL_GOT:
    case RELOC_RUNTIME_SYMBOL_DEREF:
      file << std::format(", .val.symbol = &{}", hole.val.symbol_name);
      break;
    case RELOC_RUNTIME_CALL:
      file << std::format(", .val.call = {{ .sym = &{}, .arg = \"{}\" }}",
              (const char*)hole.val.call.sym, (const char*)hole.val.call.arg);
      break;
    case RELOC_RCP_EXEC_IMM:
    case RELOC_RCP_RAW_IMM:
    case RELOC_RCP_CONST_AT_IMM:
    case RELOC_RCP_CONST_STR_AT_IMM:
    case RELOC_RCP_CONSTCELL_AT_IMM:
    case RELOC_RCP_CONSTCELL_AT_LABEL_IMM:
      file << std::format(", .val.imm_pos = {}", hole.val.imm_pos);
      break;
    default:
      break;
    }

    file << " },\n";
  }

  file << "};\n\n";

  file << std::format("uint8_t _{}_BODY[] = {{\n", opcode_name);
  print_byte_array(file, stencil.body.data(), stencil.body.size());

  file << "\n};\n\n";
}

// Create all the header files for the stencils
static void export_to_files(const Stencils& stencils)
{
  for (const auto& current : stencils.stencils_opcodes)
  {
    if (!current.body.empty())
    {
      std::string filename(current.name);
      filename += ".h";

      std::ofstream file(filename) ;

      export_body(file, current, current.name);
    }
  }
  for (const auto& current : stencils.stencils_extra)
  {
    std::string filename(current.name);
    filename += ".h";

    std::ofstream file(filename) ;
    export_body(file, current, current.name.c_str());
  }

  std::ofstream file("stencils.h");

  for (const auto& current : stencils.stencils_extra)
    file << std::format("#include \"{}.h\"\n", current.name);

  for (const auto& current : stencils.stencils_opcodes)
    if (!current.body.empty())
      file << std::format("#include \"{}.h\"\n", current.name);

  file << "const uint8_t rodata[] = { ";
  print_byte_array(file, stencils.rodata.data(), stencils.rodata.size());
  file << "};\n";

  for (const auto& current : stencils.stencils_extra)
    file << std::format("const Stencil {} = {{ {}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"}};\n", current.name, current.body.size(), current.name, current.holes.size(), current.name, current.alignment, current.name);

  file << std::format("\nconst Stencil stencils[{}] = {{\n", stencils.stencils_opcodes.size());

  for (const auto& current : stencils.stencils_opcodes)
  {
    if (!current.body.empty())
      file << std::format("{{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"}},\n", current.body.size(), current.name, current.holes.size(), current.name, current.alignment, current.name);
    else
      file << std::format("{{0, NULL, 0, NULL, 0, \"{}\"}},\n", current.name);
  }

  file << "};\n";
  
  file << "\nconst Stencil* stencils_all[] = {\n";

  for (int i = 0; i < stencils.stencils_opcodes.size(); ++i)
    if (!stencils.stencils_opcodes[i].body.empty())
      file << std::format("&stencils[{}],", i);
  for (const auto& current : stencils.stencils_extra)
    file << std::format("&{},", current.name);

  file << "};\n";
}

std::unordered_map<std::string, std::string> rsh_symbol_map;

static auto init_rsh_symbol_map() {
  std::unordered_map<std::string, std::string> rsh_symbol_map;

  #define X(a, b, ...) if(rsh_symbol_map.emplace(#b, #a).second == false) throw std::runtime_error("Duplicate Rsh symbol mapping");
X_MATH1_OPS
X_ARITH_OPS
X_REL_OPS
X_UNARY_OPS
X_LOGIC2_OPS
X_MATH1_EXT_OPS
RSH_R_SYMBOLS
  #undef X

  rsh_symbol_map.emplace("Rsh_Not", "!");

  return rsh_symbol_map;
}

static std::optional<Hole> process_relocation(std::vector<uint8_t>& stencil_body, const arelent& rel)
{
  Hole hole;

  hole.offset = rel.address;
  hole.addend = rel.addend;
  hole.is_pc_relative = rel.howto->pc_relative;
  hole.size = rel.howto->size;

  switch (rel.howto->type)
  {
  case X86_64_RELOC_KIND::R_X86_64_PLT32:
  {
    assert(strcmp(rel.howto->name, "R_X86_64_PLT32") == 0);
    assert(rel.howto->pc_relative == 1);
    assert(rel.howto->size == 4);
  }
  break;
  case X86_64_RELOC_KIND::R_X86_64_PC32:
  {
    assert(strcmp(rel.howto->name, "R_X86_64_PC32") == 0);
    assert(rel.howto->pc_relative == 1);
    assert(rel.howto->size == 4);
  }
  break;
  case X86_64_RELOC_KIND::R_X86_64_32:
  case X86_64_RELOC_KIND::R_X86_64_32S:
  {
    assert(strcmp(rel.howto->name, "R_X86_64_32") == 0 || strcmp(rel.howto->name, "R_X86_64_32S") == 0);
    assert(rel.howto->pc_relative == 0);
    assert(rel.howto->size == 4);
  }
  break;
  case X86_64_RELOC_KIND::R_X86_64_64:
  {
    assert(strcmp(rel.howto->name, "R_X86_64_64") == 0);
    assert(rel.howto->pc_relative == 0);
    assert(rel.howto->size == 8);
  }
  break;
  case X86_64_RELOC_KIND::R_X86_64_GOTPCRELX:
  {
    assert(strcmp(rel.howto->name, "R_X86_64_GOTPCRELX") == 0);
    assert(rel.howto->pc_relative == 1);
    assert(rel.howto->size == 4);
  } break;
  default:
  {
    throw std::runtime_error(std::format("Unsupported relocation type: {}: {} (relocating: {}). Check compilation switches for memory model options.\n", rel.howto->type, rel.howto->name, (*rel.sym_ptr_ptr)->name));
  }
  break;
  }

  if (starts_with((*rel.sym_ptr_ptr)->name, "_RCP_"))
  {
    const char *descr = &((*rel.sym_ptr_ptr)->name)[5];
    const char *descr_imm = NULL;

    if (descr_imm = remove_prefix(descr, "CRUNTIME0_"))
    {
      hole.kind = RELOC_RUNTIME_SYMBOL_DEREF;
      hole.val.symbol_name = strdup(descr_imm);
    }
    else if (descr_imm = remove_prefix(descr, "CRUNTIME_OPS_"))
    {
      hole.kind = RELOC_RUNTIME_CALL;
      
      std::string_view symbol_name(descr_imm);
      size_t split = symbol_name.find("__RCP__");
      if (split == std::string_view::npos)
        throw std::runtime_error(std::format("Invalid CRUNTIME_OPS_ symbol: {}\n", (*rel.sym_ptr_ptr)->name));

      std::string_view fun = symbol_name.substr(0, split);
      std::string_view arg_name = symbol_name.substr(split + 7);

      hole.val.call.sym = malloc(fun.size() + 1);
      strncpy((char*)hole.val.call.sym, fun.data(), fun.size());
      ((char*)hole.val.call.sym)[fun.size()] = '\0';

      const std::string& arg = rsh_symbol_map.at(std::string(arg_name));
      hole.val.call.arg = arg.c_str();
    }
    else if (descr_imm = remove_prefix(descr, "CONST_AT_IMM"))
    {
      hole.kind = RELOC_RCP_CONST_AT_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    }
    else if (descr_imm = remove_prefix(descr, "RAW_IMM"))
    {
      hole.kind = RELOC_RCP_RAW_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    }
    else if (descr_imm = remove_prefix(descr, "CONST_STR_AT_IMM"))
    {
      hole.kind = RELOC_RCP_CONST_STR_AT_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    }
    else if (descr_imm = remove_prefix(descr, "CONSTCELL_AT_IMM"))
    {
      hole.kind = RELOC_RCP_CONSTCELL_AT_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    }
    else if (descr_imm = remove_prefix(descr, "CONSTCELL_AT_LABEL_IMM"))
    {
      hole.kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    }
    else if (strcmp(descr, "EXEC_NEXT") == 0)
    {
      bool is_last_instruction = (rel.address - rel.addend) == stencil_body.size();
      bool is_relative_jmp = stencil_body[rel.address - 1] == 0xE9; /*JMP*/
      bool is_got_jmp = stencil_body[rel.address - 2] == 0xFF && stencil_body[rel.address - 1] == 0x25; /*GOT JMP*/
      bool is_got_call = stencil_body[rel.address - 2] == 0xFF && stencil_body[rel.address - 1] == 0x15; /*GOT CALL*/

      if (is_last_instruction)
      {
        if(is_relative_jmp)
        {
          // This is the last instruction; safe to just delete
          stencil_body.resize(rel.address - 1);
          return {}; // No relocation from this
        }
        else if (is_got_jmp)
        {
          // This is the last instruction; safe to just delete
          stencil_body.resize(rel.address - 2);
          return {}; // No relocation from this
        }
        else
        {
          std::cerr << std::format("Warning: EXEC_NEXT is called as the last instruction, but it is not a relative JMP or GOT JMP, cannot process EXEC_NEXT relocation at offset {:#x}\n", rel.address);
        }
      }
      if(is_got_jmp) // Transform into relative JMP
      {
        stencil_body[rel.address - 2] = 0x90; // NOP
        stencil_body[rel.address - 1] = 0xE9; // JMP
      }
      else if(is_got_call) // Transform into relative JMP
      {
        stencil_body[rel.address - 2] = 0x90; // NOP
        stencil_body[rel.address - 1] = 0xE8; // CALL
      }
      hole.kind = RELOC_RCP_EXEC_NEXT;
    }
    else if (descr_imm = remove_prefix(descr, "EXEC_IMM"))
    {
      int is_relative_jmp = stencil_body[rel.address - 1] == 0xE9; /*JMP*/
      int is_got_jmp = stencil_body[rel.address - 2] == 0xFF && stencil_body[rel.address - 1] == 0x25; /*GOT JMP*/
      if(is_got_jmp) // Transform into relative JMP
      {
        stencil_body[rel.address - 2] = 0x90; // NOP
        stencil_body[rel.address - 1] = 0xE9; // JMP
      }
      hole.kind = RELOC_RCP_EXEC_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    }
    else if (strcmp(descr, "PATCHED_VARIANTS") == 0)
    {
      hole.kind = RELOC_RCP_PATCHED_VARIANTS;
    }
    else if (strcmp(descr, "EXECUTABLE") == 0)
    {
      hole.kind = RELOC_RCP_EXECUTABLE_START;
    }
    else
    {
      std::cerr << std::format("Unsupported internal relocation symbol: {}\n", (*rel.sym_ptr_ptr)->name);

      hole.kind = RELOC_RUNTIME_SYMBOL;
      hole.val.symbol_name = strdup((*rel.sym_ptr_ptr)->name);
    }
  }
  else if (strcmp((*rel.sym_ptr_ptr)->name, ".rodata") == 0)
  {
    hole.kind = RELOC_RODATA;
  }
  else
  {
    switch (rel.howto->type)
    {
    case X86_64_RELOC_KIND::R_X86_64_GOTPCRELX:
      hole.kind = RELOC_RUNTIME_SYMBOL_GOT;
    break;
    default:
      hole.kind = RELOC_RUNTIME_SYMBOL;
    break;
    }

    hole.val.symbol_name = strdup((*rel.sym_ptr_ptr)->name);
  }

  //std::cerr << std::format("  offset {:#X}, addend {}, symbol {}, type {}\n", rel.address, rel.addend, (*rel.sym_ptr_ptr)->name, rel.howto->type);
  
  return hole;
}

static std::vector<Hole> process_relocations(std::vector<uint8_t>& stencil_body, long reloc_count, arelent **relocs)
{
  std::vector<Hole> holes;
  holes.reserve(reloc_count);

  for (long i = 0; i < reloc_count; i++)
  {
    const arelent *rel = relocs[i];
    if (rel->sym_ptr_ptr && *rel->sym_ptr_ptr && rel->howto->name)
    {
      auto res = process_relocation(stencil_body, *rel);
      if (res.has_value())
        holes.push_back(std::move(res.value()));
    }
    else
      std::cerr << "Missing relocation symbol!\n";
  }

  return holes;
}

static void process_section(bfd& abfd, asection& section, Stencils& stencils)
{
  bfd_size_type size = bfd_section_size(&section);
  if (size == 0)
    return;

  const char *symbol = section.symbol->name;
  std::vector<bfd_byte> body(size);

  if (!bfd_get_section_contents(&abfd, &section, body.data(), 0, size))
  {
    std::cerr << "Failed to read section contents\n";
    return;
  }

  //std::cerr << std::format("Processing section: {} (size: {}, flags: {:#x})\n", symbol, size, section->flags);

  /* Get relocations */
  long reloc_size = bfd_get_reloc_upper_bound(&abfd, &section);
  if (reloc_size <= 0)
    return;

  /* Read symbol table */
  long symtab_size = bfd_get_symtab_upper_bound(&abfd);
  if (symtab_size <= 0)
    return;

  asymbol **symbol_table = (asymbol **)malloc(symtab_size);

  bfd_canonicalize_symtab(&abfd, symbol_table);

  arelent **relocs = (arelent **)malloc(reloc_size);
  long reloc_count = bfd_canonicalize_reloc(&abfd, &section, relocs, symbol_table);

  if (section.flags & SEC_CODE)
  {
    std::vector<Hole> holes = process_relocations(body, reloc_count, relocs);

    StencilExport *stencil;
    int opcode = get_opcode(&symbol[6]);
    if (opcode != -1)
    {
      stencil = &stencils.stencils_opcodes.at(opcode);
    }
    else
    {
      stencils.stencils_extra.push_back(StencilExportNamed{std::string(&symbol[6])});
      stencil = &stencils.stencils_extra.back();
    }

    stencil->body = std::move(body);
    stencil->holes = std::move(holes);
    stencil->alignment = 1 << section.alignment_power;
  }
  else if ((section.flags & SEC_READONLY) && (section.flags & BSF_KEEP))
  {
    if (strcmp(symbol, ".rodata") == 0)
    {
      stencils.rodata = std::move(body);

      if (reloc_count > 0)
        std::cerr << std::format("There are some relocations in the section of {}, this is not supported!\n", symbol);
    }
    else
      std::cerr << std::format("Section/Function {} could not be matched to a valid R opcode\n", symbol);
  }

  free(relocs);
  free(symbol_table);
}

static void process_sections(bfd *abfd, asection *section, void *data)
{
  Stencils *stencils = (Stencils *)data;
  try
  {
    process_section(*abfd, *section, *stencils);
  }
  catch(const std::exception& e)
  {
    std::cerr << "Error processing section " << section->symbol->name << ": " << e.what() << '\n';
  }
}

static void free_stencil(const StencilExport& stencil)
{
  for (const auto& hole : stencil.holes)
  {
    if (hole.kind == RELOC_RUNTIME_SYMBOL || hole.kind == RELOC_RUNTIME_SYMBOL_GOT || hole.kind == RELOC_RUNTIME_SYMBOL_DEREF || hole.kind == RELOC_RUNTIME_CALL)
      free(hole.val.symbol_name);
  }
}

static void cleanup(Stencils& stencils)
{
  for (const auto& current : stencils.stencils_opcodes)
    free_stencil(current);

  for (const auto& current : stencils.stencils_extra)
    free_stencil(current);
}

static void analyze_object_file(const char *filename, Stencils& stencils)
{
  bfd *abfd = bfd_openr(filename, NULL);
  if (!abfd)
  {
    std::cerr << std::format("Failed to open file: {}\n", filename);
    return;
  }

  if (!bfd_check_format(abfd, bfd_object))
  {
    std::cerr << std::format("File is not an object file: {}\n", filename);
    bfd_close(abfd);
    return;
  }

  bfd_map_over_sections(abfd, process_sections, &stencils);
  bfd_close(abfd);
}

static void print_sizes(const Stencils& stencils)
{
  size_t total_size = 0;
  size_t count = 0;
  for (const auto& current : stencils.stencils_opcodes)
  {
    if (!current.body.empty())
    {
      total_size += current.body.size();
      count++;
    }
  }
  for (const auto& current : stencils.stencils_extra)
  {
    total_size += current.body.size();
    count++;
  }

  std::cerr << std::format("Total size of stencils: {} bytes\n", total_size);
  std::cerr << std::format("Average size of stencils: {:.1f} bytes\n", (double)(total_size) / count);
}

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    std::cerr << std::format("Usage: {} <object file>\n", argv[0]);
    return 1;
  }
  bfd_init();

  rsh_symbol_map = init_rsh_symbol_map();

  Stencils stencils;

  analyze_object_file(argv[1], stencils);

  prepare_stepfor(stencils.stencils_extra);

  export_to_files(stencils);

  print_sizes(stencils);

  cleanup(stencils);

  return 0;
}