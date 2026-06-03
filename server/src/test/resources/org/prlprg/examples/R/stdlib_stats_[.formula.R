#? stdlib
`[.formula` <- function (x, i) 
{
    ans <- NextMethod("[")
    if (!length(ans) || is.symbol(a1 <- ans[[1L]]) && as.character(a1) == 
        "~") {
        if (is.null(ans)) 
            ans <- list()
        class(ans) <- "formula"
        environment(ans) <- environment(x)
    }
    ans
}
