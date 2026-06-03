#? stdlib
`format.check_depdef` <- function (x, ...) 
{
    out <- if (length(x$bad_closures)) {
        msg <- ngettext(length(x$bad_closures), "Found an obsolete/platform-specific call in the following function:", 
            "Found an obsolete/platform-specific call in the following functions:")
        c(strwrap(msg), .pretty_format(x$bad_closures))
    }
    else character()
    if (length(x$bad_S4methods)) {
        msg <- ngettext(length(x$bad_S4methods), "Found an obsolete/platform-specific call in methods for the following S4 generic:", 
            "Found an obsolete/platform-specific call in methods for the following S4 generics:")
        out <- c(out, strwrap(msg), .pretty_format(x$bad_S4methods))
    }
    if (length(x$bad_refs)) {
        msg <- ngettext(length(x$bad_refs), "Found an obsolete/platform-specific call in methods for the following reference class:", 
            "Found an obsolete/platform-specific call in methods for the following reference classes:")
        out <- c(out, strwrap(msg), .pretty_format(x$bad_refs))
    }
    if (length(x$deprecated)) {
        msg <- ngettext(length(x$deprecated), "Found the deprecated function:", 
            "Found the deprecated functions:")
        out <- c(out, strwrap(msg), .pretty_format(x$deprecated))
    }
    if (length(x$defunct)) {
        msg <- ngettext(length(x$defunct), "Found the defunct/removed function:", 
            "Found the defunct/removed functions:")
        out <- c(out, strwrap(msg), .pretty_format(x$defunct))
    }
    if (length(x$devices)) {
        msg <- ngettext(length(x$devices), "Found the platform-specific device:", 
            "Found the platform-specific devices:")
        out <- c(out, strwrap(msg), .pretty_format(x$devices), 
            strwrap(paste("dev.new() is the preferred way to open a new device,", 
                "in the unlikely event one is needed.", collapse = " ")))
    }
    out
}
