devtools::load_all()

p <- .Call(rsh:::C_load_fun, "../example.o")
print(p)
.Call(rsh:::C_call_fun, p)


