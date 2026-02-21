#ifndef PERF_JIT_H
#define PERF_JIT_H

#include <stddef.h>
#include <stdint.h>

// Initialize jitdump file. Must be called once at startup.
// Creates /tmp/jit-<pid>.dump and writes the file header.
// Also mmaps the file (required by perf to detect the dump).
void perf_jit_init(void);

// Register a JIT-compiled function.
// Writes a JIT_CODE_LOAD record to the dump file.
void perf_jit_register(const char *func_name, void *code_addr, size_t code_size);

// Register unwinding info for the most recently registered JIT function.
// Writes a JIT_CODE_UNWINDING_INFO record containing .eh_frame data.
// Must be called immediately after perf_jit_register().
void perf_jit_register_unwinding_info(const uint8_t *eh_frame_data, size_t eh_frame_size);

// Close the jitdump file. Called at shutdown.
// Writes a JIT_CODE_CLOSE record and unmaps/closes the file.
void perf_jit_close(void);

#endif /* PERF_JIT_H */
