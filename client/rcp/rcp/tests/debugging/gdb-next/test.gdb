set pagination off
set confirm off
set breakpoint pending on

# Break when JIT code is registered
break __jit_debug_register_code

# Run the R script
run

# Wait for compilation
finish
# Now symbols for f_jit should be loaded.
break f_jit

# Continue to execution
continue

# 1. At Prologue
next
# 2. At GETVAR_OP
next
# 3. At LDCONST_OP
next
# 4. At ADD_OP
# Before nexting from ADD to RETURN, show the current frame if next lands on RETURN
next
# Now at RETURN_OP. Explicitly show it.
frame
next

continue
quit
