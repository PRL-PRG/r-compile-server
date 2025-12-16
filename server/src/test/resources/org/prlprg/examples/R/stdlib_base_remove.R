#? stdlib
`remove` <- function (..., list = character(), pos = -1, envir = as.environment(pos), 
    inherits = FALSE) 
{
    if (...length()) {
        dots <- match.call(expand.dots = FALSE)$...
        if (!all(vapply(dots, function(x) is.symbol(x) || is.character(x), 
            NA, USE.NAMES = FALSE))) 
            stop("... must contain names or character strings")
        list <- .Primitive("c")(list, vapply(dots, as.character, 
            ""))
    }
    .Internal(remove(list, envir, inherits))
}

# Examples
tmp <- 1:4
## work with tmp  and cleanup
rm(tmp)


