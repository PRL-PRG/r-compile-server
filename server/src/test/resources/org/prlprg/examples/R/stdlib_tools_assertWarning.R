#? stdlib
`assertWarning` <- function (expr, classes = "warning", verbose = FALSE) 
{
    d.expr <- .deparseTrim(substitute(expr), cutoff = 30L)
    res <- assertCondition(expr, classes, .exprString = d.expr)
    if (any(vapply(res, function(cond) "error" %in% class(cond), 
        NA))) 
        stop(gettextf("Got warning in evaluating %s, but also an error", 
            d.expr), domain = NA)
    if (verbose) {
        warning <- res[vapply(res, function(cond) any(match(classes, 
            class(cond), 0L) > 0L), NA)]
        message(sprintf("Asserted warning: %s", warning[[1L]]$message), 
            domain = NA)
    }
    invisible(res)
}
