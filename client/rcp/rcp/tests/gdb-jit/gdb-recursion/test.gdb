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
echo ===BT1_START===\n
bt
echo ===BT1_END===\n
continue

# Hit fac(2)
echo ===BT2_START===\n
bt
echo ===BT2_END===\n
continue

# Hit fac(1)
echo ===BT3_START===\n
bt
echo ===BT3_END===\n
continue

quit
