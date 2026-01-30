set pagination off
set confirm off
set breakpoint pending on

# Break when JIT code is registered
break __jit_debug_register_code

# Run the R script
run

# 1. Not-inlined helpers registration
finish

# Continue to f_jit compilation
continue

# 2. f_jit registration
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
next
# 5. At RETURN_OP
frame
next

continue
quit