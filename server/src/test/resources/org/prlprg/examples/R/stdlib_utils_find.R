#? stdlib
`find` <- function (what, mode = "any", numeric = FALSE, simple.words = TRUE) 
{
    stopifnot(is.character(what))
    if (length(what) > 1L) {
        warning("elements of 'what' after the first will be ignored")
        what <- what[1L]
    }
    len.s <- length(sp <- search())
    ind <- logical(len.s)
    check.mode <- mode != "any"
    for (i in 1L:len.s) {
        if (simple.words) {
            found <- what %in% ls(pos = i, all.names = TRUE)
            if (found && check.mode) 
                found <- exists(what, where = i, mode = mode, 
                  inherits = FALSE)
            ind[i] <- found
        }
        else {
            li <- ls(pos = i, pattern = what, all.names = TRUE)
            li <- grep("^[.](__|C_|F_)", li, invert = TRUE, value = TRUE)
            if (sp[i] == "package:base") 
                li <- li[!li %in% .dot_internals]
            ll <- length(li)
            if (ll > 0 && check.mode) {
                mode.ok <- vapply(li, exists, NA, where = i, 
                  mode = mode, inherits = FALSE)
                ll <- sum(mode.ok)
                if (ll >= 2) 
                  warning(sprintf(ngettext(ll, "%d occurrence in %s", 
                    "%d occurrences in %s"), ll, sp[i]), domain = NA)
            }
            ind[i] <- ll > 0L
        }
    }
    if (numeric) 
        structure(which(ind), names = sp[ind])
    else sp[ind]
}
