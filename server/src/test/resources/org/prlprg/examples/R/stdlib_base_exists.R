#? stdlib
`exists` <- function (x, where = -1, envir = if (missing(frame)) as.environment(where) else sys.frame(frame), 
    frame, mode = "any", inherits = TRUE) 
.Internal(exists(x, envir, mode, inherits))

# Examples
##  Define a substitute function if necessary:
if(!exists("some.fun", mode = "function"))
  some.fun <- function(x) { cat("some.fun(x)\n"); x }
search()
exists("ls", 2) # true even though ls is in pos = 3
exists("ls", 2, inherits = FALSE) # false

## These are true (in most circumstances):
identical(ls,   get0("ls"))
identical(NULL, get0(".foo.bar.")) # default ifnotfound = NULL (!)

stopifnot(identical(ls, get0("ls")),
          is.null(get0(".foo.bar.")))


