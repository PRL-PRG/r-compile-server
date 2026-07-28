#? stdlib
`format.check_dotInternal` <- function (x, ...) 
{
    out <- if (length(x$bad_closures)) {
        msg <- ngettext(length(x$bad_closures), "Found a .Internal call in the following function:", 
            "Found .Internal calls in the following functions:")
        out <- c(strwrap(msg), .pretty_format(x$bad_closures))
        if (length(unique(x$internals))) 
            out <- c(out, "with calls to .Internal functions", 
                .pretty_format(sort(unique(x$internals))))
        out
    }
    else character()
    if (length(x$bad_S4methods)) {
        msg <- ngettext(length(x$bad_S4methods), "Found a.Internal call in methods for the following S4 generic:", 
            "Found .Internal calls in methods for the following S4 generics:")
        out <- c(out, strwrap(msg), .pretty_format(x$bad_S4methods))
    }
    if (length(x$bad_refs)) {
        msg <- ngettext(length(x$bad_refs), "Found a .Internal call in methods for the following reference class:", 
            "Found .Internal calls in methods for the following reference classes:")
        out <- c(out, strwrap(msg), .pretty_format(x$bad_refs))
    }
    out
}
