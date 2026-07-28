#? stdlib
`withAutoprint` <- function (exprs, evaluated = FALSE, local = parent.frame(), print. = TRUE, 
    echo = TRUE, max.deparse.length = Inf, width.cutoff = max(20, 
        getOption("width")), deparseCtrl = c("keepInteger", "showAttributes", 
        "keepNA"), skip.echo = 0, ...) 
{
    if (!evaluated) {
        exprs <- substitute(exprs)
        if (is.call(exprs)) {
            if (exprs[[1]] == quote(`{`)) {
                exprs <- as.list(exprs)[-1]
                if (missing(skip.echo) && is.list(srcrefs <- attr(exprs, 
                  "srcref"))) {
                  skip.echo <- srcrefs[[1L]][7L] - 1L
                }
            }
        }
    }
    source(exprs = exprs, local = local, print.eval = print., 
        echo = echo, max.deparse.length = max.deparse.length, 
        width.cutoff = width.cutoff, deparseCtrl = deparseCtrl, 
        skip.echo = skip.echo, ...)
}
