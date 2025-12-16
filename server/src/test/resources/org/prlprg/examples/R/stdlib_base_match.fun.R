#? stdlib
`match.fun` <- function (FUN, descend = TRUE) 
{
    if (is.function(FUN)) 
        return(FUN)
    if (!(is.character(FUN) && length(FUN) == 1L || is.symbol(FUN))) {
        FUN <- eval.parent(substitute(substitute(FUN)))
        if (!is.symbol(FUN)) 
            stop(gettextf("'%s' is not a function, character or symbol", 
                deparse(FUN)), domain = NA)
    }
    envir <- parent.frame(2)
    if (descend) 
        FUN <- get(as.character(FUN), mode = "function", envir = envir)
    else {
        FUN <- get(as.character(FUN), mode = "any", envir = envir)
        if (!is.function(FUN)) 
            stop(gettextf("found non-function '%s'", FUN), domain = NA)
    }
    return(FUN)
}

# Examples
# Same as get("*"):
match.fun("*")
# Overwrite outer with a vector
outer <- 1:5
try(match.fun(outer, descend = FALSE)) #-> Error:  not a function
match.fun(outer) # finds it anyway
is.function(match.fun("outer")) # as well

