set pagination off
set confirm off
set breakpoint pending on

break __jit_debug_register_code
run
finish

# JIT code now registered - set all breakpoints before execution
break f_jit.S:2
break f_jit.S:3
break f_jit.S:4
break f_jit.S:5
continue

# Line 2 (GETVAR)
bt
continue

# Line 3 (LDCONST)
echo Stack Top after GETVAR (should be 10):
call rcp_print_stack_val((void*)((char*)stack - 16))
continue

# Line 4 (ADD)
echo Stack Top after LDCONST (should be 1):
call rcp_print_stack_val((void*)((char*)stack - 16))
continue

# Line 5 (RETURN)
echo Stack Top after ADD (should be 11):
call rcp_print_stack_val((void*)((char*)stack - 16))

quit
