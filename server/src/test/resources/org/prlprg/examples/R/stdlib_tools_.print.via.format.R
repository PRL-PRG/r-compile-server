#? stdlib
`.print.via.format` <- function (x, ...) 
{
    writeLines(format(x, ...))
    invisible(x)
}

# Examples
## The function is simply defined as
 function (x, ...) {
    writeLines(format(x, ...))
    invisible(x)
 }

## is used for simple print methods in R, and as prototype for new methods.

