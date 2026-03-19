#include "../rcp_bc_info.h"
#include "../rcp_common.h"
#include "../shared/dwarf.h"
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
	std::string name;
	std::string section_symbol_name;
	std::vector<uint8_t> body;
	std::vector<Hole> holes;
	uint8_t alignment = 0;
	StencilExport(std::string name, std::string section_symbol_name)
		: name(std::move(name)),
		  section_symbol_name(std::move(section_symbol_name)) {}
};

struct StencilExportSet
{
	std::string_view name;
	std::vector<StencilExport> stencils;
	std::string extra_string;
};

struct Stencils
{
	std::vector<uint8_t> rodata;
	std::array<StencilExportSet, NUM_OPCODES> stencils_opcodes;
	std::vector<StencilExport> stencils_extra;
	std::vector<StencilExport> functions_not_inlined;
	std::unordered_map<std::string, std::vector<uint8_t>> eh_frame_cfis;
	std::vector<uint8_t> eh_frame_cie;

	Stencils()
	{
		for (size_t i = 0; i < stencils_opcodes.size(); i++)
			stencils_opcodes[i].name = OPCODES_NAMES[i];
	}
};

template <typename T>
static bool fits_in(int64_t value)
{
	return value >= std::numeric_limits<T>::min() &&
		   value <= std::numeric_limits<T>::max();
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

std::unordered_map<std::string_view, uint8_t> opcode_idx;
static auto prepare_opcodes()
{
	std::unordered_map<std::string_view, uint8_t> idx;
	idx.reserve(NUM_OPCODES); // avoid rehashes
	for (size_t i = 0; i < NUM_OPCODES; ++i)
		idx.emplace(std::string_view(OPCODES_NAMES[i]), i);

	return idx;
}

static int get_opcode(const char *str)
{
	if (!starts_with(str, "_RCP_"))
		return -1;

	str += 5;

	for (int i = 0; i < NUM_OPCODES; ++i)
		if (strcmp(str, OPCODES_NAMES[i]) == 0)
			return i;
	return -1;
}

static void prepare_variant_one(StencilExport &stencil,
								size_t stepfor_max_size)
{
	int32_t offset_comparison = stepfor_max_size - stencil.body.size();

	// Different variants of StepFor (can) have different sizes, we need to ensure
	// that all will finish executing at the same memory address. This can be done
	// by filling the gap with NOPs (0x90) for very small differences
	if (offset_comparison <= 2)
	{
		DEBUG_PRINT("StepFor correction: NOP\n");
		size_t gap_fill = stepfor_max_size - stencil.body.size();
		stencil.body.resize(stencil.body.size() + gap_fill,
							0x90); // NOPs to fill the gap
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

void prepare_stepfor(StencilExportSet &stencil_set)
{
	size_t stepfor_max_size = 0;
	size_t stepfor_sum_size = 0;
	for (const auto &current : stencil_set.stencils)
		stepfor_max_size = std::max(stepfor_max_size, current.body.size());

	for (auto &current : stencil_set.stencils)
		prepare_variant_one(current, stepfor_max_size);

	for (const auto &current : stencil_set.stencils)
		stepfor_sum_size += current.body.size();

	stencil_set.extra_string += std::format("#define stepfor_variant_count {}\n"
											"#define stepfor_max_size {}\n"
											"#define stepfor_sum_size {}\n",
											stencil_set.stencils.size(),
											stepfor_max_size, stepfor_sum_size);
}

static void print_byte_array(std::ostream &file, const unsigned char *arr,
							 size_t len)
{
	for (size_t i = 0; i < len; i++)
		file << std::format("0x{:02X}, ", arr[i]);
}

static void
export_body(std::ostream &file, const StencilExport &stencil,
			const char *opcode_name,
			const std::vector<StencilExport> &functions_not_inlined)
{
	file << std::format("Hole _{}_HOLES[] = {{\n", opcode_name);
	for (const auto &hole : stencil.holes)
	{
		file << std::format("{{ .offset = 0x{:x}, .addend = {}, .size = {}, .kind "
							"= {}, .is_pc_relative = {}",
							hole.offset, hole.addend, hole.size, hole.kind,
							hole.is_pc_relative);

		switch (hole.kind)
		{
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
			case RELOC_NOTINLINED_FUNCTION:
			{
				for (size_t i = 0; i < functions_not_inlined.size(); i++)
				{
					if (functions_not_inlined[i].name == hole.val.symbol_name)
					{
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
//
// These functions parse DWARF .eh_frame structures at build time.
// The extracted CFI (Call Frame Information) instruction bytes from each FDE
// are stored as C byte arrays in the generated stencils_data.c. At runtime,
// gdb_jit.c uses these bytes directly when constructing the JIT function's
// .eh_frame data.
//
// The core DWARF parsing and CFI execution logic is implemented in the shared
// src/shared/dwarf.{c,h} library. This file uses those functions and adds
// C++ formatting for the human-readable decoded CFI table comments.

// C++ wrapper for DwarfCFIState that adds formatting methods.
// Used for generating human-readable CFI table comments in the output.
struct DwarfStateFormatter
{
	DwarfCFIState state;
	uint64_t ra_reg;

	DwarfStateFormatter(uint64_t return_addr_reg = DWARF_REG_RA)
		: ra_reg(return_addr_reg)
	{
		dwarf_cfi_state_init(&state);
	}

	std::string format_cfa() const
	{
		if (state.cfa_is_expr)
			return "expr";
		return std::format("{}{:+}", dwarf_get_x86_64_reg_name(state.cfa_reg), state.cfa_offset);
	}

	std::string format_rule(uint64_t reg) const
	{
		if (reg >= DWARF_MAX_REGS)
			return "u";
		const DwarfRegRule &r = state.rules[reg];
		switch (r.type)
		{
			case DWARF_RULE_UNDEFINED:
				return "u";
			case DWARF_RULE_SAME_VALUE:
				return "s";
			case DWARF_RULE_OFFSET:
				return std::format("c{:+}", r.offset);
			case DWARF_RULE_VAL_OFFSET:
				return std::format("v{:+}", r.offset);
			case DWARF_RULE_REGISTER:
				return std::format("={}", dwarf_get_x86_64_reg_name(r.reg));
			case DWARF_RULE_EXPRESSION:
			case DWARF_RULE_VAL_EXPRESSION:
				return "exp";
			default:
				return "u";
		}
	}
};

// Execute CFI instructions and collect rows for the decoded table.
//
// This function wraps dwarf_execute_cfi() but also tracks location advances
// to build the human-readable CFI table shown in generated code comments.
//
// @param p       Cursor into CFI byte stream; advanced past processed
// instructions.
// @param end     One-past-end of the CFI byte stream.
// @param fmt     State formatter to update.
// @param cie     Parsed CIE providing alignment factors.
// @param rows    If non-NULL, rows are appended on each location advance.
// @param pc      Current PC value; updated on location advances.
static void execute_dwarf_insts_with_rows(
	const uint8_t *&p, const uint8_t *end, DwarfStateFormatter &fmt,
	const DwarfCIE &cie,
	std::vector<std::pair<uint64_t, DwarfStateFormatter>> *rows,
	uint64_t *pc)
{
	const uint8_t *cursor = p;
	DwarfCFI inst;

	while (dwarf_decode_cfi(&cursor, end, &inst))
	{
		uint64_t delta_pc = 0;
		bool advance = false;

		switch (inst.opcode)
		{
			case DW_CFA_advance_loc:
			case DW_CFA_advance_loc1:
			case DW_CFA_advance_loc2:
			case DW_CFA_advance_loc4:
				delta_pc = inst.operand1 * cie.code_align;
				advance = true;
				break;

			case DW_CFA_set_loc:
				break;

			case DW_CFA_offset:
			case DW_CFA_offset_extended:
			case DW_CFA_offset_extended_sf:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_OFFSET;
					fmt.state.rules[inst.operand1].offset = inst.operand2 * cie.data_align;
				}
				break;

			case DW_CFA_val_offset:
			case DW_CFA_val_offset_sf:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_VAL_OFFSET;
					fmt.state.rules[inst.operand1].offset = inst.operand2 * cie.data_align;
				}
				break;

			case DW_CFA_restore:
			case DW_CFA_restore_extended:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_UNDEFINED;
				}
				break;

			case DW_CFA_def_cfa:
				fmt.state.cfa_reg = inst.operand1;
				fmt.state.cfa_offset = inst.operand2;
				fmt.state.cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_sf:
				fmt.state.cfa_reg = inst.operand1;
				fmt.state.cfa_offset = inst.operand2 * cie.data_align;
				fmt.state.cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_register:
				fmt.state.cfa_reg = inst.operand1;
				fmt.state.cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_offset:
				fmt.state.cfa_offset = (int64_t)inst.operand1;
				fmt.state.cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_offset_sf:
				fmt.state.cfa_offset = inst.operand2 * cie.data_align;
				fmt.state.cfa_is_expr = 0;
				break;

			case DW_CFA_same_value:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_SAME_VALUE;
				}
				break;

			case DW_CFA_undefined:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_UNDEFINED;
				}
				break;

			case DW_CFA_register:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_REGISTER;
					fmt.state.rules[inst.operand1].reg = (uint64_t)inst.operand2;
				}
				break;

			case DW_CFA_expression:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_EXPRESSION;
				}
				break;

			case DW_CFA_val_expression:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					fmt.state.rules[inst.operand1].type = DWARF_RULE_VAL_EXPRESSION;
				}
				break;

			case DW_CFA_def_cfa_expression:
				fmt.state.cfa_is_expr = 1;
				break;

			case DW_CFA_remember_state:
			case DW_CFA_restore_state:
				// State stack handling - simplified for formatting purposes
				break;

			case DW_CFA_nop:
				break;

			default:
				throw std::runtime_error(
					std::format("Unknown DWARF CFA opcode: {:#x}", inst.opcode));
		}

		if (advance && rows && pc)
		{
			*pc += delta_pc;
			rows->emplace_back(*pc, fmt);
		}
	}
	p = cursor;
}

// Decode CFI instructions and print the resulting register table
// as a human-readable comment. Output shows one row per location advance:
// address, CFA definition, and the return-address register rule.
static void print_cfi_decoded(std::ostream &os,
							  const std::vector<uint8_t> &cie_data,
							  const std::vector<uint8_t> &cfi_data)
{
	if (cfi_data.empty())
		return;

	DwarfCIE cie = dwarf_parse_cie(cie_data.data(), cie_data.size());
	if (!cie.valid)
	{
		os << "// Invalid CIE\n";
		return;
	}

	os << std::format("// CFI instructions: {} bytes\n", cfi_data.size());
	os << "//    LOC           CFA      ra\n";

	DwarfStateFormatter fmt(cie.ra_reg);

	// Execute CIE initial instructions
	if (cie.initial_insts && cie.initial_insts_len > 0)
	{
		const uint8_t *ip = cie.initial_insts;
		const uint8_t *ip_end = cie.initial_insts + cie.initial_insts_len;
		execute_dwarf_insts_with_rows(ip, ip_end, fmt, cie, nullptr, nullptr);
	}

	uint64_t current_pc = 0;

	// Print initial row
	os << std::format("// {:016x} {:<8} {}\n", current_pc, fmt.format_cfa(),
					  fmt.format_rule(cie.ra_reg));

	// Execute CFI instructions
	const uint8_t *p = cfi_data.data();
	const uint8_t *end = p + cfi_data.size();
	std::vector<std::pair<uint64_t, DwarfStateFormatter>> rows;
	execute_dwarf_insts_with_rows(p, end, fmt, cie, &rows, &current_pc);

	for (const auto &row : rows)
	{
		os << std::format("// {:016x} {:<8} {}\n", row.first, row.second.format_cfa(),
						  row.second.format_rule(cie.ra_reg));
	}
}

// Export a stencil's CFI instruction bytes as a C byte array in the generated code.
// Emits the decoded CFI table as a block comment for debugging, followed
// by the raw CFI bytes as a uint8_t array.
static void export_cfi(std::ostream &file, const Stencils &stencils,
					   const std::string &section_symbol_name,
					   const std::string &variable_name)
{
	auto it = stencils.eh_frame_cfis.find(section_symbol_name);
	if (it != stencils.eh_frame_cfis.end())
	{
		file << "//\n";
		print_cfi_decoded(file, stencils.eh_frame_cie, it->second);
		file << "//\n";
		file << std::format("uint8_t {}_cfi_data[] = {{ ", variable_name);
		print_byte_array(file, it->second.data(), it->second.size());
		file << "};\n\n";
	}
}

// =============================================================================
// Code Generation
//
// The following functions generate stencils_data.c and stencils.h, which
// contain compiled stencil data for the JIT compiler.
// =============================================================================

// Export stencil bodies (machine code bytes) and holes (relocations) for
// opcode stencils. Also exports CFI instruction bytes for each stencil.
//
// Generated variables (per opcode, per variant):
//   uint8_t _{OPCODE}_{VARIANT}_BODY[]
//   Hole _{OPCODE}_{VARIANT}_HOLES[]
//   uint8_t _{OPCODE}_{VARIANT}_cfi_data[]
static void export_opcode_stencil_bodies(std::ostream &c_file,
										 std::ostream &h_file,
										 const Stencils &stencils)
{
	for (const auto &current : stencils.stencils_opcodes)
	{
		if (!current.stencils.empty())
		{
			h_file << current.extra_string << "\n";

			for (const auto &stencil : current.stencils)
			{
				export_body(c_file, stencil,
							(std::string(current.name) + '_' + stencil.name).c_str(),
							stencils.functions_not_inlined);

				export_cfi(c_file, stencils, stencil.section_symbol_name,
						   std::format("_{}_{}", current.name, stencil.name));
			}
		}
	}
}

// Export stencil bodies and CFI for extra stencils (non-opcode stencils
// like _RCP_PROLOGUE, etc.).
//
// Generated variables (per stencil):
//   uint8_t _{NAME}_BODY[]
//   Hole _{NAME}_HOLES[]
//   uint8_t _{NAME}_cfi_data[]
static void export_extra_stencil_bodies(std::ostream &c_file,
										const Stencils &stencils)
{
	for (const auto &current : stencils.stencils_extra)
	{
		export_body(c_file, current, current.name.c_str(),
					stencils.functions_not_inlined);
		export_cfi(c_file, stencils, current.section_symbol_name,
				   std::format("_{}", current.name));
	}
}

// Export stencil bodies and CFI for functions that couldn't be inlined.
// Returns the total size of all not-inlined function bodies.
//
// Generated variables (per function):
//   uint8_t _{NAME}_BODY[]
//   Hole _{NAME}_HOLES[]
//   uint8_t _{NAME}_cfi_data[]
static size_t export_notinlined_bodies(std::ostream &c_file,
									   const Stencils &stencils)
{
	size_t notinlined_total_size = 0;
	for (const auto &current : stencils.functions_not_inlined)
	{
		notinlined_total_size += current.body.size();
		export_body(c_file, current, current.name.c_str(),
					stencils.functions_not_inlined);
		export_cfi(c_file, stencils, current.section_symbol_name,
				   std::format("_{}", current.name));
	}
	return notinlined_total_size;
}

// Export Stencil struct arrays for each opcode that has stencil variants.
// Each array contains all variants for that opcode.
//
// Generated variables:
//   const Stencil {OPCODE}_stencils[]  (one per opcode with variants)
static void export_opcode_stencil_arrays(std::ostream &c_file,
										 std::ostream &h_file,
										 const Stencils &stencils)
{
	for (const auto &current : stencils.stencils_opcodes)
	{
		if (!current.stencils.empty())
		{
			c_file << std::format("\nconst Stencil {}_stencils[] = {{\n",
								  current.name);
			for (const auto &stencil : current.stencils)
			{
				std::string cfi_data_ptr = "NULL";
				std::string cfi_size_str = "0";
				auto it = stencils.eh_frame_cfis.find(stencil.section_symbol_name);
				if (it != stencils.eh_frame_cfis.end())
				{
					cfi_data_ptr =
						std::format("_{}_{}_cfi_data", current.name, stencil.name);
					cfi_size_str =
						std::format("sizeof(_{}_{}_cfi_data)", current.name, stencil.name);
				}

				c_file << std::format(
					"{{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"", stencil.body.size(),
					std::string(current.name) + '_' + stencil.name,
					stencil.holes.size(),
					std::string(current.name) + '_' + stencil.name, stencil.alignment,
					std::string(current.name) + '_' + stencil.name);

				c_file << ", " << cfi_data_ptr << ", " << cfi_size_str;
				c_file << "},\n";
			}
			c_file << "};\n";

			h_file << std::format("extern const Stencil {}_stencils[];\n",
								  current.name);
		}
	}
}

// Export individual Stencil structs for extra stencils.
//
// Generated variables:
//   const Stencil {NAME}  (e.g., _RCP_PROLOGUE)
static void export_extra_stencil_structs(std::ostream &c_file,
										 std::ostream &h_file,
										 const Stencils &stencils)
{
	for (const auto &current : stencils.stencils_extra)
	{
		std::string cfi_data_ptr = "NULL";
		std::string cfi_size_str = "0";
		auto it = stencils.eh_frame_cfis.find(current.section_symbol_name);
		if (it != stencils.eh_frame_cfis.end())
		{
			cfi_data_ptr = std::format("_{}_cfi_data", current.name);
			cfi_size_str = std::format("sizeof(_{}_cfi_data)", current.name);
		}

		c_file << std::format(
			"const Stencil {} = {{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"",
			current.name, current.body.size(), current.name, current.holes.size(),
			current.name, current.alignment, current.name);

		c_file << ", " << cfi_data_ptr << ", " << cfi_size_str;
		c_file << "};\n";

		h_file << std::format("extern const Stencil {};\n", current.name);
	}
}

// Export the array of not-inlined function stencils.
//
// Generated variables:
//   const Stencil notinlined_stencils[]
//   #define notinlined_count <count>
//   #define notinlined_size <total_size>
static void export_notinlined_stencil_array(std::ostream &c_file,
											std::ostream &h_file,
											const Stencils &stencils,
											size_t notinlined_total_size)
{
	c_file << "\nconst Stencil notinlined_stencils[] = {\n";
	for (const auto &current : stencils.functions_not_inlined)
	{
		std::string cfi_data_ptr = "NULL";
		std::string cfi_size_str = "0";
		auto it = stencils.eh_frame_cfis.find(current.section_symbol_name);
		if (it != stencils.eh_frame_cfis.end())
		{
			cfi_data_ptr = std::format("_{}_cfi_data", current.name);
			cfi_size_str = std::format("sizeof(_{}_cfi_data)", current.name);
		}

		c_file << std::format("{{{}, _{}_BODY, {}, _{}_HOLES, {}, \"{}\"",
							  current.body.size(), current.name,
							  current.holes.size(), current.name, current.alignment,
							  current.name);

		c_file << ", " << cfi_data_ptr << ", " << cfi_size_str;
		c_file << "},\n";
	}
	c_file << "};\n";
	h_file << "extern const Stencil notinlined_stencils[];\n";

	h_file << std::format("#define notinlined_count {}\n",
						  stencils.functions_not_inlined.size());
	h_file << std::format("#define notinlined_size {}\n", notinlined_total_size);
}

// Export the DWARF CIE (Common Information Entry) used for all FDEs.
//
// Generated variables:
//   uint8_t __CIE[]
static void export_cie(std::ostream &c_file, std::ostream &h_file,
					   const Stencils &stencils)
{
	if (!stencils.eh_frame_cie.empty())
	{
		DwarfCIE cie = dwarf_parse_cie(stencils.eh_frame_cie.data(),
									   stencils.eh_frame_cie.size());
		c_file << "//\n";
		c_file << std::format("// CIE: {}\n", stencils.eh_frame_cie.size());
		c_file << std::format("// - code alignment: {}\n", cie.code_align);
		c_file << std::format("// - data alignment: {}\n", cie.data_align);
		c_file << std::format("// - return address: {}\n",
							  dwarf_get_x86_64_reg_name(cie.ra_reg));
		c_file << "//\n";
	}
	c_file << "uint8_t __CIE[] = { ";
	print_byte_array(c_file, stencils.eh_frame_cie.data(),
					 stencils.eh_frame_cie.size());
	c_file << "};\n";

	h_file << "extern uint8_t __CIE[];\n";
}

// Export the read-only data section.
//
// Generated variables:
//   const uint8_t rodata[]
static void export_rodata(std::ostream &c_file, std::ostream &h_file,
						  const Stencils &stencils)
{
	c_file << "const uint8_t rodata[] = { ";
	print_byte_array(c_file, stencils.rodata.data(), stencils.rodata.size());
	c_file << "};\n";
	h_file << std::format("extern const uint8_t rodata[{}];\n",
						  stencils.rodata.size());
}

// Export the main stencils lookup table indexed by opcode.
//
// Generated variables:
//   const Stencil* stencils[NUM_OPCODES]
static void export_stencils_table(std::ostream &c_file, std::ostream &h_file,
								  const Stencils &stencils)
{
	c_file << std::format("\nconst Stencil* stencils[{}] = {{\n",
						  stencils.stencils_opcodes.size());
	for (const auto &current : stencils.stencils_opcodes)
	{
		if (!current.stencils.empty())
			c_file << std::format("{}_stencils,\n", current.name);
		else
			c_file << std::format("NULL,//{}\n", current.name);
	}
	c_file << "};\n";
	h_file << std::format("extern const Stencil* stencils[{}];\n",
						  stencils.stencils_opcodes.size());
}

// Export the stencils_all array containing pointers to all stencils.
// Returns the total count of stencils.
//
// Generated variables:
//   const Stencil* stencils_all[]
static size_t export_stencils_all(std::ostream &c_file, std::ostream &h_file,
								  const Stencils &stencils)
{
	size_t stencils_all_count = 0;
	c_file << "\nconst Stencil* stencils_all[] = {\n";

	for (const auto &current : stencils.stencils_opcodes)
	{
		for (size_t i = 0; i < current.stencils.size(); ++i)
		{
			c_file << std::format("&{}_stencils[{}],",
								  std::string(current.name), i);
			stencils_all_count++;
		}
	}

	for (const auto &current : stencils.stencils_extra)
	{
		c_file << std::format("&{},", current.name);
		stencils_all_count++;
	}

	for (size_t i = 0; i < stencils.functions_not_inlined.size(); ++i)
	{
		c_file << std::format("&notinlined_stencils[{}],", i);
		stencils_all_count++;
	}

	c_file << "\n};\n";
	h_file << std::format("extern const Stencil* stencils_all[{}];\n",
						  stencils_all_count);

	return stencils_all_count;
}

// Create stencils_data.c and stencils.h
//
// This is the main export function that coordinates generation of all stencil
// data. See the individual export_* functions for details on generated
// variables.
static void export_to_files(const fs::path &output_dir,
							const Stencils &stencils)
{
	if (!fs::is_directory(output_dir))
	{
		fs::create_directories(output_dir);
	}

	std::ofstream c_file(output_dir / "stencils_data.c");
	std::ofstream h_file(output_dir / "stencils.h");

	// Header file preamble
	h_file << "#ifndef STENCILS_H\n";
	h_file << "#define STENCILS_H\n";
	h_file << "#include \"rcp_common.h\"\n\n";
	h_file << "#include <stddef.h>\n\n";

	// C file preamble
	c_file << "#include \"stencils.h\"\n\n";
	c_file << "#define USE_RINTERNALS\n";
	c_file << "#define RSH\n";
	c_file << "#include <string.h>\n";
	c_file << "#include <R.h>\n";
	c_file << "#include <Rinternals.h>\n";
	c_file << "#include <Rmath.h>\n";
	c_file << "#define RSH_INLINE\n";
	c_file << "#include \"runtime_internals.h\"\n";
	c_file << "#define RSH_EXTERN_HELPERS\n";
	c_file << "#include <runtime.h>\n";
	c_file << "#undef NDEBUG\n"; // Ensure assert() is available if used in generated code
	c_file << "#include <assert.h>\n";
	c_file << "#undef RSH_EXTERN_HELPERS\n";
	// runtime.h redefines R_NaInt etc. as macros; undo so &R_NaInt remains an lvalue
	c_file << "#undef R_NaInt\n";
	c_file << "#undef R_NaN\n";
	c_file << "#undef R_PosInf\n";
	c_file << "#undef R_NegInf\n";
	c_file << "extern Rboolean RCP_STEPFOR_Fallback(Value *stack, BCell *cell, SEXP rho);\n\n";

	// Export stencil bodies (machine code + holes + FDEs)
	export_opcode_stencil_bodies(c_file, h_file, stencils);
	export_extra_stencil_bodies(c_file, stencils);
	size_t notinlined_total_size = export_notinlined_bodies(c_file, stencils);

	// Export Stencil struct arrays and individual structs
	export_opcode_stencil_arrays(c_file, h_file, stencils);
	export_extra_stencil_structs(c_file, h_file, stencils);
	export_notinlined_stencil_array(c_file, h_file, stencils,
									notinlined_total_size);

	// Export CIE and rodata
	export_cie(c_file, h_file, stencils);
	export_rodata(c_file, h_file, stencils);

	// Export lookup tables
	export_stencils_table(c_file, h_file, stencils);
	export_stencils_all(c_file, h_file, stencils);

	// Close header guard
	h_file << "#endif\n";
}

std::unordered_map<std::string, std::string> rsh_symbol_map;

static auto init_rsh_symbol_map()
{
	std::unordered_map<std::string, std::string> rsh_symbol_map;

#define X(a, b, ...)                                    \
	if (rsh_symbol_map.emplace(#b, #a).second == false) \
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
process_relocation(std::vector<uint8_t> &stencil_body, const arelent &rel)
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
			assert(strcmp(rel.howto->name, "R_X86_64_32") == 0 ||
				   strcmp(rel.howto->name, "R_X86_64_32S") == 0);
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
		}
		break;
		default:
		{
			throw std::runtime_error(std::format(
				"Unsupported relocation type: {}: {} (relocating: {}). Check "
				"compilation switches for memory model options.\n",
				rel.howto->type, rel.howto->name, (*rel.sym_ptr_ptr)->name));
		}
		break;
	}

	const char *descr_imm = NULL;
	if (starts_with((*rel.sym_ptr_ptr)->name, "_RCP_"))
	{
		const char *descr = &((*rel.sym_ptr_ptr)->name)[5];

		if ((descr_imm = remove_prefix(descr, "CRUNTIME0_")))
		{
			hole.kind = RELOC_RUNTIME_SYMBOL_DEREF;
			hole.val.symbol_name = strdup(descr_imm);
		}
		else if ((descr_imm = remove_prefix(descr, "CRUNTIME_OPS_")))
		{
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
		}
		else if ((descr_imm = remove_prefix(descr, "CONST_AT_IMM")))
		{
			hole.kind = RELOC_RCP_CONST_AT_IMM;
			hole.val.imm_pos = atoi(descr_imm);
		}
		else if ((descr_imm = remove_prefix(descr, "RAW_IMM")))
		{
			hole.kind = RELOC_RCP_RAW_IMM;
			hole.val.imm_pos = atoi(descr_imm);
		}
		else if ((descr_imm = remove_prefix(descr, "CONST_STR_AT_IMM")))
		{
			hole.kind = RELOC_RCP_CONST_STR_AT_IMM;
			hole.val.imm_pos = atoi(descr_imm);
		}
		else if ((descr_imm = remove_prefix(descr, "CONSTCELL_AT_IMM")))
		{
			hole.kind = RELOC_RCP_CONSTCELL_AT_IMM;
			hole.val.imm_pos = atoi(descr_imm);
		}
		else if ((descr_imm = remove_prefix(descr, "CONSTCELL_AT_LABEL_IMM")))
		{
			hole.kind = RELOC_RCP_CONSTCELL_AT_LABEL_IMM;
			hole.val.imm_pos = atoi(descr_imm);
		}
		else if (strcmp(descr, "EXEC_NEXT") == 0)
		{
			bool is_last_instruction =
				(rel.address - rel.addend) == stencil_body.size();
			bool is_relative_jmp = stencil_body[rel.address - 1] == 0xE9; /*JMP*/
			bool is_got_jmp = stencil_body[rel.address - 2] == 0xFF &&
							  stencil_body[rel.address - 1] == 0x25; /*GOT JMP*/
			bool is_got_call = stencil_body[rel.address - 2] == 0xFF &&
							   stencil_body[rel.address - 1] == 0x15; /*GOT CALL*/

			if (is_last_instruction)
			{
				if (is_relative_jmp)
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
			}
			else if (is_got_call) // Transform into relative JMP
			{
				stencil_body[rel.address - 2] = 0x90; // NOP
				stencil_body[rel.address - 1] = 0xE8; // CALL
			}
			hole.kind = RELOC_RCP_EXEC_NEXT;
		}
		else if ((descr_imm = remove_prefix(descr, "EXEC_IMM")))
		{
			int is_relative_jmp = stencil_body[rel.address - 1] == 0xE9; /*JMP*/
			int is_got_jmp = stencil_body[rel.address - 2] == 0xFF &&
							 stencil_body[rel.address - 1] == 0x25; /*GOT JMP*/
			if (is_got_jmp)											// Transform into relative JMP
			{
				stencil_body[rel.address - 2] = 0x90; // NOP
				stencil_body[rel.address - 1] = 0xE9; // JMP
			}
			hole.kind = RELOC_RCP_EXEC_IMM;
			hole.val.imm_pos = atoi(descr_imm);
		}
		else if (strcmp(descr, "CUSTOM_DATA") == 0)
		{
			hole.kind = RELOC_RCP_CUSTOM;
		}
		else if (strcmp(descr, "LOOPCNTXT") == 0)
		{
			hole.kind = RELOC_RCP_LOOPCNTXT;
		}
		else if (strcmp(descr, "EXECUTABLE") == 0)
		{
			hole.kind = RELOC_RCP_EXECUTABLE_START;
		}
		else
		{
			switch (rel.howto->type)
			{
				case X86_64_RELOC_KIND::R_X86_64_GOTPCRELX:
				case X86_64_RELOC_KIND::R_X86_64_GOTPCREL:
					hole.kind = RELOC_RUNTIME_SYMBOL_GOT;
					break;
				default:
					std::cerr << std::format("Unsupported internal relocation symbol: {}\n",
									 (*rel.sym_ptr_ptr)->name);

					hole.kind = RELOC_RUNTIME_SYMBOL;
					break;
			}

			hole.val.symbol_name = strdup((*rel.sym_ptr_ptr)->name);
		}
	}
	else if ((descr_imm = remove_prefix((*rel.sym_ptr_ptr)->name, ".text.")))
	{
		hole.kind = RELOC_NOTINLINED_FUNCTION;
		hole.val.symbol_name = strdup(descr_imm);
		for (size_t i = 0; hole.val.symbol_name[i] != '\0'; i++)
			if (hole.val.symbol_name[i] == '.')
				hole.val.symbol_name[i] = '_';
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

	// std::cerr << std::format("  offset {:#X}, addend {}, symbol {}, type {}\n",
	// rel.address, rel.addend, (*rel.sym_ptr_ptr)->name, rel.howto->type);

	return hole;
}

static std::vector<Hole> process_relocations(std::vector<uint8_t> &stencil_body,
											 long reloc_count,
											 arelent **relocs)
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

static StencilExport &add_stencil(Stencils &stencils, std::string_view symbol,
								  std::string section_symbol_name)
{
	if (symbol.starts_with("_RCP_"))
	{
		size_t end = symbol.find("_OP");
		if (end != std::string_view::npos)
		{
			std::string_view opcode_part = symbol.substr(5, end + 3 - 5);

			auto opcode_it = opcode_idx.find(opcode_part);
			if (opcode_it == opcode_idx.end())
				throw std::runtime_error(
					std::format("Invalid opcode stencil name: {}\n", opcode_part));
			uint8_t opcode = opcode_it->second;
			const char *opcode_name = opcode_it->first.data();

			std::string stencil_suffix;
			if (symbol.size() >= end + 4)
			{
				stencil_suffix = (std::string)(symbol.substr(end + 4));
				if (!stencil_suffix.empty())
				{
					bool is_all_digits = true;
					for (char c : stencil_suffix)
					{
						if (!isdigit(c))
						{
							is_all_digits = false;
							break;
						}
					}
					if (is_all_digits)
					{
						if (stencil_suffix.size() == 1)
							stencil_suffix = "0" + stencil_suffix;
					}
				}
			}

			return stencils.stencils_opcodes.at(opcode).stencils.emplace_back(
				std::move(stencil_suffix), std::move(section_symbol_name));
		}
		else
		{
			return stencils.stencils_extra.emplace_back(
				std::string(symbol), std::move(section_symbol_name));
		}
	}
	else
	{
		std::string res(symbol);
		for (size_t i = 0; i < res.size(); i++)
			if (res[i] == '.')
				res[i] = '_';

		return stencils.functions_not_inlined.emplace_back(
			std::move(res), std::move(section_symbol_name));
	}
}

static void process_section(bfd &abfd, asection &section, Stencils &stencils)
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

	if (section.flags & SEC_CODE)
	{
		std::vector<Hole> holes = process_relocations(body, reloc_count, relocs);

		StencilExport &stencil =
			add_stencil(stencils, std::string_view(symbol).substr(6),
						std::string(symbol)); // Remove .text prefix

		stencil.body = std::move(body);
		stencil.holes = std::move(holes);
		stencil.alignment = 1 << section.alignment_power;
	}
	else if (strcmp(symbol, ".eh_frame") == 0)
	{
		// Parse .eh_frame section: extract CIE (full) and per-FDE CFI instruction
		// bytes only (stripping the FDE header, initial_location, address_range,
		// and augmentation data).
		DwarfCIE cie = {0};
		size_t offset = 0;
		while (offset < body.size())
		{
			if (offset + 4 > body.size())
				break;
			uint64_t length = bfd_get_32(&abfd, &body[offset]);
			size_t len_field_size = 4;
			if (length == 0xffffffff)
			{
				if (offset + 12 > body.size())
					break;
				length = bfd_get_64(&abfd, &body[offset + 4]);
				len_field_size = 12;
			}

			if (length == 0)
				break;

			size_t entry_end = offset + len_field_size + length;
			if (entry_end > body.size())
				break;

			// In .eh_frame, CIE has id == 0; FDE has non-zero CIE pointer
			uint32_t id = bfd_get_32(&abfd, &body[offset + len_field_size]);
			bool is_cie = (id == 0);

			if (is_cie)
			{
				if (stencils.eh_frame_cie.empty())
				{
					stencils.eh_frame_cie.assign(body.begin() + offset,
												 body.begin() + entry_end);
					cie = dwarf_parse_cie(stencils.eh_frame_cie.data(),
										  stencils.eh_frame_cie.size());
					if (!cie.valid)
						std::cerr << "Warning: failed to parse .eh_frame CIE\n";
				}
			}
			else
			{
				// FDE: find the stencil it belongs to via relocation on
				// initial_location field (at offset len_field_size + 4)
				size_t loc_offset = offset + len_field_size + 4;
				for (long i = 0; i < reloc_count; i++)
				{
					if (relocs[i]->address == loc_offset)
					{
						std::string key = (*relocs[i]->sym_ptr_ptr)->name;

						// Compute where CFI instructions start within the FDE:
						//   len_field_size bytes: length field
						//   4 bytes: CIE pointer
						//   ptr_size bytes: initial_location
						//   ptr_size bytes: address_range
						//   [if 'z': ULEB128 augmentation data length + data]
						//   remaining: CFI instructions
						int ptr_size = cie.valid
										   ? dwarf_encoded_ptr_size(cie.ptr_encoding)
										   : 8;
						if (ptr_size <= 0)
							ptr_size = 8;

						const uint8_t *fde_start =
							&body[offset + len_field_size + 4];
						const uint8_t *fde_end = &body[entry_end];
						const uint8_t *cfi_start =
							fde_start + ptr_size + ptr_size;

						if (cie.has_z && cfi_start < fde_end)
						{
							// Skip augmentation data length + data
							uint64_t aug_data_len =
								dwarf_decode_uleb128(&cfi_start);
							cfi_start += aug_data_len;
						}

						if (cfi_start <= fde_end)
						{
							stencils.eh_frame_cfis[key].assign(cfi_start,
															   fde_end);
						}
						break;
					}
				}
			}
			offset = entry_end;
		}
	}
	else if ((section.flags & SEC_READONLY) && (section.flags & BSF_KEEP))
	{
		if (strcmp(symbol, ".rodata") == 0)
		{
			stencils.rodata = std::move(body);

			if (reloc_count > 0)
				std::cerr << std::format("There are some relocations in the section of "
										 "{}, this is not supported!\n",
										 symbol);
		}
		else
			std::cerr << std::format(
				"Section/Function {} could not be matched to a valid R opcode\n",
				symbol);
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
	catch (const std::exception &e)
	{
		std::cerr << "Error processing section " << section->symbol->name << ": "
				  << e.what() << '\n';
	}
}

static void free_stencil(const StencilExport &stencil)
{
	for (const auto &hole : stencil.holes)
	{
		if (hole.kind == RELOC_RUNTIME_SYMBOL ||
			hole.kind == RELOC_RUNTIME_SYMBOL_GOT ||
			hole.kind == RELOC_RUNTIME_SYMBOL_DEREF ||
			hole.kind == RELOC_RUNTIME_CALL ||
			hole.kind == RELOC_NOTINLINED_FUNCTION)
			free(hole.val.symbol_name);
	}
}

static void cleanup(Stencils &stencils)
{
	for (const auto &current : stencils.stencils_opcodes)
		for (const auto &current : current.stencils)
			free_stencil(current);

	for (const auto &current : stencils.stencils_extra)
		free_stencil(current);
}

static void analyze_object_file(const char *filename, Stencils &stencils)
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

static void sort_stencil_set(StencilExportSet &stencil_set)
{
	std::sort(stencil_set.stencils.begin(), stencil_set.stencils.end(),
			  [](const StencilExport &a, const StencilExport &b)
			  {
				  return a.name < b.name;
			  });
}

static void print_sizes(const Stencils &stencils)
{
	size_t total_size = 0;
	size_t count = 0;
	for (const auto &current : stencils.stencils_opcodes)
	{
		size_t size_specific = 0;
		for (const auto &current : current.stencils)
		{
			size_specific += current.body.size();
		}

		if (!current.stencils.empty())
		{
			total_size += size_specific / current.stencils.size();
			count++;
		}
	}

	std::cerr << std::format("Stencils: {}\n", count);
	std::cerr << std::format("Total size of stencils: {} bytes\n", total_size);
	std::cerr << std::format("Average size of stencils: {:.1f} bytes\n",
							 (double)(total_size) / count);

	size_t dwarf_size = stencils.eh_frame_cie.size();
	for (auto &[_, cfi] : stencils.eh_frame_cfis)
	{
		dwarf_size += cfi.size();
	}

	std::cerr << std::format("Total size of dwarf data: {} bytes\n", dwarf_size);
	std::cerr << std::format("Average size of dwarf data: {:.1f} bytes\n",
							 (double)(dwarf_size) / count);
}

void count_hole_symbols(const Stencils &stencils, uint8_t stencil_kind,
						std::ostream &output)
{
	// Step 1: Count occurrences
	std::unordered_map<std::string, size_t> symbol_count;
	for (const auto &stencil_set : stencils.stencils_opcodes)
	{
		for (const auto &stencil : stencil_set.stencils)
		{
			for (const auto &hole : stencil.holes)
			{
				if (hole.kind == stencil_kind)
				{
					symbol_count[hole.val.symbol_name]++;
				}
			}
		}
	}
	for (const auto &stencil : stencils.stencils_extra)
	{
		for (const auto &hole : stencil.holes)
		{
			if (hole.kind == stencil_kind)
			{
				symbol_count[hole.val.symbol_name]++;
			}
		}
	}

	// Step 2: Move to vector for sorting
	std::vector<std::pair<std::string, size_t>> sorted_symbols(
		symbol_count.begin(), symbol_count.end());

	// Step 3: Sort by count (descending)
	std::sort(sorted_symbols.begin(), sorted_symbols.end(),
			  [](const auto &a, const auto &b)
			  {
				  return a.second > b.second; // Sort by count, highest first
			  });

	// Print results
	for (const auto &[symbol, count] : sorted_symbols)
	{
		std::cout << "'" << symbol << "': " << count << '\n';
	}
}

int main(int argc, char **argv)
{
	if (argc < 3)
	{
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
