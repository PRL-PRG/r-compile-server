#? stdlib
`methods` <- function (generic.function, class, all.names = FALSE, dropPath = FALSE) 
{
    envir <- parent.frame()
    useNS <- FALSE
    if (!missing(generic.function) && !is.character(generic.function)) {
        what <- substitute(generic.function)
        generic.function <- if (is.function(generic.function) && 
            is.call(what) && (deparse(what[[1L]], nlines = 1L) %in% 
            c("::", ":::"))) {
            what <- as.character(what[2:3])
            envir <- asNamespace(what[[1L]])
            useNS <- TRUE
            what[[2L]]
        }
        else deparse(what)
    }
    if (!missing(class) && !is.character(class)) 
        class <- deparse1(substitute(class))
    s3 <- .S3methods(generic.function, class, envir, all.names = all.names, 
        dropPath = dropPath, useEnv = useNS)
    s4 <- if (.isMethodsDispatchOn()) 
        methods::.S4methods(generic.function, class)
    .MethodsFunction(s3, s4, missing(generic.function))
}

# Examples
methods(class = "MethodsFunction") # format and print

require(stats)

methods(summary)
methods(class = "aov")    # S3 class
## The same, with more details and more difficult to read:
print(methods(class = "aov"), byclass=FALSE)
methods("[[")             # uses C-internal dispatching
methods("$")
methods("$<-")            # replacement function
methods("+")              # binary operator
methods("Math")           # group generic
require(graphics)
methods(axis)             # looks like a generic, but is not

mf <- methods(format)     # quite a few; ... the last few :
tail(cbind(meth = format(mf)))

if(require(Matrix, quietly = TRUE)) {
print(methods(class = "Matrix"))  # S4 class
m <- methods(dim)         # S3 and S4 methods
print(m)
print(attr(m, "info"))    # more extensive information

## --> help(showMethods) for related examples
}

