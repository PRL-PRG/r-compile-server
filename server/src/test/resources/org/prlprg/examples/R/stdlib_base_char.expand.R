#? stdlib
`char.expand` <- function (input, target, nomatch = stop("no match")) 
{
    if (length(input) != 1L) 
        stop("'input' must have length 1")
    if (!(is.character(input) && is.character(target))) 
        stop("'input' and 'target' must be character vectors")
    y <- .Internal(charmatch(input, target, NA_integer_))
    if (anyNA(y)) 
        eval(nomatch)
    target[y]
}

# Examples
locPars <- c("mean", "median", "mode")
char.expand("me", locPars, warning("Could not expand!"))
char.expand("mo", locPars)

