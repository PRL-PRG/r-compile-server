#ifndef GDB_JIT_H
#define GDB_JIT_H

#include "rcp_common.h"
#include <stddef.h>
#include <stdint.h>

// GDB JIT Interface
//
// This implements the GDB JIT compilation interface as documented in:
// https://sourceware.org/gdb/current/onlinedocs/gdb/JIT-Interface.html
//
// copied from:
// https://sourceware.org/gdb/current/onlinedocs/gdb.html/Declarations.html#Declarations
//
typedef enum
{
	JIT_NOACTION = 0,
	JIT_REGISTER_FN,
	JIT_UNREGISTER_FN
} jit_actions_t;

struct jit_code_entry
{
	struct jit_code_entry *next_entry;
	struct jit_code_entry *prev_entry;
	const void *symfile_addr;
	uint64_t symfile_size;
};

struct jit_descriptor
{
	uint32_t version;
	// This type should be jit_actions_t, but we use uint32_t
	// to be the same size as the target.
	uint32_t action_flag;
	struct jit_code_entry *relevant_entry;
	struct jit_code_entry *first_entry;
};

// Register a function with GDB. Creates an in-memory ELF object with
// debug information and registers it.
//
// @param func_name Name of the function symbol.
// @param code_addr Pointer to the executable code.
// @param code_size Size of the executable code in bytes.
// @param inst_addrs Array of length instruction_count. Each
//                   entry is a pointer to the start of the
//                   corresponding instruction's machine code,
//                   or NULL for bytecode argument positions
//                   (non-instruction slots). NULL entries are
//                   skipped during processing.
// @param instruction_count Number of entries in inst_addrs and
//                          stencils arrays.
// @param stencils Array of pointers to Stencil metadata,
//                 parallel to inst_addrs.
// @param base_cfa_offset Base CFA (Canonical Frame Address) stack
// depth for the function. For JIT functions that use the _RCP_INIT
// prologue, pass RCP_INIT_CFA_OFFSET + 8 (the +8 accounts for the
// extra return address pushed by the call into JIT code). For helper
// functions with a standard prologue, pass 8.
//
// @return Pointer to the jit_code_entry that can be used for
//         unregistration, or NULL if registration failed.
struct jit_code_entry *gdb_jit_register(const char *func_name, void *code_addr,
										size_t code_size, uint8_t **inst_addrs,
										int instruction_count,
										const Stencil **stencils,
										int base_cfa_offset);

// Unregister a function.
void gdb_jit_unregister(struct jit_code_entry *entry);

#endif /* GDB_JIT_H */
