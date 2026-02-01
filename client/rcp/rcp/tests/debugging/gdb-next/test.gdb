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

# We are at Prologue. Set breakpoints for next lines to verify mapping.
# Line 2: GETVAR_OP
break f_jit.S:2
continue

# Line 3: LDCONST_OP
break f_jit.S:3
continue

# Line 4: ADD_OP
break f_jit.S:4
continue

# Line 5: RETURN_OP
break f_jit.S:5
continue

quit