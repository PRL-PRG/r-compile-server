#ifndef GDB_JIT_H
#define GDB_JIT_H

#include <stddef.h>
#include <stdint.h>
#include "rcp_common.h"

/*
 * GDB JIT Interface
 *
 * This implements the GDB JIT compilation interface as documented in:
 * https://sourceware.org/gdb/current/onlinedocs/gdb/JIT-Interface.html
 *
 * The interface allows JIT compilers to register compiled code with GDB
 * so that debugging features (backtraces, breakpoints, stepping) work.
 */
typedef enum {
  JIT_NOACTION = 0,
  JIT_REGISTER_FN,
  JIT_UNREGISTER_FN
} jit_actions_t;

struct jit_code_entry {
  struct jit_code_entry *next_entry;
  struct jit_code_entry *prev_entry;
  const void *symfile_addr;
  uint64_t symfile_size;
};

struct jit_descriptor {
  uint32_t version;
  /* This type should be jit_actions_t, but we use uint32_t
     to be the same size as the target.  */
  uint32_t action_flag;
  struct jit_code_entry *relevant_entry;
  struct jit_code_entry *first_entry;
};

/*
 * Register a function with GDB.
 * Creates an in-memory ELF object with debug information and registers it.
 *
 * Args:
 *   func_name - Name of the function symbol
 *   code_addr - Pointer to the executable code
 *   code_size - Size of the executable code
 *   inst_addrs - Array of pointers to start of each instruction. 
 *                Must be packed (contain only valid instruction starts, no NULLs).
 *   instruction_count - Number of instructions in the arrays.
 *   stencils - Array of pointers to Stencil metadata for each instruction.
 *              Must correspond 1:1 with inst_addrs.
 * @param base_cfa_offset Base stack offset for CFA (Canonical Frame Address).
 *                     Use RCP_INIT_CFA_OFFSET for standard JIT functions with _RCP_INIT prologue.
 *                     Use 8 for helper functions with standard prologue.
 *
 * Returns:
 *   Pointer to the jit_code_entry that can be used for unregistration,
 *   or NULL if registration failed.
 */
struct jit_code_entry *gdb_jit_register(
    const char *func_name,
    void *code_addr,
    size_t code_size,
    uint8_t **inst_addrs,
    int instruction_count,
    const Stencil **stencils,
    int base_cfa_offset
);

/*
 * Unregister a function.
 */
void gdb_jit_unregister(struct jit_code_entry *entry);

#endif /* GDB_JIT_H */
