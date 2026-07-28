#? stdlib
`formula.terms` <- function (x, ...) 
{
    env <- environment(x)
    attributes(x) <- list(class = "formula")
    environment(x) <- env %||% globalenv()
    x
}
