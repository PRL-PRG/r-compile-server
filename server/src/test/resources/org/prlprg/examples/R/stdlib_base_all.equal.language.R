#? stdlib
`all.equal.language` <- function (target, current, ...) 
{
    mt <- mode(target)
    mc <- mode(current)
    if (mt == "expression" && mc == "expression") 
        return(all.equal.list(target, current, ...))
    ttxt <- paste(deparse(target), collapse = "\n")
    ctxt <- tryCatch(paste(deparse(current), collapse = "\n"), 
        error = function(e) NULL)
    msg <- c(if (mt != mc) paste0("Modes of target, current: ", 
        mt, ", ", mc), if (is.null(ctxt)) "current is not deparse()able" else if (ttxt != 
        ctxt) {
        if (pmatch(ttxt, ctxt, 0L)) "target is a subset of current" else if (pmatch(ctxt, 
            ttxt, 0L)) "current is a subset of target" else "target, current do not match when deparsed"
    })
    if (is.null(msg)) 
        TRUE
    else msg
}
