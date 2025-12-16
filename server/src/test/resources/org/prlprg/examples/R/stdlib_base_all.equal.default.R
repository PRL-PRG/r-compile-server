#? stdlib
`all.equal.default` <- function (target, current, ..., check.class = TRUE) 
{
    if (is.language(target)) 
        return(all.equal.language(target, current, ...))
    if (is.function(target)) {
        if ("function" %in% .class2(target)) 
            .Deprecated("all.equal(*)", old = "all.equal.default(<function>)")
        return(all.equal.function(target, current, ...))
    }
    if (is.environment(target) || is.environment(current)) 
        return(all.equal.environment(target, current, ...))
    if (is.recursive(target)) {
        return(if (typeof(target) == "..." && typeof(current) == 
            "...") {
            if (identical(target, current)) TRUE else if ((lt <- length(target)) != 
                (lc <- length(current))) paste0("\"...\"-typed\": lengths (", 
                lt, ", ", lc, ") differ") else if (xor(is.null(nt <- names(target)), 
                is.null(nc <- names(current)))) {
                paste0("\"...\"-typed: names in ", if (length(nt)) "target but not in current" else "current but not in target")
            } else if (!is.null(nt)) {
                nt <- sort(nt)
                nc <- sort(nc)
                if (identical(nt, nc)) TRUE else c("\"...\"-typed\": sorted names differ", 
                  all.equal.character(nt, nc, ...))
            } else "\"...\"-types of the same length, no names, but not identical"
        } else all.equal.list(target, current, ...))
    }
    msg <- switch(mode(target), integer = , complex = , numeric = all.equal.numeric(target, 
        current, ...), character = all.equal.character(target, 
        current, ...), logical = , raw = all.equal.raw(target, 
        current, ...), S4 = attr.all.equal(target, current, ...), 
        if (check.class && data.class(target) != data.class(current)) {
            gettextf("target is %s, current is %s", data.class(target), 
                data.class(current))
        } else NULL)
    if (is.null(msg)) 
        TRUE
    else msg
}
