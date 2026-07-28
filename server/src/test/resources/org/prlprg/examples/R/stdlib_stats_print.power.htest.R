#? stdlib
`print.power.htest` <- function (x, digits = getOption("digits"), ...) 
{
    cat("\n    ", x$method, "\n\n")
    note <- x$note
    x[c("method", "note")] <- NULL
    cat(paste(format(names(x), width = 15L, justify = "right"), 
        format(x, digits = digits), sep = " = "), sep = "\n")
    if (!is.null(note)) 
        cat("\n", "NOTE: ", note, "\n\n", sep = "")
    else cat("\n")
    invisible(x)
}

# Examples
(ptt <- power.t.test(n = 20, delta = 1))
print(ptt, digits =  4) # using less digits than default
print(ptt, digits = 12) # using more  "       "     "

