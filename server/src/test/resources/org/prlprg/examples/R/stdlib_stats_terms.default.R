#? stdlib
`terms.default` <- function (x, ...) 
{
    x$terms %||% attr(x, "terms") %||% stop("no terms component nor attribute")
}
