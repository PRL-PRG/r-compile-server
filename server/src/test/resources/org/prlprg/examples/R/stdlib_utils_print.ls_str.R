#? stdlib
`print.ls_str` <- function (x, max.level = 1, give.attr = FALSE, ..., digits = max(1, 
    getOption("str")$digits.d)) 
{
    E <- attr(x, "envir")
    stopifnot(is.environment(E))
    M <- attr(x, "mode")
    args <- list(...)
    if (length(args) && "digits.d" %in% names(args)) {
        if (missing(digits)) 
            digits <- args$digits.d
        else warning("'digits' and 'digits.d' are both specified and the latter is not used")
        args$digits.d <- NULL
    }
    strargs <- c(list(max.level = max.level, give.attr = give.attr, 
        digits.d = digits), args)
    n. <- substr(tempfile("ls_str_", tmpdir = ""), 2L, 20L)
    for (nam in x) {
        cat(nam, ": ")
        eA <- sprintf("%s:%s", nam, n.)
        o <- tryCatch(get(nam, envir = E, mode = M), error = function(e) {
            attr(e, eA) <- TRUE
            e
        })
        if (inherits(o, "error") && isTRUE(attr(o, eA))) {
            cat(if (length(grep("missing|not found", o$message))) 
                "<missing>"
            else o$message, "\n", sep = "")
        }
        else {
            strO <- function(...) str(o, ...)
            do.call(strO, strargs, quote = is.call(o) || is.symbol(o))
        }
    }
    invisible(x)
}
