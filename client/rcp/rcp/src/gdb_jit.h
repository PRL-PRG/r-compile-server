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
//
// @return Pointer to the jit_code_entry that can be used for
//         unregistration, or NULL if registration failed.
struct jit_code_entry *gdb_jit_register(const char *func_name, void *code_addr,
										size_t code_size, uint8_t **inst_addrs,
										int instruction_count,
										const Stencil **stencils);

// Unregister a function.
void gdb_jit_unregister(struct jit_code_entry *entry);

// Build .eh_frame data for stack unwinding.
//
// Single source of CFI generation, used by both GDB (embedded in
// the in-memory ELF) and perf/samply (jitdump JIT_CODE_UNWINDING_INFO).
//
// The CIE sets CFA = RSP+8 as the baseline; per-stencil CFI instructions
// are emitted into the FDE to track stack adjustments within stencils.
//
// @param out_data         Receives malloc'd .eh_frame data (caller must free).
// @param out_size         Receives size of the .eh_frame data.
// @param code_addr        Start address of JIT code.
// @param code_size        Size of JIT code.
// @param inst_addrs       Array of instruction addresses.
// @param instruction_count Number of entries in inst_addrs and stencils.
// @param stencils         Array of Stencil pointers parallel to inst_addrs.
void build_eh_frame(uint8_t **out_data, size_t *out_size,
					void *code_addr, size_t code_size,
					uint8_t **inst_addrs, int instruction_count,
					const Stencil **stencils);

// Generate a temporary source file with opcode names.
// Returns malloc'd path to the file (caller must free), or NULL on failure.
char *write_source_file(const char *func_name, int instruction_count,
						const Stencil **stencils, uint8_t **inst_addrs);

#endif /* GDB_JIT_H */
