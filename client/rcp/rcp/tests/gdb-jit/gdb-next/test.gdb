set pagination off
set confirm off
set breakpoint pending on

break __jit_debug_register_code
run
finish

# JIT code now registered - set breakpoint at function entry
break f_jit
continue

# Line 1 (GETVAR) - we just hit the breakpoint
echo ===BT1_START===\n
bt
echo ===BT1_END===\n
next

# Line 2 (LDCONST) - stepped over GETVAR
echo Stack Top after GETVAR (should be 10):\n
call rcp_print_stack_val_unbox((void*)((char*)stack - 16))
next

# Line 3 (ADD) - stepped over LDCONST
echo Stack Top after LDCONST (should be 1):\n
call rcp_print_stack_val_unbox((void*)((char*)stack - 16))
next

# Line 4 (RETURN) - stepped over ADD
echo Stack Top after ADD (should be 11):\n
call rcp_print_stack_val_unbox((void*)((char*)stack - 16))

quit
