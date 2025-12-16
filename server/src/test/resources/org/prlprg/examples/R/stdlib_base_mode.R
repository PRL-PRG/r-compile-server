#? stdlib
`mode` <- function (x) 
{
    if (is.expression(x)) 
        return("expression")
    if (is.call(x)) 
        return(switch(deparse(x[[1L]])[1L], `(` = "(", "call"))
    if (is.name(x)) 
        "name"
    else switch(tx <- typeof(x), double = , integer = "numeric", 
        closure = , builtin = , special = "function", tx)
}

# Examples
require(stats)

sapply(options(), mode)

cex3 <- c("NULL", "1", "1:1", "1i", "list(1)", "data.frame(x = 1)",
  "pairlist(pi)", "c", "lm", "formals(lm)[[1]]",  "formals(lm)[[2]]",
  "y ~ x","expression((1))[[1]]", "(y ~ x)[[1]]",
  "expression(x <- pi)[[1]][[1]]")
lex3 <- sapply(cex3, function(x) eval(str2lang(x)))
mex3 <- t(sapply(lex3,
                 function(x) c(typeof(x), storage.mode(x), mode(x))))
dimnames(mex3) <- list(cex3, c("typeof(.)","storage.mode(.)","mode(.)"))
mex3

## This also makes a local copy of 'pi':
storage.mode(pi) <- "complex"
storage.mode(pi)
rm(pi)

