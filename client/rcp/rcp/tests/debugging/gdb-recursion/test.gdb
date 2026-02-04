set pagination off
set confirm off
set breakpoint pending on

break __jit_debug_register_code
run

# 1. Not-inlined helpers registration
finish

# Continue to compilation
continue

# 2. test_add registration
finish
break test_add

# Continue to execution
continue

# Hit test_add(4)
echo [GDB] Hit test_add (1st call). Backtrace:
bt 5
continue

# Hit test_add(3)
echo [GDB] Hit test_add (2nd call - recursive). Backtrace:
bt 5
continue

# Hit test_add(2)
echo [GDB] Hit test_add (3rd call - recursive). Backtrace:
bt 5
continue

quit