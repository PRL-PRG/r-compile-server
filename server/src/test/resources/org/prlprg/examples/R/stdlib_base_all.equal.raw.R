#? stdlib
`all.equal.raw` <- function (target, current, ..., check.attributes = TRUE) 
{
    if (!is.logical(check.attributes)) 
        stop(gettextf("'%s' must be logical", "check.attributes"), 
            domain = NA)
    msg <- if (check.attributes) 
        attr.all.equal(target, current, ...)
    if (data.class(target) != data.class(current)) {
        msg <- c(msg, paste0("target is ", data.class(target), 
            ", current is ", data.class(current)))
        return(msg)
    }
    lt <- length(target)
    lc <- length(current)
    if (lt != lc) {
        if (!is.null(msg)) 
            msg <- msg[-grep("\\bLengths\\b", msg)]
        msg <- c(msg, paste0("Lengths (", lt, ", ", lc, ") differ (comparison on first ", 
            ll <- min(lt, lc), " components)"))
        ll <- seq_len(ll)
        target <- target[ll]
        current <- current[ll]
    }
    nas <- is.na(target)
    nasc <- is.na(current)
    if (any(nas != nasc)) {
        msg <- c(msg, paste("'is.NA' value mismatch:", sum(nasc), 
            "in current", sum(nas), "in target"))
        return(msg)
    }
    ne <- !nas & (target != current)
    if (!any(ne) && is.null(msg)) 
        TRUE
    else if (sum(ne) == 1L) 
        c(msg, paste("1 element mismatch"))
    else if (sum(ne) > 1L) 
        c(msg, paste(sum(ne), "element mismatches"))
    else msg
}
