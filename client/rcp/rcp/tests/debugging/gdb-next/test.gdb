set pagination off
set confirm off
set breakpoint pending on

# Break when JIT code is registered
break __jit_debug_register_code

# Run the R script
run

# Wait for compilation
echo [GDB] Hit JIT registration. Finishing...
finish
# Now symbols for f_jit should be loaded.
break f_jit

# Continue to execution
continue

# We hit f_jit at Prologue (Line 1)
echo [GDB] Hit f_jit. At Prologue:
display/i $pc
list

# 1. Step over Prologue -> Op 1
echo [GDB] Step 1 (Prologue -> Op 1)...
next
display/i $pc

# 2. Step over Op 1 -> Op 2
echo [GDB] Step 2 (Op 1 -> Op 2)...
next
display/i $pc

# 3. Step over Op 2 -> Op 3
echo [GDB] Step 3 (Op 2 -> Op 3)...
next
display/i $pc

# 4. Step over Op 3 -> Op 4
echo [GDB] Step 4 (Op 3 -> Op 4)...
next
display/i $pc

# 5. Step over Op 4 -> Return/Exit
echo [GDB] Step 5 (Op 4 -> Exit)...
next
display/i $pc

continue
quit