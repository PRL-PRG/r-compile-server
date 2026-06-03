#? stdlib
`reg.finalizer` <- function (e, f, onexit = FALSE) 
.Internal(reg.finalizer(e, f, onexit))

# Examples
f <- function(e) print("cleaning....")
g <- function(x){ e <- environment(); reg.finalizer(e, f) }
g()
invisible(gc()) # trigger cleanup

