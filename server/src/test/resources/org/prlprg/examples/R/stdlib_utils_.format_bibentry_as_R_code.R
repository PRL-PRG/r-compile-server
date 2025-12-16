#? stdlib
`.format_bibentry_as_R_code` <- function (x, collapse = FALSE) 
{
    if (!length(x)) 
        return("bibentry()")
    x$.index <- NULL
    anames <- bibentry_attribute_names
    manames <- c("mheader", "mfooter")
    f <- function(e) {
        if (inherits(e, "person")) 
            .format_person_as_R_code(e)
        else deparse(e)
    }
    g <- function(u, v) {
        prefix <- sprintf("%s = ", u)
        n <- length(v)
        if (n > 1L) 
            prefix <- c(prefix, rep.int(strrep(" ", nchar(prefix)), 
                n - 1L))
        sprintf("%s%s", prefix, v)
    }
    s <- lapply(unclass(x), function(e) {
        a <- Filter(length, attributes(e)[anames])
        e <- e[!vapply(e, is.null, NA)]
        ind <- !is.na(match(names(e), c(anames, manames, "other")))
        if (any(ind)) {
            other <- paste(names(e[ind]), sapply(e[ind], f), 
                sep = " = ")
            other <- Map(g, names(e[ind]), sapply(e[ind], f))
            other <- .format_call_RR("list", other)
            e <- e[!ind]
        }
        else {
            other <- NULL
        }
        c(Map(g, names(a), sapply(a, deparse)), Map(g, names(e), 
            sapply(e, f)), if (length(other)) list(g("other", 
            other)))
    })
    if (!is.null(mheader <- attr(x, "mheader"))) 
        s[[1L]] <- c(s[[1L]], paste("mheader =", deparse(mheader)))
    if (!is.null(mfooter <- attr(x, "mfooter"))) 
        s[[1L]] <- c(s[[1L]], paste("mfooter =", deparse(mfooter)))
    s <- Map(.format_call_RR, "bibentry", s)
    if (collapse && (length(s) > 1L)) 
        paste(.format_call_RR("c", s), collapse = "\n")
    else unlist(lapply(s, paste, collapse = "\n"), use.names = FALSE)
}
