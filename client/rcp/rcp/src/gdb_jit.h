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
 *   instruction_count - Number of instructions
 *   instruction_names - Array of instruction names (for source listing)
 *   instruction_debug_frames - Array of pointers to DWARF debug frames for each instruction
 *   base_cfa_offset - The CFA offset at the start of the function (after prologue). 
 *                     Use 72 (0x48) for standard JIT functions with _RCP_INIT prologue.
 *                     Use 8 for raw helper functions without extra prologue.
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
    const char **instruction_names,
    const uint8_t **instruction_debug_frames,
    int base_cfa_offset
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
