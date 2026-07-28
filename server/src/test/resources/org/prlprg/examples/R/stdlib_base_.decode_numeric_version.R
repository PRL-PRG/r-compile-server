#? stdlib
`.decode_numeric_version` <- function (x) 
{
    width <- attr(x, "width")
    y <- Map(function(elt, len) {
        if (is.na(elt)) 
            return(integer())
        first <- seq(from = 1L, length.out = len, by = width)
        last <- seq(from = width, length.out = len, by = width)
        strtoi(substring(elt, first, last), 8L)
    }, x, attr(x, "lens"))
    names(y) <- names(x)
    class(y) <- unique(c(attr(x, ".classes"), "numeric_version"))
    y
}
