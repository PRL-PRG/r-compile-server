# Subscripts of a language object and a list of them, which must not be evaluated
e <- quote(f(a, g(b)))
l <- list(quote(h(c)), quote(d))
list(e[[1]], e[2:3], e[[3]][[1]], l[[1]], l[2], e[[3]][2])
