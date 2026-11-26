# Subscripts whose vector, index, or value is a language object or a symbol, which must not be
# evaluated
e <- quote(f(a))
e[[2]] <- quote(b)
e[3] <- list(quote(g(c)))
l <- list(1, 2)
l[[1]] <- quote(h(d))
l[2] <- list(quote(z))
list(e, l, e[[1]], e[2:3], l[[1]], l[2])
