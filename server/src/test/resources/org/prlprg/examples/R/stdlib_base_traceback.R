#? stdlib
`traceback` <- function (x = NULL, max.lines = getOption("traceback.max.lines", 
    getOption("deparse.max.lines", -1L))) 
{
    n <- length(x <- .traceback(x, max.lines = max.lines))
    if (n == 0L) 
        cat(gettext("No traceback available"), "\n")
    else {
        for (i in 1L:n) {
            xi <- x[[i]]
            label <- paste0(n - i + 1L, ": ")
            m <- length(xi)
            srcloc <- if (!is.null(srcref <- attr(xi, "srcref"))) {
                srcfile <- attr(srcref, "srcfile")
                paste0(" at ", basename(srcfile$filename), "#", 
                  srcref[1L])
            }
            if (isTRUE(attr(xi, "truncated"))) {
                xi <- c(xi, " ...")
                m <- length(xi)
            }
            if (!is.null(srcloc)) {
                xi[m] <- paste0(xi[m], srcloc)
            }
            if (m > 1) 
                label <- c(label, rep(substr("          ", 1L, 
                  nchar(label, type = "w")), m - 1L))
            cat(paste0(label, xi), sep = "\n")
        }
    }
    invisible(x)
}

# Examples
foo <- function(x) { print(1); bar(2) }
bar <- function(x) { x + a.variable.which.does.not.exist }

## 2: bar(2)
## 1: foo(2)
bar
## Ah, this is the culprit ...

## This will print the stack trace at the time of the error.
options(error = function() traceback(3))

