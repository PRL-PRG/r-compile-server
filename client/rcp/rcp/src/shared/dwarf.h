#ifndef DWARF_H
#define DWARF_H

#include <stdint.h>
#include <stddef.h>

/**
 * @file dwarf.h
 * @brief DWARF Debugging Information Format Definitions and Helpers.
 *
 * # Introduction to DWARF
 *
 * DWARF (Debugging With Attributed Record Formats) is a standardized format for 
 * representing debugging information. It allows debuggers (like GDB) to map 
 * machine code back to source code, inspect variables, and unwind the stack.
 *
 * ## Sections
 * DWARF information is organized into sections in an ELF file:
 * - `.debug_info`: The core debug info (types, variables, functions).
 * - `.debug_abbrev`: Abbreviation tables used to compress `.debug_info`.
 * - `.debug_line`: Line number table (maps PC addresses to source lines).
 * - `.debug_frame`: Call Frame Information (CFI) for stack unwinding.
 * - `.debug_str`: String table for sharing string data.
 *
 * ## Call Frame Information (CFI) and Stack Unwinding
 *
 * CFI is critical for the debugger to "walk the stack" (backtrace) and restore 
 * register values in previous frames. It defines how to calculate the 
 * **Canonical Frame Address (CFA)** and the location of saved registers.
 *
 * ### The Virtual Stack Machine
 * CFI is encoded as a bytecode for a simple stack machine. The debugger executes 
 * this bytecode to determine the state of the stack frame at any given instruction 
 * pointer (PC).
 *
 * ### Running Example: f -> g -> h
 *
 * Consider a function `f` calling `g`, which calls `h`.
 *
 * 1. **Initial State (in `f`)**: 
 *    - `RSP` points to the top of the stack.
 *    - `RIP` is executing instructions in `f`.
 *
 * 2. **Call `g`**: `f` executes `CALL g`.
 *    - The return address (address of next instruction in `f`) is pushed onto the stack.
 *    - `RSP` decrements by 8.
 *    - Control transfers to `g`.
 *
 * 3. **Prologue of `g`**:
 *    - `PUSH RBP`: Save caller's frame pointer. `RSP` decrements by 8.
 *    - `MOV RBP, RSP`: Set new frame pointer.
 *    - `SUB RSP, 16`: Allocate local variables.
 *
 * **CFA Calculation**:
 * The CFA is a reference address for the frame, typically the value of `RSP` 
 * *immediately before* the function call.
 * 
 * - Upon entry to `g`: CFA = `RSP + 8` (accounting for the pushed Return Address).
 * - After `PUSH RBP`: CFA = `RSP + 16` (RA + RBP).
 * - After `MOV RBP, RSP`: CFA = `RBP + 16`.
 * - After `SUB RSP, 16`: CFA remains `RBP + 16` (stable despite RSP changing).
 *
 * The DWARF `.debug_frame` section contains **FDEs (Frame Description Entries)** 
 * for each function, composed of instructions like:
 * - `DW_CFA_def_cfa_offset(16)`: Define CFA as `Register + 16`.
 * - `DW_CFA_offset(RBP, -16)`: Save RBP at `CFA - 16`.
 *
 * When GDB stops in `h`, it uses `h`'s FDE to restore `g`'s registers (including 
 * `RSP` and `RIP`). Then it uses `g`'s FDE to restore `f`'s registers, and so on.
 *
 * ## Inspecting DWARF
 *
 * You can inspect DWARF information in object files using command-line tools:
 *
 * - **Dump all debug info**:
 *   `readelf --debug-dump=all <file>`
 *
 * - **Dump CFI (Stack Unwinding)**:
 *   `readelf --debug-dump=frames <file>`
 *
 * - **Dump Line Table**:
 *   `readelf --debug-dump=line <file>`
 *   or `dwarfdump -l <file>`
 *
 * - **Using GDB**:
 *   `info line *<address>`: Show source line for address.
 *   `maintenance print frame-id`: Show CFA of current frame.
 *
 * # References
 * - DWARF Standard: http://dwarfstd.org/
 */

#ifdef __cplusplus
extern "C" {
#endif

/* DWARF Constants */

/* Tag Encodings */
#define DW_TAG_compile_unit     0x11
#define DW_TAG_formal_parameter 0x05
#define DW_TAG_pointer_type     0x0F
#define DW_TAG_subprogram       0x2e
#define DW_TAG_base_type        0x24

/* Attribute Encodings */
#define DW_AT_location          0x02
#define DW_AT_name              0x03
#define DW_AT_byte_size         0x0B
#define DW_AT_stmt_list         0x10
#define DW_AT_low_pc            0x11
#define DW_AT_high_pc           0x12
#define DW_AT_encoding          0x3E
#define DW_AT_type              0x49

/* Attribute Form Encodings */
#define DW_FORM_addr            0x01
#define DW_FORM_data4           0x06
#define DW_FORM_string          0x08
#define DW_FORM_block1          0x0A
#define DW_FORM_data1           0x0B
#define DW_FORM_ref4            0x13

/* Operation Expressions */
#define DW_OP_reg4              0x54 /* RSI */
#define DW_OP_reg5              0x55 /* RDI */

/* Encoding Attribute Values */
#define DW_ATE_address          0x01

/* Line Number Standard Opcodes */
#define DW_LNS_copy             1
#define DW_LNS_advance_pc       2
#define DW_LNS_advance_line     3
#define DW_LNS_set_file         4
#define DW_LNE_end_sequence     1
#define DW_LNE_set_address      2

/* Call Frame Instruction Opcodes */
#define DW_CFA_nop                      0x00
#define DW_CFA_set_loc                  0x01
#define DW_CFA_advance_loc1             0x02
#define DW_CFA_advance_loc2             0x03
#define DW_CFA_advance_loc4             0x04
#define DW_CFA_offset_extended          0x05
#define DW_CFA_restore_extended         0x06
#define DW_CFA_undefined                0x07
#define DW_CFA_same_value               0x08
#define DW_CFA_register                 0x09
#define DW_CFA_remember_state           0x0a
#define DW_CFA_restore_state            0x0b
#define DW_CFA_def_cfa                  0x0c
#define DW_CFA_def_cfa_register         0x0d
#define DW_CFA_def_cfa_offset           0x0e
#define DW_CFA_def_cfa_expression       0x0f
#define DW_CFA_expression               0x10
#define DW_CFA_offset_extended_sf       0x11
#define DW_CFA_def_cfa_sf               0x12
#define DW_CFA_def_cfa_offset_sf        0x13
#define DW_CFA_val_offset               0x14
#define DW_CFA_val_offset_sf            0x15
#define DW_CFA_val_expression           0x16

#define DW_CFA_advance_loc              0x40
#define DW_CFA_offset                   0x80
#define DW_CFA_offset_base              0x80 /* Alias for offset */
#define DW_CFA_restore                  0xC0

/* x86-64 DWARF Register Numbers */
#define DWARF_REG_RBX           3
#define DWARF_REG_RBP           6
#define DWARF_REG_RSP           7
#define DWARF_REG_R12           12
#define DWARF_REG_R13           13
#define DWARF_REG_R14           14
#define DWARF_REG_R15           15
#define DWARF_REG_RA            16

/* Helper Functions */

/**
 * @brief Encodes an unsigned integer using Little Endian Base 128 (LEB128).
 * 
 * @param val The value to encode.
 * @param out Buffer to write to. Must have at least 10 bytes (max for 64-bit).
 * @return size_t Number of bytes written.
 */
size_t dwarf_encode_uleb128(uint64_t val, uint8_t *out);

/**
 * @brief Encodes a signed integer using Little Endian Base 128 (LEB128).
 * 
 * @param val The value to encode.
 * @param out Buffer to write to. Must have at least 10 bytes.
 * @return size_t Number of bytes written.
 */
size_t dwarf_encode_sleb128(int64_t val, uint8_t *out);

/**
 * @brief Decodes an unsigned LEB128 value from a buffer.
 * 
 * @param data Pointer to the buffer pointer. Will be updated to point after the read value.
 * @return uint64_t The decoded value.
 */
uint64_t dwarf_decode_uleb128(const uint8_t **data);

/**
 * @brief Decodes a signed LEB128 value from a buffer.
 * 
 * @param data Pointer to the buffer pointer. Will be updated to point after the read value.
 * @return int64_t The decoded value.
 */
int64_t dwarf_decode_sleb128(const uint8_t **data);

#ifdef __cplusplus
}
#endif

#endif // DWARF_H
