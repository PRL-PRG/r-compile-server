#? stdlib
`delimMatch` <- function (x, delim = c("{", "}"), syntax = "Rd") 
{
    if (!is.character(x)) 
        stop("argument 'x' must be a character vector")
    if ((length(delim) != 2L) || any(nchar(delim) != 1L)) 
        stop("argument 'delim' must specify two characters")
    if (syntax != "Rd") 
        stop("only Rd syntax is currently supported")
    .Call(C_delim_match, x, delim)
}

# Examples
x <- c("\\value{foo}", "function(bar)")
delimMatch(x)
delimMatch(x, c("(", ")"))

