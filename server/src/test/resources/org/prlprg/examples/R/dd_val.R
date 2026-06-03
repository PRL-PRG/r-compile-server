#? returns(42.0)
e <- new.env(parent = emptyenv())

e$x <- 42
get('x', envir = e, inherits = FALSE)
