set pagination off
set confirm off
set breakpoint pending on

break __jit_debug_register_code
run

# fac registration
finish
break fac


# Continue to execution
continue

# Hit fac(3)
echo [GDB] Hit fac (1st call). Backtrace:
bt
continue

# Hit fac(2)
echo [GDB] Hit fac (2nd call - recursive). Backtrace:
bt
continue

# Hit fac(1)
echo [GDB] Hit fac (3rd call - recursive). Backtrace:
bt
continue

quit
