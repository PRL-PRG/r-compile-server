#include "../rcp_bc_info.h"
#include "../rcp_common.h"
#include <bfd.h>
#include <stdlib.h>

#include <algorithm>
#include <array>
#include <cassert>
#include <cstring>
#include <filesystem>
#include <format>
#include <fstream>
#include <iostream>
#include <string>
#include <string_view>
#include <unordered_map>
#include <vector>

namespace fs = std::filesystem;

enum X86_64_RELOC_KIND {
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

struct StencilExport {
  std::string name;
  std::string section_symbol_name;
  std::vector<uint8_t> body;
  std::vector<Hole> holes;
  uint8_t alignment = 0;
  StencilExport(std::string name, std::string section_symbol_name)
      : name(std::move(name)),
        section_symbol_name(std::move(section_symbol_name)) {}
};

struct StencilExportSet {
  std::string_view name;
  std::vector<StencilExport> stencils;
  std::string extra_string;
};

struct Stencils {
  std::vector<uint8_t> rodata;
  std::array<StencilExportSet, NUM_OPCODES>
      stencils_opcodes;
  std::vector<StencilExport> stencils_extra;
  std::vector<StencilExport> functions_not_inlined;
  std::unordered_map<std::string, std::vector<uint8_t>> debug_frames;
  std::vector<uint8_t> debug_frame_cie;

  Stencils() {
    for (size_t i = 0; i < stencils_opcodes.size(); i++)
      stencils_opcodes[i].name = OPCODES_NAMES[i];
  }
};

template <typename T> static bool fits_in(int64_t value) {
  return value >= std::numeric_limits<T>::min() &&
         value <= std::numeric_limits<T>::max();
}

static int starts_with(const char *str, const char *prefix) {
  while (*prefix) {
    if (*str != *prefix)
      return 0;
    str++;
    prefix++;
  }
  return 1;
}

static const char *remove_prefix(const char *str, const char *prefix) {
  while (*prefix) {
    if (*str != *prefix)
      return NULL;
    str++;
    prefix++;
  }
  return str;
}

std::unordered_map<std::string_view, uint8_t> opcode_idx;
static auto prepare_opcodes() {
  std::unordered_map<std::string_view, uint8_t> idx;
  idx.reserve(NUM_OPCODES); // avoid rehashes
  for (size_t i = 0; i < NUM_OPCODES; ++i)
    idx.emplace(std::string_view(OPCODES_NAMES[i]), i);

  return idx;
}

static int get_opcode(const char *str) {
  if (!starts_with(str, "_RCP_"))
    return -1;

  str += 5;

  for (int i = 0; i < NUM_OPCODES; ++i)
    if (strcmp(str, OPCODES_NAMES[i]) == 0)
      return i;
  return -1;
}

static void prepare_variant_one(StencilExport &stencil,
                                size_t stepfor_max_size) {
  int32_t offset_comparison = stepfor_max_size - stencil.body.size();

  // Different variants of StepFor (can) have different sizes, we need to ensure
  // that all will finish executing at the same memory address. This can be done
  // by filling the gap with NOPs (0x90) for very small differences
  if (offset_comparison <= 2) {
    DEBUG_PRINT("StepFor correction: NOP\n");
    size_t gap_fill = stepfor_max_size - stencil.body.size();
    stencil.body.resize(stencil.body.size() + gap_fill,
                        0x90); // NOPs to fill the gap
  }
  // If the offset fits in 1 byte, we can use a short jump (0xEB)
  else if (fits_in<int8_t>(offset_comparison - 2)) {
    DEBUG_PRINT("StepFor correction: Short jump\n");
    stencil.body.push_back(0xEB); // JMP instruction
    int8_t offset = (int8_t)(offset_comparison - 2);
    stencil.body.push_back(offset); // JMP instruction
  }
  // If it doesn't, we need to use a near jump (0xE9)
  else {
    DEBUG_PRINT("StepFor correction: Near jump\n");
    stencil.body.push_back(0xE9); // JMP instruction
    int32_t offset = offset_comparison - 5;
    stencil.body.resize(stencil.body.size() + 4);

    memcpy(&stencil.body[stencil.body.size() - 4], &offset, sizeof(offset));
  }
}

void prepare_stepfor(StencilExportSet &stencil_set) {
  size_t stepfor_max_size = 0;
  size_t stepfor_sum_size = 0;
  for (const auto &current : stencil_set.stencils)
    stepfor_max_size = std::max(stepfor_max_size, current.body.size());

  for (auto &current : stencil_set.stencils)
    prepare_variant_one(current, stepfor_max_size);

  for (const auto &current : stencil_set.stencils)
    stepfor_sum_size += current.body.size();

  stencil_set.extra_string +=
      std::format("#define stepfor_variant_count {}\n"
                  "#define stepfor_max_size {}\n"
                  "#define stepfor_sum_size {}\n",
                  stencil_set.stencils.size(), stepfor_max_size,
                  stepfor_sum_size);
}

static void print_byte_array(std::ostream &file, const unsigned char *arr,
                             size_t len) {
  for (size_t i = 0; i < len; i++)
    file << std::format("0x{:02X}, ", arr[i]);
}

static void
export_body(std::ostream &file, const StencilExport &stencil,
            const char *opcode_name,
            const std::vector<StencilExport> &functions_not_inlined) {
  file << std::format("Hole _{}_HOLES[] = {{\n", opcode_name);
  for (const auto &hole : stencil.holes) {
    file << std::format("{{ .offset = 0x{:x}, .addend = {}, .size = {}, .kind "
                        "= {}, .is_pc_relative = {}",
                        hole.offset, hole.addend, hole.size, hole.kind,
                        hole.is_pc_relative);

    switch (hole.kind) {
    case RELOC_RUNTIME_SYMBOL:
    case RELOC_RUNTIME_SYMBOL_GOT:
    case RELOC_RUNTIME_SYMBOL_DEREF:
      file << std::format(", .val.symbol = &{}", hole.val.symbol_name);
      break;
    case RELOC_RUNTIME_CALL:
      file << std::format(", .val.call = {{ .sym = &{}, .arg = \"{}\" }}",
                          (const char *)hole.val.call.sym,
                          (const char *)hole.val.call.arg);
      break;
    case RELOC_NOTINLINED_FUNCTION: {
      for (size_t i = 0; i < functions_not_inlined.size(); i++) {
        if (functions_not_inlined[i].name == hole.val.symbol_name) {
          file << std::format(", .val.imm_pos = {}", i);
          break;
        }
      }
      break;
    }
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

// --- DWARF Decoding ---

constexpr uint8_t DW_CFA_advance_loc = 0x40;
constexpr uint8_t DW_CFA_offset = 0x80;
constexpr uint8_t DW_CFA_restore = 0xC0;
constexpr uint8_t DW_CFA_nop = 0x00;
constexpr uint8_t DW_CFA_set_loc = 0x01;
constexpr uint8_t DW_CFA_advance_loc1 = 0x02;
constexpr uint8_t DW_CFA_advance_loc2 = 0x03;
constexpr uint8_t DW_CFA_advance_loc4 = 0x04;
constexpr uint8_t DW_CFA_offset_extended = 0x05;
constexpr uint8_t DW_CFA_restore_extended = 0x06;
constexpr uint8_t DW_CFA_undefined = 0x07;
constexpr uint8_t DW_CFA_same_value = 0x08;
constexpr uint8_t DW_CFA_register = 0x09;
constexpr uint8_t DW_CFA_remember_state = 0x0a;
constexpr uint8_t DW_CFA_restore_state = 0x0b;
constexpr uint8_t DW_CFA_def_cfa = 0x0c;
constexpr uint8_t DW_CFA_def_cfa_register = 0x0d;
constexpr uint8_t DW_CFA_def_cfa_offset = 0x0e;
constexpr uint8_t DW_CFA_def_cfa_expression = 0x0f;
constexpr uint8_t DW_CFA_expression = 0x10;
constexpr uint8_t DW_CFA_offset_extended_sf = 0x11;
constexpr uint8_t DW_CFA_def_cfa_sf = 0x12;
constexpr uint8_t DW_CFA_def_cfa_offset_sf = 0x13;
constexpr uint8_t DW_CFA_val_offset = 0x14;
constexpr uint8_t DW_CFA_val_offset_sf = 0x15;
constexpr uint8_t DW_CFA_val_expression = 0x16;

static uint16_t get_le16(const uint8_t *p) {
  return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

static uint32_t get_le32(const uint8_t *p) {
  return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) |
         ((uint32_t)p[3] << 24);
}

static uint64_t get_le64(const uint8_t *p) {
  uint64_t result = 0;
  for (int i = 0; i < 8; i++)
    result |= (uint64_t)p[i] << (i * 8);
  return result;
}

static uint64_t read_uleb128(const uint8_t *&p, const uint8_t *end) {
  uint64_t result = 0;
  int shift = 0;
  while (p < end) {
    uint8_t byte = *p++;
    result |= (uint64_t)(byte & 0x7f) << shift;
    if ((byte & 0x80) == 0)
      break;
    shift += 7;
  }
  return result;
}

static int64_t read_sleb128(const uint8_t *&p, const uint8_t *end) {
  int64_t result = 0;
  int shift = 0;
  uint8_t byte;
  do {
    if (p >= end)
      break;
    byte = *p++;
    result |= (int64_t)(byte & 0x7f) << shift;
    shift += 7;
  } while (byte & 0x80);
  if (shift < 64 && (byte & 0x40))
    result |= -((int64_t)1 << shift);
  return result;
}

struct DwarfCIE {
  uint64_t code_align = 1;
  int64_t data_align = -8;
  uint64_t ra_reg = 16;
  std::vector<uint8_t> initial_instructions;
  bool valid = false;
};

static DwarfCIE parse_cie(const std::vector<uint8_t> &cie) {
  DwarfCIE result;
  const uint8_t *p = cie.data();
  const uint8_t *end = p + cie.size();

  if (cie.size() < 4)
    return result;

  // Skip length and ID
  uint64_t length = get_le32(p);
  size_t header_len = 4;
  if (length == 0xffffffff) {
    length = get_le64(p + 4);
    header_len = 12;
  }

  // Skip Length + ID
  p += (header_len == 4 ? 8 : 20);

  if (p >= end)
    return result;

  uint8_t version = *p++;
  // Augmentation string - should be empty (just a null byte)
  if (p < end && *p != 0) {
    throw std::runtime_error(
        std::format("Unsupported non-empty CIE augmentation string: \"{}\"",
                    (const char *)p));
  }
  p++; // skip null

  if (p >= end)
    return result;

  result.code_align = read_uleb128(p, end);
  result.data_align = read_sleb128(p, end);

  if (version == 1) // DWARF 1 (unlikely for x86_64)
    result.ra_reg = *p++;
  else
    result.ra_reg = read_uleb128(p, end);

  if (p < end)
    result.initial_instructions.assign(p, end);

  result.valid = true;
  return result;
}

static std::string get_reg_name(uint64_t reg) {
  switch (reg) {
  case 0:
    return "rax";
  case 1:
    return "rdx";
  case 2:
    return "rcx";
  case 3:
    return "rbx";
  case 4:
    return "rsi";
  case 5:
    return "rdi";
  case 6:
    return "rbp";
  case 7:
    return "rsp";
  case 8:
    return "r8";
  case 9:
    return "r9";
  case 10:
    return "r10";
  case 11:
    return "r11";
  case 12:
    return "r12";
  case 13:
    return "r13";
  case 14:
    return "r14";
  case 15:
    return "r15";
  case 16:
    return "ra"; // rip
  default:
    return std::format("r{}", reg);
  }
}

struct DwarfState {
  uint64_t cfa_reg = 7; // RSP
  int64_t cfa_offset = 8;
  bool cfa_is_expr = false;

  struct Rule {
    enum Type {
      UNDEF,
      SAME,
      OFFSET,
      VAL_OFFSET,
      REGISTER,
      EXPRESSION,
      VAL_EXPRESSION
    } type = UNDEF;
    int64_t offset = 0; // for OFFSET, VAL_OFFSET
    uint64_t reg = 0;   // for REGISTER
  };

  std::unordered_map<uint64_t, Rule> rules;

  std::string format_cfa() const {
    if (cfa_is_expr)
      return "expr";
    return std::format("{}{:+}", get_reg_name(cfa_reg), cfa_offset);
  }

  std::string format_rule(uint64_t reg) const {
    auto it = rules.find(reg);
    if (it == rules.end())
      return "u"; // undefined
    const auto &r = it->second;
    switch (r.type) {
    case Rule::UNDEF:
      return "u";
    case Rule::SAME:
      return "s";
    case Rule::OFFSET:
      return std::format("c{:+}", r.offset);
    case Rule::VAL_OFFSET:
      return std::format("v{:+}", r.offset);
    case Rule::REGISTER:
      return std::format("={}", get_reg_name(r.reg));
    default:
      return "exp";
    }
  }
};

static void execute_dwarf_insts(
    const uint8_t *&p, const uint8_t *end, DwarfState &state,
    const DwarfCIE &cie,
    std::vector<std::pair<uint64_t, DwarfState>> *rows = nullptr,
    uint64_t *pc = nullptr, int64_t *max_cfa_offset = nullptr) {
  std::vector<DwarfState> state_stack;

  if (max_cfa_offset)
    *max_cfa_offset = std::max(*max_cfa_offset, state.cfa_offset);

  while (p < end) {
    uint8_t op = *p++;
    uint8_t high = op & 0xC0;
    uint8_t low = op & 0x3F;

    uint64_t delta_pc = 0;
    bool advance = false;

    if (high == DW_CFA_advance_loc) {
      delta_pc = low * cie.code_align;
      advance = true;
    } else if (high == DW_CFA_offset) {
      uint64_t val = read_uleb128(p, end);
      state.rules[low] = {DwarfState::Rule::OFFSET,
                          (int64_t)val * cie.data_align, 0};
    } else if (high == DW_CFA_restore) {
      // Restore logic requires initial state, simplified here to ignore or
      // assume undef
    } else {
      switch (op) {
      case DW_CFA_nop:
        break;
      case DW_CFA_set_loc: {
        // relocate? skip for now, assumed not used in standard simple frames
        p += 8;
        break;
      }
      case DW_CFA_advance_loc1:
        delta_pc = (*p++) * cie.code_align;
        advance = true;
        break;
      case DW_CFA_advance_loc2:
        delta_pc = get_le16(p) * cie.code_align;
        p += 2;
        advance = true;
        break;
      case DW_CFA_advance_loc4:
        delta_pc = get_le32(p) * cie.code_align;
        p += 4;
        advance = true;
        break;
      case DW_CFA_offset_extended: {
        uint64_t reg = read_uleb128(p, end);
        uint64_t val = read_uleb128(p, end);
        state.rules[reg] = {DwarfState::Rule::OFFSET,
                            (int64_t)val * cie.data_align, 0};
        break;
      }
      case DW_CFA_def_cfa:
        state.cfa_reg = read_uleb128(p, end);
        state.cfa_offset = read_uleb128(p, end);
        break;
      case DW_CFA_def_cfa_sf:
        state.cfa_reg = read_uleb128(p, end);
        state.cfa_offset = read_sleb128(p, end) * cie.data_align;
        break;
      case DW_CFA_def_cfa_register:
        state.cfa_reg = read_uleb128(p, end);
        break;
      case DW_CFA_def_cfa_offset:
        state.cfa_offset = read_uleb128(p, end);
        break;
      case DW_CFA_def_cfa_offset_sf:
        state.cfa_offset = read_sleb128(p, end) * cie.data_align;
        break;
      case DW_CFA_same_value: {
        uint64_t reg = read_uleb128(p, end);
        state.rules[reg] = {DwarfState::Rule::SAME, 0, 0};
        break;
      }
      case DW_CFA_remember_state:
        state_stack.push_back(state);
        break;
      case DW_CFA_restore_state:
        if (!state_stack.empty()) {
          state = state_stack.back();
          state_stack.pop_back();
        }
        break;
      default:
        throw std::runtime_error(
            std::format("Unknown DWARF CFA opcode: {:#x}", op));
      }
    }

    if (max_cfa_offset)
      *max_cfa_offset = std::max(*max_cfa_offset, state.cfa_offset);

    if (advance && rows && pc) {
      *pc += delta_pc;
      rows->emplace_back(*pc, state);
    }
  }
}

static void print_fde_decoded(std::ostream &os,
                              const std::vector<uint8_t> &cie_data,
                              const std::vector<uint8_t> &fde_data) {
  if (fde_data.size() < 8)
    return;

  DwarfCIE cie = parse_cie(cie_data);
  if (!cie.valid) {
    os << "Invalid CIE\n";
    return;
  }

  const uint8_t *p = fde_data.data();
  const uint8_t *end = p + fde_data.size();

  // Parse FDE Header
  uint64_t length = get_le32(p);
  size_t header_len = 4;
  if (length == 0xffffffff) {
    length = get_le64(p + 4);
    header_len = 12;
  }
  p += (header_len == 4 ? 8 : 20); // Skip Len + ID

  // PC Begin / Range
  // Assumed relocation applied or raw 0?
  // In relocatable object, these are usually 0 and Size
  uint64_t pc_begin = get_le64(p);
  p += 8;
  uint64_t pc_range = get_le64(p);
  p += 8;

  os << std::format("FDE {:x} pc={:x}..{:x}\n", fde_data.size(), pc_begin,
                    pc_begin + pc_range);
  os << "   LOC           CFA      ra\n";

  DwarfState state;
  // Defaults for x86_64
  state.rules[cie.ra_reg] = {DwarfState::Rule::OFFSET, -8, 0}; // Usually c-8

  // Execute CIE initial instructions
  const uint8_t *ip = cie.initial_instructions.data();
  execute_dwarf_insts(ip, ip + cie.initial_instructions.size(), state, cie);

  uint64_t current_pc = pc_begin;

  // Print initial row
  os << std::format("{:016x} {:<8} {}\n", current_pc, state.format_cfa(),
                    state.format_rule(cie.ra_reg));

  // Execute FDE instructions
  std::vector<std::pair<uint64_t, DwarfState>> rows;
  execute_dwarf_insts(p, end, state, cie, &rows, &current_pc);

  for (const auto &row : rows) {
    os << std::format("{:016x} {:<8} {}\n", row.first, row.second.format_cfa(),
                      row.second.format_rule(cie.ra_reg));
  }
}

static void export_fde(std::ostream &file, const Stencils &stencils,
                       const std::string &section_symbol_name,
                       const std::string &variable_name) {
  auto it = stencils.debug_frames.find(section_symbol_name);
  if (it != stencils.debug_frames.end()) {
    file << "#ifdef GDB_JIT_SUPPORT\n";
    file << "/*\n";
    print_fde_decoded(file, stencils.debug_frame_cie, it->second);
    file << "*/\n";
    file << std::format("uint8_t {}_debug_frame[] = {{ ", variable_name);
    print_byte_array(file, it->second.data(), it->second.size());
    file << "};\n";
    file << "#endif\n\n";
  }
}

static int64_t get_cfa_offset(const std::vector<uint8_t> &cie_data,
                              const std::vector<uint8_t> &fde_data) {
  if (fde_data.size() < 8)
    throw std::runtime_error("FDE data too small to compute CFA offset");

  DwarfCIE cie = parse_cie(cie_data);
  if (!cie.valid)
    throw std::runtime_error("Invalid CIE while computing CFA offset");

  const uint8_t *p = fde_data.data();
  const uint8_t *end = p + fde_data.size();

  // Parse FDE Header
  uint64_t length = get_le32(p);
  size_t header_len = 4;
  if (length == 0xffffffff) {
    length = get_le64(p + 4);
    header_len = 12;
  }
  p += (header_len == 4 ? 8 : 20); // Skip Len + ID
  p += 16;                         // Skip PC Begin + Range

  DwarfState state;
  state.rules[cie.ra_reg] = {DwarfState::Rule::OFFSET, -8, 0};

  int64_t max_cfa_offset = 8;
  const uint8_t *ip = cie.initial_instructions.data();
  execute_dwarf_insts(ip, ip + cie.initial_instructions.size(), state, cie,
                      nullptr, nullptr, &max_cfa_offset);

  execute_dwarf_insts(p, end, state, cie, nullptr, nullptr, &max_cfa_offset);

  return max_cfa_offset;
}

// Create stencils_data.c and stencils_data.h
static void export_to_files(const fs::path &output_dir,
                            const Stencils &stencils) {
  if (!fs::is_directory(output_dir)) {
    fs::create_directories(output_dir);
  }

  std::ofstream c_file(output_dir / "stencils_data.c");
  std::ofstream h_file(output_dir / "stencils_data.h");

  h_file << "#ifndef STENCILS_DATA_H\n";
  h_file << "#define STENCILS_DATA_H\n";
  h_file << "#include \"rcp_common.h\"\n\n";
  h_file << "#include <stddef.h>\n\n";

  // Calculate _RCP_INIT CFA offset
  h_file << "#ifdef GDB_JIT_SUPPORT\n";
  {
    const StencilExport *rcp_init = nullptr;
    for (const auto &s : stencils.stencils_extra) {
      if (s.name == "_RCP_INIT") {
        rcp_init = &s;
        break;
      }
    }
    if (!rcp_init)
      throw std::runtime_error("_RCP_INIT stencil not found");

    auto it = stencils.debug_frames.find(rcp_init->section_symbol_name);
    if (it == stencils.debug_frames.end()) {
      throw std::runtime_error(
          std::format("_RCP_INIT debug frame not found (searched for {})",
                      rcp_init->section_symbol_name));
    }
    int64_t offset = get_cfa_offset(stencils.debug_frame_cie, it->second);
    h_file << std::format("#define RCP_INIT_CFA_OFFSET {}\n", offset);
  }
  h_file << "#endif\n";

  c_file << "#include \"stencils_data.h\"\n\n";
  c_file << "#define USE_RINTERNALS\n";
  c_file << "#define RSH\n";
  c_file << "#include <string.h>\n";
  c_file << "#include <R.h>\n";
  c_file << "#include <Rinternals.h>\n";
  c_file << "#include <Rmath.h>\n";
  c_file << "#include \"runtime_internals.h\"\n";
  c_file << "extern RCNTXT *R_GlobalContext;\n";
  c_file << "extern SEXP R_ReturnedValue;\n\n";

  // --- 1. Bodies, Holes, Debug Frames (Definitions in .c) ---

  // Opcodes Stencils
  for (const auto &current : stencils.stencils_opcodes) {
    if (!current.stencils.empty()) {
      h_file << current.extra_string << "\n";

      for (const auto &stencil : current.stencils) {
        export_body(c_file, stencil,
                    (std::string(current.name) + '_' + stencil.name).c_str(),
                    stencils.functions_not_inlined);

        // Export FDEs
        export_fde(c_file, stencils, stencil.section_symbol_name,
                   std::format("_{}_{}", current.name, stencil.name));
      }
    }
  }

  // Extra Stencils
  for (const auto &current : stencils.stencils_extra) {
    export_body(c_file, current, current.name.c_str(),
                stencils.functions_not_inlined);
    export_fde(c_file, stencils, current.section_symbol_name,
               std::format("_{}", current.name));
  }

  // Not-inlined Functions
  size_t notinlined_total_size = 0;
  for (const auto &current : stencils.functions_not_inlined) {
    notinlined_total_size += current.body.size();
    export_body(c_file, current, current.name.c_str(),
                stencils.functions_not_inlined);
    export_fde(c_file, stencils, current.section_symbol_name,
               std::format("_{}", current.name));
  }

  // --- 2. Arrays (Definitions in .c, Declarations in .h) ---

  // Opcodes Stencils Arrays
  for (const auto &current : stencils.stencils_opcodes) {
    if (!current.stencils.empty()) {
      c_file << std::format("\nconst Stencil {}_stencils[] = {{\n",
                            current.name);
      for (const auto &stencil : current.stencils) {
        std::string debug_frame_ptr = "NULL";
        auto it = stencils.debug_frames.find(stencil.section_symbol_name);
        if (it != stencils.debug_frames.end()) {
          debug_frame_ptr =
              std::format("_{}_{}_debug_frame", current.name, stencil.name);
        }

        c_file << std::format(
            "{{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"",
            stencil.body.size(), std::string(current.name) + '_' + stencil.name,
            stencil.holes.size(),
            std::string(current.name) + '_' + stencil.name, stencil.alignment,
            std::string(current.name) + '_' + stencil.name);

        c_file << "\n#ifdef GDB_JIT_SUPPORT\n";
        c_file << ", " << debug_frame_ptr << "\n";
        c_file << "#endif\n";
        c_file << "},\n";
      }
      c_file << "};\n";

      h_file << std::format("extern const Stencil {}_stencils[];\n",
                            current.name);
    }
  }

  // Extra Stencils Constants
  for (const auto &current : stencils.stencils_extra) {
    std::string debug_frame_ptr = "NULL";
    auto it = stencils.debug_frames.find(current.section_symbol_name);
    if (it != stencils.debug_frames.end()) {
      debug_frame_ptr = std::format("_{}_debug_frame", current.name);
    }

    c_file << std::format(
        "const Stencil {} = {{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"",
        current.name, current.body.size(), current.name, current.holes.size(),
        current.name, current.alignment, current.name);

    c_file << "\n#ifdef GDB_JIT_SUPPORT\n";
    c_file << ", " << debug_frame_ptr << "\n";
    c_file << "#endif\n";
    c_file << "};\n";

    h_file << std::format("extern const Stencil {};\n", current.name);
  }

  // Not-inlined Stencils Array
  c_file << "\nconst Stencil notinlined_stencils[] = {\n";
  for (const auto &current : stencils.functions_not_inlined) {
    std::string debug_frame_ptr = "NULL";
    auto it = stencils.debug_frames.find(current.section_symbol_name);
    if (it != stencils.debug_frames.end()) {
      debug_frame_ptr = std::format("_{}_debug_frame", current.name);
    }

    c_file << std::format("{{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"",
                          current.body.size(), current.name,
                          current.holes.size(), current.name, current.alignment,
                          current.name);

    c_file << "\n#ifdef GDB_JIT_SUPPORT\n";
    c_file << ", " << debug_frame_ptr << "\n";
    c_file << "#endif\n";
    c_file << "},\n";
  }
  c_file << "};\n";
  h_file << "extern const Stencil notinlined_stencils[];\n";

  // Not-inlined Debug Frames Array
  c_file << "#ifdef GDB_JIT_SUPPORT\n";
  c_file << "\nconst uint8_t *notinlined_debug_frames[] = {\n";
  for (const auto &current : stencils.functions_not_inlined) {
    auto it = stencils.debug_frames.find(current.section_symbol_name);
    if (it != stencils.debug_frames.end()) {
      c_file << std::format("_{}_debug_frame,\n", current.name);
    } else {
      c_file << "NULL,\n";
    }
  }
  c_file << "};\n";
  c_file << "#endif\n";

  h_file << "#ifdef GDB_JIT_SUPPORT\n";
  h_file << "extern const uint8_t *notinlined_debug_frames[];\n";
  h_file << "#endif\n";

  h_file << std::format("#define notinlined_count {}\n",
                        stencils.functions_not_inlined.size());
  h_file << std::format("#define notinlined_size {}\n", notinlined_total_size);

  // --- 3. CIE and RODATA ---

  // CIE
  c_file << "#ifdef GDB_JIT_SUPPORT\n";
  if (!stencils.debug_frame_cie.empty()) {
    DwarfCIE cie = parse_cie(stencils.debug_frame_cie);
    c_file << "/*\n";
    c_file << std::format("CIE: {}\n", stencils.debug_frame_cie.size());
    c_file << std::format("- code alignment: {}\n", cie.code_align);
    c_file << std::format("- data alignment: {}\n", cie.data_align);
    c_file << std::format("- return address: {}\n", get_reg_name(cie.ra_reg));
    c_file << "*/\n";
  }
  c_file << "uint8_t __CIE[] = { ";
  print_byte_array(c_file, stencils.debug_frame_cie.data(),
                   stencils.debug_frame_cie.size());
  c_file << "};\n";
  c_file << "#endif\n";

  h_file << "#ifdef GDB_JIT_SUPPORT\n";
  h_file << "extern uint8_t __CIE[];\n";
  h_file << "#endif\n";

  // RODATA
  c_file << "const uint8_t rodata[] = { ";
  print_byte_array(c_file, stencils.rodata.data(), stencils.rodata.size());
  c_file << "};\n";
  h_file << "extern const uint8_t rodata[];\n";
  h_file << std::format("#define rodata_size {}\n", stencils.rodata.size());

  // --- 4. Main Access Arrays (stencils, debug_frames, stencils_all) ---

  // stencils[]
  c_file << std::format("\nconst Stencil* stencils[{}] = {{\n",
                        stencils.stencils_opcodes.size());
  for (const auto &current : stencils.stencils_opcodes) {
    if (!current.stencils.empty())
      c_file << std::format("{}_stencils,\n", current.name);
    else
      c_file << std::format("NULL,//{}\n", current.name);
  }
  c_file << "};\n";
  h_file << "extern const Stencil* stencils[];\n";

  // debug_frames[] (Need separate arrays for each opcode first)
  c_file << "#ifdef GDB_JIT_SUPPORT\n";
  for (const auto &current : stencils.stencils_opcodes) {
    if (current.stencils.empty())
      continue;

    c_file << std::format("const uint8_t *{}_debug_frames[] = {{ ",
                          current.name);
    for (const auto &stencil : current.stencils) {
      auto it = stencils.debug_frames.find(stencil.section_symbol_name);
      if (it != stencils.debug_frames.end()) {
        c_file << std::format("_{}_{}_debug_frame, ", current.name,
                              stencil.name);
      } else {
        c_file << "NULL, ";
      }
    }
    c_file << "};\n";
    h_file << "#ifdef GDB_JIT_SUPPORT\n";
    h_file << std::format("extern const uint8_t *{}_debug_frames[];\n",
                          current.name);
    h_file << "#endif\n";
  }

  c_file << std::format("\nconst uint8_t **debug_frames[{}] = {{\n",
                        stencils.stencils_opcodes.size());
  for (const auto &current : stencils.stencils_opcodes) {
    if (!current.stencils.empty())
      c_file << std::format("{}_debug_frames,\n", current.name);
    else
      c_file << std::format("NULL,//{}\n", current.name);
  }
  c_file << "};\n";
  c_file << "#endif\n";

  h_file << "#ifdef GDB_JIT_SUPPORT\n";
  h_file << "extern const uint8_t **debug_frames[];\n";
  h_file << "#endif\n";

  // stencils_all[]
  size_t stencils_all_count = 0;
  c_file << "\nconst Stencil* stencils_all[] = {\n";
  for (const auto &current : stencils.stencils_opcodes)
    for (size_t i = 0; i < current.stencils.size(); ++i) {
      c_file << std::format("&{}_stencils[{}],", std::string(current.name), i);
      stencils_all_count++;
    }
  for (const auto &current : stencils.stencils_extra) {
    c_file << std::format("&{},", current.name);
    stencils_all_count++;
  }
  for (size_t i = 0; i < stencils.functions_not_inlined.size(); ++i) {
    c_file << std::format("&notinlined_stencils[{}],", i);
    stencils_all_count++;
  }
  c_file << "\n};\n";
  h_file << "extern const Stencil* stencils_all[];\n";
  h_file << std::format("#define stencils_all_count {}\n", stencils_all_count);

  // FDE for extra stencils (explicit decls needed for direct access?)
  // e.g. __RCP_INIT_debug_frame
  h_file << "#ifdef GDB_JIT_SUPPORT\n";
  for (const auto &current : stencils.stencils_extra) {
    // Check if it has debug frame
    auto it = stencils.debug_frames.find(current.section_symbol_name);
    if (it != stencils.debug_frames.end()) {
      h_file << std::format("extern uint8_t _{}_debug_frame[];\n",
                            current.name);
    }
  }
  h_file << "#endif\n";

  h_file << "#endif\n";

  // Generate backward-compatible stencils.h to just include data header
  std::ofstream stencils_h(output_dir / "stencils.h");
  stencils_h << "#include \"stencils_data.h\"\n";
}

std::unordered_map<std::string, std::string> rsh_symbol_map;

static auto init_rsh_symbol_map() {
  std::unordered_map<std::string, std::string> rsh_symbol_map;

#define X(a, b, ...)                                                           \
  if (rsh_symbol_map.emplace(#b, #a).second == false)                          \
    throw std::runtime_error("Duplicate Rsh symbol mapping");
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

static std::optional<Hole>
process_relocation(std::vector<uint8_t> &stencil_body, const arelent &rel) {
  Hole hole;

  hole.offset = rel.address;
  hole.addend = rel.addend;
  hole.is_pc_relative = rel.howto->pc_relative;
  hole.size = rel.howto->size;

  switch (rel.howto->type) {
  case X86_64_RELOC_KIND::R_X86_64_PLT32: {
    assert(strcmp(rel.howto->name, "R_X86_64_PLT32") == 0);
    assert(rel.howto->pc_relative == 1);
    assert(rel.howto->size == 4);
  } break;
  case X86_64_RELOC_KIND::R_X86_64_PC32: {
    assert(strcmp(rel.howto->name, "R_X86_64_PC32") == 0);
    assert(rel.howto->pc_relative == 1);
    assert(rel.howto->size == 4);
  } break;
  case X86_64_RELOC_KIND::R_X86_64_32:
  case X86_64_RELOC_KIND::R_X86_64_32S: {
    assert(strcmp(rel.howto->name, "R_X86_64_32") == 0 ||
           strcmp(rel.howto->name, "R_X86_64_32S") == 0);
    assert(rel.howto->pc_relative == 0);
    assert(rel.howto->size == 4);
  } break;
  case X86_64_RELOC_KIND::R_X86_64_64: {
    assert(strcmp(rel.howto->name, "R_X86_64_64") == 0);
    assert(rel.howto->pc_relative == 0);
    assert(rel.howto->size == 8);
  } break;
  case X86_64_RELOC_KIND::R_X86_64_GOTPCRELX: {
    assert(strcmp(rel.howto->name, "R_X86_64_GOTPCRELX") == 0);
    assert(rel.howto->pc_relative == 1);
    assert(rel.howto->size == 4);
  } break;
  default: {
    throw std::runtime_error(std::format(
        "Unsupported relocation type: {}: {} (relocating: {}). Check "
        "compilation switches for memory model options.\n",
        rel.howto->type, rel.howto->name, (*rel.sym_ptr_ptr)->name));
  } break;
  }

  const char *descr_imm = NULL;
  if (starts_with((*rel.sym_ptr_ptr)->name, "_RCP_")) {
    const char *descr = &((*rel.sym_ptr_ptr)->name)[5];

    if ((descr_imm = remove_prefix(descr, "CRUNTIME0_"))) {
      hole.kind = RELOC_RUNTIME_SYMBOL_DEREF;
      hole.val.symbol_name = strdup(descr_imm);
    } else if ((descr_imm = remove_prefix(descr, "CRUNTIME_OPS_"))) {
      hole.kind = RELOC_RUNTIME_CALL;

      std::string_view symbol_name(descr_imm);
      size_t split = symbol_name.find("__RCP__");
      if (split == std::string_view::npos)
        throw std::runtime_error(std::format(
            "Invalid CRUNTIME_OPS_ symbol: {}\n", (*rel.sym_ptr_ptr)->name));

      std::string_view fun = symbol_name.substr(0, split);
      std::string_view arg_name = symbol_name.substr(split + 7);

      hole.val.call.sym = malloc(fun.size() + 1);
      strncpy((char *)hole.val.call.sym, fun.data(), fun.size());
      ((char *)hole.val.call.sym)[fun.size()] = '\0';

      const std::string &arg = rsh_symbol_map.at(std::string(arg_name));
      hole.val.call.arg = arg.c_str();
    } else if ((descr_imm = remove_prefix(descr, "CONST_AT_IMM"))) {
      hole.kind = RELOC_RCP_CONST_AT_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    } else if ((descr_imm = remove_prefix(descr, "RAW_IMM"))) {
      hole.kind = RELOC_RCP_RAW_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    } else if ((descr_imm = remove_prefix(descr, "CONST_STR_AT_IMM"))) {
      hole.kind = RELOC_RCP_CONST_STR_AT_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    } else if ((descr_imm = remove_prefix(descr, "CONSTCELL_AT_IMM"))) {
      hole.kind = RELOC_RCP_CONSTCELL_AT_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    } else if ((descr_imm = remove_prefix(descr, "CONSTCELL_AT_LABEL_IMM"))) {
      hole.kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    } else if (strcmp(descr, "EXEC_NEXT") == 0) {
      bool is_last_instruction =
          (rel.address - rel.addend) == stencil_body.size();
      bool is_relative_jmp = stencil_body[rel.address - 1] == 0xE9; /*JMP*/
      bool is_got_jmp = stencil_body[rel.address - 2] == 0xFF &&
                        stencil_body[rel.address - 1] == 0x25; /*GOT JMP*/
      bool is_got_call = stencil_body[rel.address - 2] == 0xFF &&
                         stencil_body[rel.address - 1] == 0x15; /*GOT CALL*/

      if (is_last_instruction) {
        if (is_relative_jmp) {
          // This is the last instruction; safe to just delete
          stencil_body.resize(rel.address - 1);
          return {}; // No relocation from this
        } else if (is_got_jmp) {
          // This is the last instruction; safe to just delete
          stencil_body.resize(rel.address - 2);
          return {}; // No relocation from this
        } else {
          std::cerr << std::format(
              "Warning: EXEC_NEXT is called as the last instruction, but it is "
              "not a relative JMP or GOT JMP, cannot process EXEC_NEXT "
              "relocation at offset {:#x}\n",
              rel.address);
        }
      }
      if (is_got_jmp) // Transform into relative JMP
      {
        stencil_body[rel.address - 2] = 0x90; // NOP
        stencil_body[rel.address - 1] = 0xE9; // JMP
      } else if (is_got_call)                 // Transform into relative JMP
      {
        stencil_body[rel.address - 2] = 0x90; // NOP
        stencil_body[rel.address - 1] = 0xE8; // CALL
      }
      hole.kind = RELOC_RCP_EXEC_NEXT;
    } else if ((descr_imm = remove_prefix(descr, "EXEC_IMM"))) {
      int is_relative_jmp = stencil_body[rel.address - 1] == 0xE9; /*JMP*/
      int is_got_jmp = stencil_body[rel.address - 2] == 0xFF &&
                       stencil_body[rel.address - 1] == 0x25; /*GOT JMP*/
      if (is_got_jmp) // Transform into relative JMP
      {
        stencil_body[rel.address - 2] = 0x90; // NOP
        stencil_body[rel.address - 1] = 0xE9; // JMP
      }
      hole.kind = RELOC_RCP_EXEC_IMM;
      hole.val.imm_pos = atoi(descr_imm);
    } else if (strcmp(descr, "PATCHED_VARIANTS") == 0) {
      hole.kind = RELOC_RCP_PATCHED_VARIANTS;
    } else if (strcmp(descr, "LOOPCNTXT") == 0) {
      hole.kind = RELOC_RCP_LOOPCNTXT;
    } else if (strcmp(descr, "EXECUTABLE") == 0) {
      hole.kind = RELOC_RCP_EXECUTABLE_START;
    } else {
      std::cerr << std::format("Unsupported internal relocation symbol: {}\n",
                               (*rel.sym_ptr_ptr)->name);

      hole.kind = RELOC_RUNTIME_SYMBOL;
      hole.val.symbol_name = strdup((*rel.sym_ptr_ptr)->name);
    }
  } else if ((descr_imm = remove_prefix((*rel.sym_ptr_ptr)->name, ".text."))) {
    hole.kind = RELOC_NOTINLINED_FUNCTION;
    hole.val.symbol_name = strdup(descr_imm);
    for (size_t i = 0; hole.val.symbol_name[i] != '\0'; i++)
      if (hole.val.symbol_name[i] == '.')
        hole.val.symbol_name[i] = '_';
  } else if (strcmp((*rel.sym_ptr_ptr)->name, ".rodata") == 0) {
    hole.kind = RELOC_RODATA;
  } else {
    switch (rel.howto->type) {
    case X86_64_RELOC_KIND::R_X86_64_GOTPCRELX:
      hole.kind = RELOC_RUNTIME_SYMBOL_GOT;
      break;
    default:
      hole.kind = RELOC_RUNTIME_SYMBOL;
      break;
    }

    hole.val.symbol_name = strdup((*rel.sym_ptr_ptr)->name);
  }

  // std::cerr << std::format("  offset {:#X}, addend {}, symbol {}, type {}\n",
  // rel.address, rel.addend, (*rel.sym_ptr_ptr)->name, rel.howto->type);

  return hole;
}

static std::vector<Hole> process_relocations(std::vector<uint8_t> &stencil_body,
                                             long reloc_count,
                                             arelent **relocs) {
  std::vector<Hole> holes;
  holes.reserve(reloc_count);

  for (long i = 0; i < reloc_count; i++) {
    const arelent *rel = relocs[i];
    if (rel->sym_ptr_ptr && *rel->sym_ptr_ptr && rel->howto->name) {
      auto res = process_relocation(stencil_body, *rel);
      if (res.has_value())
        holes.push_back(std::move(res.value()));
    } else
      std::cerr << "Missing relocation symbol!\n";
  }

  return holes;
}

static StencilExport &add_stencil(Stencils &stencils, std::string_view symbol,
                                  std::string section_symbol_name) {
  if (symbol.starts_with("_RCP_")) {
    size_t end = symbol.find("_OP");
    if (end != std::string_view::npos) {
      std::string_view opcode_part = symbol.substr(5, end + 3 - 5);

      auto opcode_it = opcode_idx.find(opcode_part);
      if (opcode_it == opcode_idx.end())
        throw std::runtime_error(
            std::format("Invalid opcode stencil name: {}\n", opcode_part));
      uint8_t opcode = opcode_it->second;
      const char *opcode_name = opcode_it->first.data();

      std::string stencil_suffix;
      if (symbol.size() >= end + 4) {
        stencil_suffix = (std::string)(symbol.substr(end + 4));
        if (!stencil_suffix.empty()) {
          bool is_all_digits = true;
          for (char c : stencil_suffix) {
            if (!isdigit(c)) {
              is_all_digits = false;
              break;
            }
          }
          if (is_all_digits) {
            if (stencil_suffix.size() == 1)
              stencil_suffix = "0" + stencil_suffix;
          }
        }
      }

      return stencils.stencils_opcodes.at(opcode).stencils.emplace_back(
          std::move(stencil_suffix), std::move(section_symbol_name));
    } else {
      return stencils.stencils_extra.emplace_back(
          std::string(symbol), std::move(section_symbol_name));
    }
  } else {
    std::string res(symbol);
    for (size_t i = 0; i < res.size(); i++)
      if (res[i] == '.')
        res[i] = '_';

    return stencils.functions_not_inlined.emplace_back(
        std::move(res), std::move(section_symbol_name));
  }
}

static void process_section(bfd &abfd, asection &section, Stencils &stencils) {
  bfd_size_type size = bfd_section_size(&section);
  if (size == 0)
    return;

  const char *symbol = section.symbol->name;
  std::vector<bfd_byte> body(size);

  if (!bfd_get_section_contents(&abfd, &section, body.data(), 0, size)) {
    std::cerr << "Failed to read section contents\n";
    return;
  }

  // std::cerr << std::format("Processing section: {} (size: {}, flags:
  // {:#x})\n", symbol, size, section->flags);

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
  long reloc_count =
      bfd_canonicalize_reloc(&abfd, &section, relocs, symbol_table);

  if (section.flags & SEC_CODE) {
    std::vector<Hole> holes = process_relocations(body, reloc_count, relocs);

    StencilExport &stencil =
        add_stencil(stencils, std::string_view(symbol).substr(6),
                    std::string(symbol)); // Remove .text prefix

    stencil.body = std::move(body);
    stencil.holes = std::move(holes);
    stencil.alignment = 1 << section.alignment_power;
  } else if (section.flags & SEC_DEBUGGING) {
    if (strcmp(symbol, ".debug_frame") == 0) {
      size_t offset = 0;
      while (offset < body.size()) {
        if (offset + 4 > body.size())
          break;
        uint64_t length = bfd_get_32(&abfd, &body[offset]);
        size_t header_size = 4;
        if (length == 0xffffffff) {
          if (offset + 12 > body.size())
            break;
          length = bfd_get_64(&abfd, &body[offset + 4]);
          header_size = 12;
        }

        if (length == 0)
          break;

        size_t entry_end = offset + header_size + length;
        if (entry_end > body.size())
          break;

        uint64_t id;
        bool is_cie = false;
        if (header_size == 4) {
          id = bfd_get_32(&abfd, &body[offset + 4]);
          if (id == 0xffffffff)
            is_cie = true;
        } else {
          id = bfd_get_64(&abfd, &body[offset + 12]);
          if (id == 0xffffffffffffffffULL)
            is_cie = true;
        }

        if (is_cie) {
          if (stencils.debug_frame_cie.empty())
            stencils.debug_frame_cie.assign(body.begin() + offset,
                                            body.begin() + entry_end);
        } else {
          size_t loc_offset = offset + (header_size == 4 ? 8 : 20);
          for (long i = 0; i < reloc_count; i++) {
            if (relocs[i]->address == loc_offset) {
              // uint64_t val = bfd_asymbol_value(*relocs[i]->sym_ptr_ptr) +
              // relocs[i]->addend;
              std::string key = (*relocs[i]->sym_ptr_ptr)->name;
              stencils.debug_frames[key].assign(body.begin() + offset,
                                                body.begin() + entry_end);
              break;
            }
          }
        }
        offset = entry_end;
      }
    }
  } else if ((section.flags & SEC_READONLY) && (section.flags & BSF_KEEP)) {
    if (strcmp(symbol, ".rodata") == 0) {
      stencils.rodata = std::move(body);

      if (reloc_count > 0)
        std::cerr << std::format("There are some relocations in the section of "
                                 "{}, this is not supported!\n",
                                 symbol);
    } else
      std::cerr << std::format(
          "Section/Function {} could not be matched to a valid R opcode\n",
          symbol);
  }

  free(relocs);
  free(symbol_table);
}

static void process_sections(bfd *abfd, asection *section, void *data) {
  Stencils *stencils = (Stencils *)data;
  try {
    process_section(*abfd, *section, *stencils);
  } catch (const std::exception &e) {
    std::cerr << "Error processing section " << section->symbol->name << ": "
              << e.what() << '\n';
  }
}

static void free_stencil(const StencilExport &stencil) {
  for (const auto &hole : stencil.holes) {
    if (hole.kind == RELOC_RUNTIME_SYMBOL ||
        hole.kind == RELOC_RUNTIME_SYMBOL_GOT ||
        hole.kind == RELOC_RUNTIME_SYMBOL_DEREF ||
        hole.kind == RELOC_RUNTIME_CALL ||
        hole.kind == RELOC_NOTINLINED_FUNCTION)
      free(hole.val.symbol_name);
  }
}

static void cleanup(Stencils &stencils) {
  for (const auto &current : stencils.stencils_opcodes)
    for (const auto &current : current.stencils)
      free_stencil(current);

  for (const auto &current : stencils.stencils_extra)
    free_stencil(current);
}

static void analyze_object_file(const char *filename, Stencils &stencils) {
  bfd *abfd = bfd_openr(filename, NULL);
  if (!abfd) {
    std::cerr << std::format("Failed to open file: {}\n", filename);
    return;
  }

  if (!bfd_check_format(abfd, bfd_object)) {
    std::cerr << std::format("File is not an object file: {}\n", filename);
    bfd_close(abfd);
    return;
  }

  bfd_map_over_sections(abfd, process_sections, &stencils);
  bfd_close(abfd);
}

static void sort_stencil_set(StencilExportSet &stencil_set) {
  std::sort(stencil_set.stencils.begin(), stencil_set.stencils.end(),
            [](const StencilExport &a, const StencilExport &b) {
              return a.name < b.name;
            });
}

static void print_sizes(const Stencils &stencils) {
  size_t total_size = 0;
  size_t count = 0;
  for (const auto &current : stencils.stencils_opcodes) {
    size_t size_specific = 0;
    for (const auto &current : current.stencils)
      size_specific += current.body.size();

    if (!current.stencils.empty()) {
      total_size += size_specific / current.stencils.size();
      count++;
    }
  }
  /*
  for (const auto& current : stencils.stencils_extra)
  {
    total_size += current.body.size();
    count++;
  }
  */
  std::cerr << std::format("Total size of stencils: {} bytes\n", total_size);
  std::cerr << std::format("Average size of stencils: {:.1f} bytes\n",
                           (double)(total_size) / count);
}

void count_hole_symbols(const Stencils &stencils, uint8_t stencil_kind,
                        std::ostream &output) {
  // Step 1: Count occurrences
  std::unordered_map<std::string, size_t> symbol_count;
  for (const auto &stencil_set : stencils.stencils_opcodes) {
    for (const auto &stencil : stencil_set.stencils) {
      for (const auto &hole : stencil.holes) {
        if (hole.kind == stencil_kind) {
          symbol_count[hole.val.symbol_name]++;
        }
      }
    }
  }
  for (const auto &stencil : stencils.stencils_extra) {
    for (const auto &hole : stencil.holes) {
      if (hole.kind == stencil_kind) {
        symbol_count[hole.val.symbol_name]++;
      }
    }
  }

  // Step 2: Move to vector for sorting
  std::vector<std::pair<std::string, size_t>> sorted_symbols(
      symbol_count.begin(), symbol_count.end());

  // Step 3: Sort by count (descending)
  std::sort(sorted_symbols.begin(), sorted_symbols.end(),
            [](const auto &a, const auto &b) {
              return a.second > b.second; // Sort by count, highest first
            });

  // Print results
  for (const auto &[symbol, count] : sorted_symbols) {
    std::cout << "'" << symbol << "': " << count << '\n';
  }
}

int main(int argc, char **argv) {
  if (argc < 3) {
    std::cerr << std::format("Usage: {} <object file> <output_dir>\n", argv[0]);
    return 1;
  }
  bfd_init();

  rsh_symbol_map = init_rsh_symbol_map();

  opcode_idx = prepare_opcodes();

  Stencils stencils;

  analyze_object_file(argv[1], stencils);

  for (auto &current : stencils.stencils_opcodes)
    sort_stencil_set(current);

  prepare_stepfor(stencils.stencils_opcodes[STEPFOR_BCOP]);

  export_to_files(argv[2], stencils);

  print_sizes(stencils);

  cleanup(stencils);

  return 0;
}
