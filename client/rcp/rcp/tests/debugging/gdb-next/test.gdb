set pagination off
set confirm off
set breakpoint pending on

# Break when JIT code is registered
break __jit_debug_register_code

# Run the R script
run

# Wait for compilation
echo [GDB] Hit JIT registration. Finishing...\n
finish
# Now symbols for f_seq_jit should be loaded.
break f_seq_jit

# Continue to execution
continue

# We hit f_seq_jit
echo [GDB] Hit f_seq_jit. Current location:\n
# We should be at the prologue
display/i $pc
list

# Step (next) over prologue
# Note: The prologue is mapped to line 1. 'next' should jump to line 2.

echo [GDB] Executing 'next' (skip prologue)...
next
display/i $pc
list

# Now we should be at the first instruction (e.g. LDCONST or GETVAR)
# We will execute 'next' several times and verify the line number increases
echo [GDB] Executing 'next' 1...
next
display/i $pc

echo [GDB] Executing 'next' 2...
next
display/i $pc

echo [GDB] Executing 'next' 3...
next
display/i $pc

echo [GDB] Executing 'next' 4...
next
display/i $pc

continue
quit
