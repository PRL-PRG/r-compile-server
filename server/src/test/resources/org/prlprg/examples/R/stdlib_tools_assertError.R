#? stdlib
`assertError` <- function (expr, classes = "error", verbose = FALSE) 
{
    d.expr <- .deparseTrim(substitute(expr), cutoff = 30L)
    tryCatch(res <- assertCondition(expr, classes, .exprString = d.expr), 
        error = function(e) stop(gettextf("Failed to get error in evaluating %s", 
            d.expr), call. = FALSE, domain = NA))
    if (verbose) {
        error <- res[vapply(res, function(cond) any(match(classes, 
            class(cond), 0L) > 0L), NA)]
        message(sprintf("Asserted error: %s", error[[1L]]$message), 
            domain = NA)
    }
    invisible(res)
}
