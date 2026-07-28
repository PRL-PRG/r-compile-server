#? stdlib
`generic.skeleton` <- function (name, fdef, fdefault) 
{
    anames <- formalArgs(fdef)
    skeleton <- lapply(as.list(c(name, anames)), as.name)
    dots <- match("...", anames)
    if (!is.na(dots) && dots < length(anames)) {
        anames[1L:dots] <- ""
        names(skeleton) <- c("", anames)
    }
    if (is.null(fdefault)) {
        fdefault <- fdef
        msg <- "invalid call in method dispatch to '%s' (no default method)"
        body(fdefault) <- substitute(stop(gettextf(MSG, NAME), 
            domain = NA), list(MSG = msg, NAME = name))
        environment(fdefault) <- baseenv()
    }
    skeleton[[1L]] <- fdefault
    as.call(skeleton)
}
