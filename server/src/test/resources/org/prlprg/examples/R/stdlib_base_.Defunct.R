#? stdlib
`.Defunct` <- function (new, package = NULL, msg) 
{
    fname <- as.character(sys.call(sys.parent())[[1L]])
    if (missing(msg)) {
        msg <- gettextf("'%s' is defunct.\n", fname[length(fname)])
        if (!missing(new)) 
            msg <- c(msg, gettextf("Use '%s' instead.\n", new))
        msg <- c(msg, if (!is.null(package)) gettextf("See help(\"Defunct\") and help(\"%s-defunct\").", 
            package) else gettext("See help(\"Defunct\")"))
    }
    else msg <- as.character(msg)
    msg <- paste(msg, collapse = "")
    if (missing(new)) 
        new <- NULL
    stop(errorCondition(msg, old = fname, new = new, package = package, 
        class = "defunctError", call = sys.call(sys.parent())))
}
