#ifndef GDB_JIT_H
#define GDB_JIT_H

#include <stdint.h>
#include <stddef.h>

#ifdef GDB_JIT_SUPPORT

/*
 * GDB JIT Interface
 *
 * This implements the GDB JIT compilation interface as documented in:
 * https://sourceware.org/gdb/current/onlinedocs/gdb/JIT-Interface.html
 *
 * The interface allows JIT compilers to register compiled code with GDB
 * so that debugging features (backtraces, breakpoints, stepping) work.
 */

/* JIT action flags */
typedef enum {
    JIT_NOACTION = 0,
    JIT_REGISTER_FN,
    JIT_UNREGISTER_FN
} jit_actions_t;

/* Entry in the linked list of registered JIT code objects */
struct jit_code_entry {
    struct jit_code_entry *next_entry;
    struct jit_code_entry *prev_entry;
    const char *symfile_addr;   /* Pointer to in-memory ELF image */
    uint64_t symfile_size;      /* Size of the ELF image */
};

/* Global descriptor that GDB reads */
struct jit_descriptor {
    uint32_t version;
    uint32_t action_flag;
    struct jit_code_entry *relevant_entry;
    struct jit_code_entry *first_entry;
};

/*
 * Register JIT-compiled code with GDB.
 *
 * Parameters:
 *   func_name      - Name of the function (for debug info)
 *   code_addr      - Start address of the JIT-compiled code
 *   code_size      - Total size of the code region
 *   inst_addrs     - Array mapping bytecode PC to native addresses
 *   bytecode_count - Number of bytecode instructions
 *   bytecode       - The bytecode array (for opcode info)
 *   opcode_names   - Array of opcode name strings
 *   opcode_arg_counts - Array of argument counts per opcode
 *   num_opcodes    - Number of opcodes in the arrays
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
    int bytecode_count,
    const int *bytecode
);

/*
 * Unregister JIT-compiled code from GDB.
 *
 * Parameters:
 *   entry - The entry returned by gdb_jit_register()
 */
void gdb_jit_unregister(struct jit_code_entry *entry);

#endif /* GDB_JIT_SUPPORT */

#endif /* GDB_JIT_H */
