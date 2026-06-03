#? stdlib
`.NotYetImplemented` <- function () 
stop(gettextf("'%s' is not implemented yet", as.character(sys.call(sys.parent())[[1L]])), 
    call. = FALSE)
