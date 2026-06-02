set pagination off
set confirm off
set breakpoint pending on

# Set breakpoint on the JIT-compiled fac before running.
# GDB resolves this pending breakpoint automatically when rcp_cmpfun
# registers "fac" via __jit_debug_register_code, regardless of how many
# other JIT registrations happen first (e.g. promise bodies like fac_prom_1).
break fac
run

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
