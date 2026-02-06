#ifndef DWARF_H
#define DWARF_H

#include <stddef.h>
#include <stdint.h>

// DWARF Debugging Information Format -- Definitions and Helpers
//
// This header provides constants, types, and helper functions for working with
// DWARF debug information. It is used by two consumers in this project:
//
// 1. Build-time (extract_stencils.cpp): Parses .debug_frame sections from
//    compiled stencil object files, extracts raw FDE bytes, computes CFA
//    offsets, and emits decoded CFI tables as comments in generated C code.
//
// 2. Runtime (gdb_jit.c): Constructs an in-memory ELF image with DWARF
//    debug info for JIT-compiled code. Copies CFI instructions from stencil
//    FDEs into a new .debug_frame section, adjusting CFA offsets, and registers
//    the result with GDB via the JIT interface.
//
// Both consumers share the dwarf_decode_cfi() function for iterating over CFI
// instruction streams, avoiding duplicated opcode-parsing logic.
//
//
// Introduction to DWARF
//
// DWARF (Debugging With Attributed Record Formats) is a standardized format for
// representing debugging information. It allows debuggers (like GDB) to map
// machine code back to source code, inspect variables, and unwind the stack.
//
//
// Glossary of Abbreviations
//
// - CFA -- Canonical Frame Address: a reference address for a stack frame,
//   typically the value of RSP immediately before the CALL instruction.
// - CFI -- Call Frame Information: DWARF bytecode that describes how to
//   compute the CFA and locate saved registers at each instruction.
// - CIE -- Common Information Entry: shared header in .debug_frame that
//   defines alignment factors, return address register, and initial CFI state.
// - FDE -- Frame Description Entry: per-function record in .debug_frame
//   containing CFI instructions specific to that function's code range.
// - DIE -- Debugging Information Entry: a node in the .debug_info tree
//   describing a source-level entity (function, variable, type, etc.).
// - LEB128 -- Little Endian Base 128: variable-length integer encoding used
//   throughout DWARF to save space.
// - ULEB128 -- Unsigned LEB128 encoding (see below).
// - SLEB128 -- Signed LEB128 encoding (see below).
//
//
// ELF Sections
//
// DWARF information is organized into sections in an ELF file:
// - .debug_info:   Core debug info tree (DIEs describing types, variables,
// functions).
// - .debug_abbrev: Abbreviation tables -- schemas that compress .debug_info.
// - .debug_line:   Line number table (maps PC addresses to source file lines).
// - .debug_frame:  Call Frame Information (CFI) for stack unwinding.
// - .debug_str:    Shared string table for long names.
//
//
// LEB128 Encoding
//
// DWARF uses LEB128 (Little Endian Base 128) to encode integers compactly.
// Each byte contributes 7 data bits; bit 7 is a continuation flag:
//
//     Byte:  [1 ddddddd] [1 ddddddd] ... [0 ddddddd]
//             ^cont=1      ^cont=1          ^cont=0 (last byte)
//
// - Unsigned LEB128 (ULEB128): Bits are concatenated least-significant first.
//   Example: 624485 (0x98765) encodes as 0xE5 0x8E 0x26 (3 bytes).
//
// - Signed LEB128 (SLEB128): Same encoding with sign extension. If the high
//   bit of the last byte's 7 data bits is set, the value is negative.
//   Example: -123456 encodes as 0xC0 0xBB 0x78 (3 bytes).
//
// A 64-bit value requires at most 10 LEB128 bytes.
//
//
// Call Frame Information (CFI) and Stack Unwinding
//
// CFI is critical for the debugger to "walk the stack" (backtrace) and restore
// register values in previous frames. It defines how to calculate the
// Canonical Frame Address (CFA) and the location of saved registers.
//
// The .debug_frame Structure
//
// The .debug_frame section contains:
//
// 1. A CIE (Common Information Entry) shared by all FDEs:
//    - code_alignment_factor: Multiplier for advance_loc operands (usually 1).
//    - data_alignment_factor: Multiplier for offset operands (usually -8 on
//    x86-64).
//    - return_address_register: DWARF register number for RA (16 on x86-64).
//    - Initial CFI instructions: establish the default register rules.
//
// 2. One FDE (Frame Description Entry) per function:
//    - initial_location: Start address of the function.
//    - address_range: Size of the function's code.
//    - CFI instructions: describe frame changes relative to the CIE defaults.
//
// CFI Instruction Encoding
//
// CFI instructions are a compact bytecode. The first byte determines the opcode
// and encoding scheme based on its high 2 bits:
//
// Compact opcodes (operand packed into the first byte):
//
// | High bits | Opcode              | Low 6 bits | Additional bytes       |
// |-----------|---------------------|------------|------------------------|
// | 01        | DW_CFA_advance_loc  | delta      | (none)                 |
// | 10        | DW_CFA_offset       | register   | ULEB128 offset         |
// | 11        | DW_CFA_restore      | register   | (none)                 |
//
// Standard opcodes (high bits = 00, full opcode in low 6 bits):
//
// | Opcode (hex) | Name                    | Operands                       |
// |--------------|-------------------------|--------------------------------|
// | 0x00         | DW_CFA_nop              | (none)                         |
// | 0x01         | DW_CFA_set_loc          | address (target-sized)         |
// | 0x02         | DW_CFA_advance_loc1     | 1-byte delta                   |
// | 0x03         | DW_CFA_advance_loc2     | 2-byte LE delta                |
// | 0x04         | DW_CFA_advance_loc4     | 4-byte LE delta                |
// | 0x05         | DW_CFA_offset_extended  | ULEB128 reg, ULEB128 offset    |
// | 0x06         | DW_CFA_restore_extended | ULEB128 reg                    |
// | 0x07         | DW_CFA_undefined        | ULEB128 reg                    |
// | 0x08         | DW_CFA_same_value       | ULEB128 reg                    |
// | 0x09         | DW_CFA_register         | ULEB128 reg, ULEB128 reg       |
// | 0x0a         | DW_CFA_remember_state   | (none)                         |
// | 0x0b         | DW_CFA_restore_state    | (none)                         |
// | 0x0c         | DW_CFA_def_cfa          | ULEB128 reg, ULEB128 offset    |
// | 0x0d         | DW_CFA_def_cfa_register | ULEB128 reg                    |
// | 0x0e         | DW_CFA_def_cfa_offset   | ULEB128 offset                 |
// | 0x0f         | DW_CFA_def_cfa_expression | ULEB128 len, len bytes       |
// | 0x10         | DW_CFA_expression       | ULEB128 reg, ULEB128 len, bytes|
// | 0x11         | DW_CFA_offset_extended_sf | ULEB128 reg, SLEB128 offset  |
// | 0x12         | DW_CFA_def_cfa_sf       | ULEB128 reg, SLEB128 offset    |
// | 0x13         | DW_CFA_def_cfa_offset_sf| SLEB128 offset                 |
// | 0x14         | DW_CFA_val_offset       | ULEB128 reg, ULEB128 offset    |
// | 0x15         | DW_CFA_val_offset_sf    | ULEB128 reg, SLEB128 offset    |
// | 0x16         | DW_CFA_val_expression   | ULEB128 reg, ULEB128 len, bytes|
//
// The CFI Virtual Machine
//
// The debugger maintains state while executing CFI instructions:
// - CFA rule: Typically register + offset (e.g., RSP + 8).
// - Register rules: For each callee-saved register, how to restore its
//   value: undefined, same_value, at CFA+offset, or expression.
// - State stack: DW_CFA_remember_state pushes the current state;
//   DW_CFA_restore_state pops it. Used around conditional branches.
//
// Running Example: f -> g -> h
//
// Consider a function f calling g, which calls h.
//
// 1. Initial State (in f):
//    - RSP points to the top of the stack.
//    - RIP is executing instructions in f.
//
// 2. Call g: f executes CALL g.
//    - The return address (address of next instruction in f) is pushed onto the
//    stack.
//    - RSP decrements by 8.
//    - Control transfers to g.
//
// 3. Prologue of g:
//    - PUSH RBP: Save caller's frame pointer. RSP decrements by 8.
//    - MOV RBP, RSP: Set new frame pointer.
//    - SUB RSP, 16: Allocate local variables.
//
// CFA Calculation:
// The CFA is a reference address for the frame, typically the value of RSP
// immediately before the function call.
//
// - Upon entry to g: CFA = RSP + 8 (accounting for the pushed Return Address).
// - After PUSH RBP: CFA = RSP + 16 (RA + RBP).
// - After MOV RBP, RSP: CFA = RBP + 16.
// - After SUB RSP, 16: CFA remains RBP + 16 (stable despite RSP changing).
//
// The DWARF .debug_frame section contains FDEs (Frame Description Entries)
// for each function, composed of instructions like:
// - DW_CFA_def_cfa_offset(16): Define CFA as Register + 16.
// - DW_CFA_offset(RBP, -16): Save RBP at CFA - 16.
//
// When GDB stops in h, it uses h's FDE to restore g's registers (including
// RSP and RIP). Then it uses g's FDE to restore f's registers, and so on.
//
//
// Inspecting DWARF
//
// You can inspect DWARF information in object files using command-line tools:
//
// - Dump all debug info:
//   readelf --debug-dump=all <file>
//
// - Dump CFI (Stack Unwinding):
//   readelf --debug-dump=frames <file>
//
// - Dump Line Table:
//   readelf --debug-dump=line <file>
//   or dwarfdump -l <file>
//
// - Using GDB:
//   info line *<address>: Show source line for address.
//   maintenance print frame-id: Show CFA of current frame.
//
//
// References
//
// - DWARF Standard: http://dwarfstd.org/

#ifdef __cplusplus
extern "C"
{
#endif

// Tag Encodings (identify the kind of a DIE)
#define DW_TAG_compile_unit		0x11
#define DW_TAG_formal_parameter 0x05
#define DW_TAG_pointer_type		0x0F
#define DW_TAG_subprogram		0x2e
#define DW_TAG_structure_type	0x13

// Attribute Encodings (properties of a DIE)
#define DW_AT_location	  0x02
#define DW_AT_name		  0x03
#define DW_AT_byte_size	  0x0B
#define DW_AT_stmt_list	  0x10
#define DW_AT_low_pc	  0x11
#define DW_AT_high_pc	  0x12
#define DW_AT_type		  0x49
#define DW_AT_declaration 0x3c

// Attribute Form Encodings (how an attribute value is stored)
#define DW_FORM_addr		 0x01
#define DW_FORM_data4		 0x06
#define DW_FORM_string		 0x08
#define DW_FORM_block1		 0x0A
#define DW_FORM_data1		 0x0B
#define DW_FORM_ref4		 0x13
#define DW_FORM_flag_present 0x19

// DWARF Expression Operations (location descriptions)
#define DW_OP_reg4 0x54 // RSI
#define DW_OP_reg5 0x55 // RDI

// Line Number Standard Opcodes
#define DW_LNS_copy			1
#define DW_LNS_advance_pc	2
#define DW_LNS_advance_line 3
#define DW_LNE_end_sequence 1
#define DW_LNE_set_address	2

// Call Frame Instruction Opcodes -- standard (high 2 bits = 00)
#define DW_CFA_nop				  0x00
#define DW_CFA_set_loc			  0x01
#define DW_CFA_advance_loc1		  0x02
#define DW_CFA_advance_loc2		  0x03
#define DW_CFA_advance_loc4		  0x04
#define DW_CFA_offset_extended	  0x05
#define DW_CFA_restore_extended	  0x06
#define DW_CFA_undefined		  0x07
#define DW_CFA_same_value		  0x08
#define DW_CFA_register			  0x09
#define DW_CFA_remember_state	  0x0a
#define DW_CFA_restore_state	  0x0b
#define DW_CFA_def_cfa			  0x0c
#define DW_CFA_def_cfa_register	  0x0d
#define DW_CFA_def_cfa_offset	  0x0e
#define DW_CFA_def_cfa_expression 0x0f
#define DW_CFA_expression		  0x10
#define DW_CFA_offset_extended_sf 0x11
#define DW_CFA_def_cfa_sf		  0x12
#define DW_CFA_def_cfa_offset_sf  0x13
#define DW_CFA_val_offset		  0x14
#define DW_CFA_val_offset_sf	  0x15
#define DW_CFA_val_expression	  0x16

// Call Frame Instruction Opcodes -- compact (operand packed in low 6 bits)
#define DW_CFA_advance_loc 0x40
#define DW_CFA_offset	   0x80
#define DW_CFA_restore	   0xC0

// x86-64 DWARF Register Numbers
#define DWARF_REG_RAX 0
#define DWARF_REG_RDX 1
#define DWARF_REG_RCX 2
#define DWARF_REG_RBX 3
#define DWARF_REG_RSI 4
#define DWARF_REG_RDI 5
#define DWARF_REG_RBP 6
#define DWARF_REG_RSP 7
#define DWARF_REG_R8  8
#define DWARF_REG_R9  9
#define DWARF_REG_R10 10
#define DWARF_REG_R11 11
#define DWARF_REG_R12 12
#define DWARF_REG_R13 13
#define DWARF_REG_R14 14
#define DWARF_REG_R15 15
#define DWARF_REG_RA  16

// Maximum DWARF register number we track (RA = 16)
#define DWARF_MAX_REGS 17

	// ---------------------------------------------------------------------------
	// CIE (Common Information Entry) Parsing
	// ---------------------------------------------------------------------------

	// Parsed representation of a DWARF CIE.
	//
	// The CIE contains shared metadata for all FDEs in a compilation unit:
	// alignment factors, return address register, and initial CFI instructions.
	typedef struct
	{
		uint64_t code_align;		  // Code alignment factor (multiplier for advance_loc)
		int64_t data_align;			  // Data alignment factor (multiplier for offsets)
		uint64_t ra_reg;			  // Return address register number
		const uint8_t *initial_insts; // Pointer to initial CFI instructions
		size_t initial_insts_len;	  // Length of initial instructions in bytes
		int valid;					  // Non-zero if parsing succeeded
	} DwarfCIE;

	// Parse a DWARF CIE from raw bytes.
	//
	// Extracts code/data alignment factors, return address register, and a
	// pointer to the initial CFI instructions. The returned DwarfCIE contains
	// pointers into the input buffer (no allocation is performed).
	//
	// @param data   Pointer to the start of the CIE bytes.
	// @param len    Length of the CIE data in bytes.
	// @return       Parsed CIE; check the .valid field for success.
	DwarfCIE dwarf_parse_cie(const uint8_t *data, size_t len);

	// ---------------------------------------------------------------------------
	// x86-64 Register Names
	// ---------------------------------------------------------------------------

	// Get the name of an x86-64 register by DWARF register number.
	//
	// Returns a short string like "rax", "rbp", "r12", or "ra" (for the return
	// address pseudo-register). For unknown register numbers, returns "r<N>".
	//
	// @param reg    DWARF register number (0-16 for standard x86-64 registers).
	// @param buf    Buffer to write the name to (for unknown registers).
	// @param buflen Size of the buffer.
	// @return       Pointer to a static string or to buf.
	const char *dwarf_get_x86_64_reg_name(uint64_t reg, char *buf, size_t buflen);

	// ---------------------------------------------------------------------------
	// CFI State Machine
	// ---------------------------------------------------------------------------

	// Rule type for how to restore a register's value.
	typedef enum
	{
		DWARF_RULE_UNDEFINED,	  // Register value is undefined (not preserved)
		DWARF_RULE_SAME_VALUE,	  // Register value is unchanged
		DWARF_RULE_OFFSET,		  // Value at CFA + offset
		DWARF_RULE_VAL_OFFSET,	  // Value is CFA + offset (not dereferenced)
		DWARF_RULE_REGISTER,	  // Value is in another register
		DWARF_RULE_EXPRESSION,	  // Value computed by DWARF expression
		DWARF_RULE_VAL_EXPRESSION // Value is expression result (not dereferenced)
	} DwarfRuleType;

	// Rule for restoring a single register.
	typedef struct
	{
		DwarfRuleType type;
		int64_t offset; // For OFFSET/VAL_OFFSET rules
		uint64_t reg;	// For REGISTER rule
	} DwarfRegRule;

	// CFI state machine state.
	//
	// Tracks the current CFA definition and register rules while executing
	// CFI instructions. Use dwarf_cfi_state_init() to initialize.
	typedef struct
	{
		uint64_t cfa_reg;					// CFA base register (default: RSP = 7)
		int64_t cfa_offset;					// CFA offset from base register
		int cfa_is_expr;					// Non-zero if CFA is defined by expression
		DwarfRegRule rules[DWARF_MAX_REGS]; // Register restoration rules
	} DwarfCFIState;

	// Initialize a CFI state with x86-64 defaults.
	//
	// Sets CFA to RSP+8 (return address pushed on stack) and marks the return
	// address register (RA) as saved at CFA-8.
	//
	// @param state  State to initialize.
	void dwarf_cfi_state_init(DwarfCFIState *state);

	// Execute CFI instructions, updating the state.
	//
	// Interprets CFI bytecode from p to end, updating the CFA definition and
	// register rules in state. Uses the CIE's alignment factors.
	//
	// If max_cfa_offset is non-NULL, it is updated to track the maximum CFA
	// offset seen during execution (useful for computing stack depth).
	//
	// @param p               Cursor into CFI byte stream; advanced past processed
	//                        instructions.
	// @param end             One-past-end of the CFI byte stream.
	// @param state           CFI state to update.
	// @param cie             CIE providing alignment factors.
	// @param max_cfa_offset  If non-NULL, updated with the maximum CFA offset.
	void dwarf_execute_cfi(const uint8_t **p, const uint8_t *end,
						   DwarfCFIState *state, const DwarfCIE *cie,
						   int64_t *max_cfa_offset);

	// ---------------------------------------------------------------------------
	// CFA Offset Calculation
	// ---------------------------------------------------------------------------

	// Compute the maximum CFA offset from an FDE.
	//
	// Parses the FDE header and executes its CFI instructions (after the CIE's
	// initial instructions), tracking the maximum CFA offset. This represents
	// the peak stack depth used by the function.
	//
	// @param cie_data   Pointer to the raw CIE bytes.
	// @param cie_len    Length of the CIE data.
	// @param fde_data   Pointer to the raw FDE bytes.
	// @param fde_len    Length of the FDE data.
	// @param out_offset Receives the maximum CFA offset.
	// @return           0 on success, -1 on error.
	int dwarf_get_max_cfa_offset(const uint8_t *cie_data, size_t cie_len,
								 const uint8_t *fde_data, size_t fde_len,
								 int64_t *out_offset);

	// ---------------------------------------------------------------------------
	// LEB128 Encoding/Decoding
	// ---------------------------------------------------------------------------

	// Encode an unsigned integer as ULEB128.
	// @param val The value to encode.
	// @param out Buffer to write to. Must have at least 10 bytes (max for 64-bit).
	// @return Number of bytes written.
	size_t dwarf_encode_uleb128(uint64_t val, uint8_t *out);

	// Encode a signed integer as SLEB128.
	// @param val The value to encode.
	// @param out Buffer to write to. Must have at least 10 bytes.
	// @return Number of bytes written.
	size_t dwarf_encode_sleb128(int64_t val, uint8_t *out);

	// Decode a ULEB128 value, advancing the cursor past it.
	// @param[in,out] data Pointer to cursor; updated to point after the decoded
	// value.
	// @return The decoded unsigned value.
	uint64_t dwarf_decode_uleb128(const uint8_t **data);

	// Decode a SLEB128 value, advancing the cursor past it.
	// @param[in,out] data Pointer to cursor; updated to point after the decoded
	// value.
	// @return The decoded signed value.
	int64_t dwarf_decode_sleb128(const uint8_t **data);

	uint16_t dwarf_decode_le16(const uint8_t *p);

	uint32_t dwarf_decode_le32(const uint8_t *p);

	uint64_t dwarf_decode_le64(const uint8_t *p);

	// Decoded representation of a single DWARF Call Frame Instruction.
	//
	// Produced by dwarf_decode_cfi(). The opcode field is normalized:
	// for compact-encoded instructions, it is set to the base value:
	//   - 0x40|delta  -> opcode = DW_CFA_advance_loc (0x40),  operand1 = delta
	//   - 0x80|reg    -> opcode = DW_CFA_offset      (0x80),  operand1 = reg,
	//   operand2 = ULEB128 value
	//   - 0xC0|reg    -> opcode = DW_CFA_restore      (0xC0), operand1 = reg
	//
	// For standard opcodes (high bits == 0x00), the opcode is the raw byte, and
	// operand1/operand2 hold decoded values per the DWARF specification.
	//
	// Convention for operands:
	//   - Single unsigned operand:  stored in operand1.
	//   - Single signed operand (_sf variants): stored in operand2.
	//   - Two operands: first in operand1, second in operand2.
	//
	// The raw pointer and raw_size allow callers to copy the instruction
	// verbatim (useful for re-emitting CFI into a new .debug_frame).
	typedef struct
	{
		uint8_t opcode;		// Normalized opcode (base value for compact forms)
		uint64_t operand1;	// First operand (unsigned: delta, register, offset)
		int64_t operand2;	// Second operand (signed when applicable)
		const uint8_t *raw; // Pointer to start of this instruction in the input
		size_t raw_size;	// Total byte size of this instruction
	} DwarfCFI;

	// Decode one CFI instruction from a byte stream.
	//
	// Reads the instruction at *p, advances *p past it, and fills out
	// with the decoded opcode, operands, and raw byte pointer/size.
	//
	// Handles all standard x86-64 CFA opcodes (see the table in the file
	// header documentation).
	//
	// @param[in,out] p    Cursor into the CFI byte stream; advanced past the
	// instruction.
	// @param[in]     end  One-past-end of the CFI byte stream.
	// @param[out]    out  Filled with the decoded instruction.
	// @return 1 if an instruction was decoded, 0 if p >= end.
	int dwarf_decode_cfi(const uint8_t **p, const uint8_t *end, DwarfCFI *out);

#ifdef __cplusplus
}
#endif

#endif /* DWARF_H */
