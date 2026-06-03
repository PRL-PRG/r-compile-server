#? stdlib
`apropos` <- function (what, where = FALSE, ignore.case = TRUE, dot_internals = FALSE, 
    mode = "any") 
{
    stopifnot(is.character(what))
    x <- character(0L)
    check.mode <- mode != "any"
    for (i in seq_along(sp <- search())) {
        li <- if (ignore.case) 
            grep(what, ls(pos = i, all.names = TRUE), ignore.case = TRUE, 
                value = TRUE)
        else ls(pos = i, pattern = what, all.names = TRUE)
        li <- grep("^[.](__|C_|F_)", li, invert = TRUE, value = TRUE)
        if (!dot_internals && sp[i] == "package:base") 
            li <- li[!li %in% .dot_internals]
        if (length(li)) {
            if (check.mode) 
                li <- li[vapply(li, exists, NA, where = i, mode = mode, 
                  inherits = FALSE)]
            x <- c(x, if (where) structure(li, names = rep.int(i, 
                length(li))) else li)
        }
    }
    sort(x)
}
