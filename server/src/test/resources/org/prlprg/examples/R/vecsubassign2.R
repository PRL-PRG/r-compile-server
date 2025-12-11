#? [bc2c]dispatchedSubassign
x <- data.frame(a=1, b=2, row.names=NULL)

x['a'] <- 42
x

#? [bc2c]fastSubassign
x <- list(1,2,3)
x[[1]] <- x
x
