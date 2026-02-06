#include "dwarf.h"

#include <stdio.h>
#include <string.h>

size_t dwarf_encode_uleb128(uint64_t val, uint8_t *out)
{
	size_t count = 0;
	do
	{
		uint8_t byte = val & 0x7f;
		val >>= 7;
		if (val != 0)
			byte |= 0x80;
		out[count++] = byte;
	} while (val != 0);
	return count;
}

size_t dwarf_encode_sleb128(int64_t val, uint8_t *out)
{
	size_t count = 0;
	int more = 1;
	while (more)
	{
		uint8_t byte = val & 0x7f;
		val >>= 7;
		// sign extend if neg
		int sign = (byte & 0x40);
		if ((val == 0 && !sign) || (val == -1 && sign))
		{
			more = 0;
		}
		else
		{
			byte |= 0x80;
		}
		out[count++] = byte;
	}
	return count;
}

uint64_t dwarf_decode_uleb128(const uint8_t **data)
{
	uint64_t result = 0;
	int shift = 0;
	while (1)
	{
		uint8_t byte = **data;
		(*data)++;
		result |= (uint64_t)(byte & 0x7f) << shift;
		if ((byte & 0x80) == 0)
			break;
		shift += 7;
	}
	return result;
}

int64_t dwarf_decode_sleb128(const uint8_t **data)
{
	int64_t result = 0;
	int shift = 0;
	uint8_t byte;
	do
	{
		byte = **data;
		(*data)++;
		result |= (int64_t)(byte & 0x7f) << shift;
		shift += 7;
	} while (byte & 0x80);

	// Sign extend if negative and sign bit of last byte is set
	if ((shift < 64) && (byte & 0x40))
		result |= -((int64_t)1 << shift);

	return result;
}

uint16_t dwarf_decode_le16(const uint8_t *p)
{
	return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

uint32_t dwarf_decode_le32(const uint8_t *p)
{
	return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) |
		   ((uint32_t)p[3] << 24);
}

uint64_t dwarf_decode_le64(const uint8_t *p)
{
	uint64_t result = 0;
	for (int i = 0; i < 8; i++)
		result |= (uint64_t)p[i] << (i * 8);
	return result;
}

int dwarf_decode_cfi(const uint8_t **p, const uint8_t *end, DwarfCFI *out)
{
	if (*p >= end)
		return 0;

	const uint8_t *start = *p;
	uint8_t byte = *(*p)++;

	out->operand1 = 0;
	out->operand2 = 0;

	uint8_t high = byte & 0xC0;

	if (high == 0x40)
	{
		// DW_CFA_advance_loc: delta in low 6 bits
		out->opcode = DW_CFA_advance_loc;
		out->operand1 = byte & 0x3F;
	}
	else if (high == 0x80)
	{
		// DW_CFA_offset: register in low 6 bits, ULEB128 offset follows
		out->opcode = DW_CFA_offset;
		out->operand1 = byte & 0x3F;
		out->operand2 = (int64_t)dwarf_decode_uleb128(p);
	}
	else if (high == 0xC0)
	{
		// DW_CFA_restore: register in low 6 bits
		out->opcode = DW_CFA_restore;
		out->operand1 = byte & 0x3F;
	}
	else
	{
		// Standard opcodes (high bits = 0x00)
		out->opcode = byte;
		switch (byte)
		{
			case DW_CFA_nop:
			case DW_CFA_remember_state:
			case DW_CFA_restore_state:
				// No operands
				break;

			case DW_CFA_set_loc:
				// 8-byte address (x86-64)
				if (*p + 8 <= end)
				{
					memcpy(&out->operand1, *p, 8);
					*p += 8;
				}
				break;

			case DW_CFA_advance_loc1:
				if (*p < end)
					out->operand1 = *(*p)++;
				break;

			case DW_CFA_advance_loc2:
			{
				uint16_t v;
				if (*p + 2 <= end)
				{
					memcpy(&v, *p, 2);
					out->operand1 = v;
					*p += 2;
				}
				break;
			}

			case DW_CFA_advance_loc4:
			{
				uint32_t v;
				if (*p + 4 <= end)
				{
					memcpy(&v, *p, 4);
					out->operand1 = v;
					*p += 4;
				}
				break;
			}

			case DW_CFA_def_cfa_offset:
				out->operand1 = dwarf_decode_uleb128(p);
				break;

			case DW_CFA_def_cfa_register:
			case DW_CFA_same_value:
			case DW_CFA_undefined:
			case DW_CFA_restore_extended:
				// Single ULEB128 register operand
				out->operand1 = dwarf_decode_uleb128(p);
				break;

			case DW_CFA_offset_extended:
			case DW_CFA_register:
			case DW_CFA_val_offset:
				// ULEB128 reg, ULEB128 value
				out->operand1 = dwarf_decode_uleb128(p);
				out->operand2 = (int64_t)dwarf_decode_uleb128(p);
				break;

			case DW_CFA_def_cfa:
				// ULEB128 reg, ULEB128 offset
				out->operand1 = dwarf_decode_uleb128(p);
				out->operand2 = (int64_t)dwarf_decode_uleb128(p);
				break;

			case DW_CFA_def_cfa_offset_sf:
				// Single SLEB128 offset
				out->operand2 = dwarf_decode_sleb128(p);
				break;

			case DW_CFA_def_cfa_sf:
			case DW_CFA_offset_extended_sf:
			case DW_CFA_val_offset_sf:
				// ULEB128 reg, SLEB128 value
				out->operand1 = dwarf_decode_uleb128(p);
				out->operand2 = dwarf_decode_sleb128(p);
				break;

			case DW_CFA_def_cfa_expression:
			{
				// ULEB128 block length, then skip that many bytes
				uint64_t len = dwarf_decode_uleb128(p);
				out->operand1 = len;
				*p += len;
				break;
			}

			case DW_CFA_expression:
			case DW_CFA_val_expression:
			{
				// ULEB128 reg, ULEB128 block length, then skip block
				out->operand1 = dwarf_decode_uleb128(p);
				uint64_t len = dwarf_decode_uleb128(p);
				out->operand2 = (int64_t)len;
				*p += len;
				break;
			}

			default:
				// Unknown opcode -- treated as zero-operand
				break;
		}
	}

	out->raw = start;
	out->raw_size = (size_t)(*p - start);
	return 1;
}

// ---------------------------------------------------------------------------
// CIE Parsing
// ---------------------------------------------------------------------------

DwarfCIE dwarf_parse_cie(const uint8_t *data, size_t len)
{
	DwarfCIE result = {0};
	result.code_align = 1;
	result.data_align = -8;
	result.ra_reg = DWARF_REG_RA;
	result.valid = 0;

	if (len < 4)
		return result;

	const uint8_t *p = data;
	const uint8_t *end = data + len;

	// Read length field (32-bit or 64-bit extended format)
	uint64_t length = dwarf_decode_le32(p);
	size_t header_len = 4;
	if (length == 0xffffffff)
	{
		if (len < 12)
			return result;
		length = dwarf_decode_le64(p + 4);
		header_len = 12;
	}

	// Skip past length and CIE ID
	p += (header_len == 4 ? 8 : 20);
	if (p >= end)
		return result;

	// Version byte
	uint8_t version = *p++;

	// Augmentation string - we only support empty augmentation
	if (p < end && *p != 0)
	{
		// Non-empty augmentation string not supported
		return result;
	}
	p++; // Skip null terminator

	if (p >= end)
		return result;

	// Code alignment factor (ULEB128)
	result.code_align = dwarf_decode_uleb128(&p);

	// Data alignment factor (SLEB128)
	result.data_align = dwarf_decode_sleb128(&p);

	// Return address register
	if (version == 1)
	{
		// DWARF 1: single byte
		result.ra_reg = *p++;
	}
	else
	{
		// DWARF 2+: ULEB128
		result.ra_reg = dwarf_decode_uleb128(&p);
	}

	// Remaining bytes are initial instructions
	if (p < end)
	{
		result.initial_insts = p;
		result.initial_insts_len = (size_t)(end - p);
	}
	else
	{
		result.initial_insts = NULL;
		result.initial_insts_len = 0;
	}

	result.valid = 1;
	return result;
}

// Static register name table for x86-64
static const char *const x86_64_reg_names[] = {
	"rax", "rdx", "rcx", "rbx", "rsi", "rdi", "rbp", "rsp",
	"r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
	"ra", // Return address
	"r?", // Placeholder for unknown registers
};

const char *dwarf_get_x86_64_reg_name(uint64_t reg)
{
	static uint64_t N = sizeof(x86_64_reg_names) / sizeof(x86_64_reg_names[0]);
	if (reg < N - 1)
	{
		return x86_64_reg_names[reg];
	}
	else
	{
		return x86_64_reg_names[N - 1];
	}
}

void dwarf_cfi_state_init(DwarfCFIState *state)
{
	state->cfa_reg = DWARF_REG_RSP;
	state->cfa_offset = 8;
	state->cfa_is_expr = 0;

	// Initialize all rules to undefined
	for (int i = 0; i < DWARF_MAX_REGS; i++)
	{
		state->rules[i].type = DWARF_RULE_UNDEFINED;
		state->rules[i].offset = 0;
		state->rules[i].reg = 0;
	}

	// Return address is typically saved at CFA-8 on x86-64
	state->rules[DWARF_REG_RA].type = DWARF_RULE_OFFSET;
	state->rules[DWARF_REG_RA].offset = -8;
}

// Maximum state stack depth for remember/restore
#define DWARF_STATE_STACK_MAX 16

void dwarf_execute_cfi(const uint8_t **p, const uint8_t *end,
					   DwarfCFIState *state, const DwarfCIE *cie,
					   int64_t *max_cfa_offset)
{
	// State stack for remember/restore
	DwarfCFIState state_stack[DWARF_STATE_STACK_MAX];
	int stack_depth = 0;

	if (max_cfa_offset)
		*max_cfa_offset = (*max_cfa_offset > state->cfa_offset) ? *max_cfa_offset
																: state->cfa_offset;

	DwarfCFI inst;
	while (dwarf_decode_cfi(p, end, &inst))
	{
		switch (inst.opcode)
		{
			case DW_CFA_advance_loc:
			case DW_CFA_advance_loc1:
			case DW_CFA_advance_loc2:
			case DW_CFA_advance_loc4:
				// Location advance - no state change, just PC advancement
				break;

			case DW_CFA_set_loc:
				// Absolute location - no state change
				break;

			case DW_CFA_offset:
			case DW_CFA_offset_extended:
			case DW_CFA_offset_extended_sf:
				// Register saved at CFA + factored_offset * data_align
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_OFFSET;
					state->rules[inst.operand1].offset = inst.operand2 * cie->data_align;
				}
				break;

			case DW_CFA_val_offset:
			case DW_CFA_val_offset_sf:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_VAL_OFFSET;
					state->rules[inst.operand1].offset = inst.operand2 * cie->data_align;
				}
				break;

			case DW_CFA_restore:
			case DW_CFA_restore_extended:
				// Restore to CIE initial state - simplified to UNDEFINED
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_UNDEFINED;
				}
				break;

			case DW_CFA_def_cfa:
				state->cfa_reg = inst.operand1;
				state->cfa_offset = inst.operand2;
				state->cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_sf:
				state->cfa_reg = inst.operand1;
				state->cfa_offset = inst.operand2 * cie->data_align;
				state->cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_register:
				state->cfa_reg = inst.operand1;
				state->cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_offset:
				state->cfa_offset = (int64_t)inst.operand1;
				state->cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_offset_sf:
				state->cfa_offset = inst.operand2 * cie->data_align;
				state->cfa_is_expr = 0;
				break;

			case DW_CFA_def_cfa_expression:
				state->cfa_is_expr = 1;
				break;

			case DW_CFA_same_value:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_SAME_VALUE;
				}
				break;

			case DW_CFA_undefined:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_UNDEFINED;
				}
				break;

			case DW_CFA_register:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_REGISTER;
					state->rules[inst.operand1].reg = (uint64_t)inst.operand2;
				}
				break;

			case DW_CFA_expression:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_EXPRESSION;
				}
				break;

			case DW_CFA_val_expression:
				if (inst.operand1 < DWARF_MAX_REGS)
				{
					state->rules[inst.operand1].type = DWARF_RULE_VAL_EXPRESSION;
				}
				break;

			case DW_CFA_remember_state:
				if (stack_depth < DWARF_STATE_STACK_MAX)
				{
					state_stack[stack_depth++] = *state;
				}
				break;

			case DW_CFA_restore_state:
				if (stack_depth > 0)
				{
					*state = state_stack[--stack_depth];
				}
				break;

			case DW_CFA_nop:
				break;

			default:
				// Unknown opcode - skip
				break;
		}

		// Track maximum CFA offset
		if (max_cfa_offset && !state->cfa_is_expr)
		{
			if (state->cfa_offset > *max_cfa_offset)
			{
				*max_cfa_offset = state->cfa_offset;
			}
		}
	}
}

// ---------------------------------------------------------------------------
// CFA Offset Calculation
// ---------------------------------------------------------------------------

int dwarf_get_max_cfa_offset(const uint8_t *cie_data, size_t cie_len,
							 const uint8_t *fde_data, size_t fde_len,
							 int64_t *out_offset)
{
	if (fde_len < 8)
		return -1;

	// Parse CIE
	DwarfCIE cie = dwarf_parse_cie(cie_data, cie_len);
	if (!cie.valid)
		return -1;

	// Parse FDE header
	const uint8_t *p = fde_data;
	const uint8_t *end = fde_data + fde_len;

	// Read length field
	uint64_t length = dwarf_decode_le32(p);
	size_t header_len = 4;
	if (length == 0xffffffff)
	{
		length = dwarf_decode_le64(p + 4);
		header_len = 12;
	}

	// Skip past length and CIE pointer
	p += (header_len == 4 ? 8 : 20);

	// Skip PC begin and range (8 bytes each on x86-64)
	p += 16;

	// Initialize CFI state
	DwarfCFIState state;
	dwarf_cfi_state_init(&state);

	int64_t max_offset = 8; // Minimum is return address

	// Execute CIE initial instructions
	if (cie.initial_insts && cie.initial_insts_len > 0)
	{
		const uint8_t *ip = cie.initial_insts;
		const uint8_t *ip_end = cie.initial_insts + cie.initial_insts_len;
		dwarf_execute_cfi(&ip, ip_end, &state, &cie, &max_offset);
	}

	// Execute FDE instructions
	dwarf_execute_cfi(&p, end, &state, &cie, &max_offset);

	*out_offset = max_offset;
	return 0;
}
