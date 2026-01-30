set pagination off
set confirm off
set breakpoint pending on

# Break when JIT code is registered
break __jit_debug_register_code

# Run the R script
run

# --- 1. Inner Function Compilation ---
# We hit __jit_debug_register_code for the first time (inner_jit)
 echo [GDB] Hit JIT registration (1/2). Finishing...\n
finish
# Now symbols for inner_jit should be loaded.
break inner_jit

# Continue to next compilation
continue

# --- 2. Outer Function Compilation ---
# We hit __jit_debug_register_code for the second time (outer_jit)
 echo [GDB] Hit JIT registration (2/2). Finishing...\n
finish
# Now symbols for outer_jit should be loaded.
break outer_jit

# Continue to execution
continue

# --- 3. Execution: Hit Outer Function ---
 echo [GDB] Hit outer_jit. Initial Backtrace:\n
bt 5

 echo [GDB] Stepping through outer_jit prologue...\n
# Step past prologue to reach bytecode
while ($pc < outer_jit + 29)
  stepi
end

 echo [GDB] Reached bytecode in outer_jit. Instruction:\n
display/i $pc
stepi
bt 1
stepi
bt 1

# Continue to hit inner call
 echo [GDB] Continuing to inner_jit...\n
continue

# --- 4. Execution: Hit Inner Function ---
 echo [GDB] Hit inner_jit. FULL BACKTRACE (Verify Stack):\n
# This is the critical check: outer_jit should be in the stack below inner_jit
bt 10

 echo [GDB] Stepping through inner_jit prologue...\n
while ($pc < inner_jit + 29)
  stepi
end

 echo [GDB] Reached bytecode in inner_jit. Instruction:\n
stepi
bt 1

continue
quit
