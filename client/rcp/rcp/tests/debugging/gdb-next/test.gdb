set pagination off
set confirm off
set breakpoint pending on

break __jit_debug_register_code
run
finish
continue
finish
break f_jit
continue

# Line 2 (GETVAR)
break f_jit.S:2
continue

# Line 3 (LDCONST)
break f_jit.S:3
continue
echo Stack Top after GETVAR (should be 10):
call rcp_print_stack_val((void*)((char*)stack - 16))

# Line 4 (ADD)
break f_jit.S:4
continue
echo Stack Top after LDCONST (should be 1):
call rcp_print_stack_val((void*)((char*)stack - 16))

# Line 5 (RETURN)
break f_jit.S:5
continue
echo Stack Top after ADD (should be 11):
call rcp_print_stack_val((void*)((char*)stack - 16))

quit