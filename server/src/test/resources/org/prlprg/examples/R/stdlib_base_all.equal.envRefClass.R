#? stdlib
`all.equal.envRefClass` <- function (target, current, ...) 
{
    if (!methods::is(target, "envRefClass")) 
        return("'target' is not an envRefClass")
    if (!methods::is(current, "envRefClass")) 
        return("'current' is not an envRefClass")
    if (!isTRUE(ae <- all.equal(class(target), class(current), 
        ...))) 
        return(sprintf("Classes differ: %s", paste(ae, collapse = " ")))
    getCl <- function(x) {
        cl <- tryCatch(x$getClass(), error = function(e) NULL)
        if (is.null(cl)) 
            class(x)
        else cl
    }
    if (!identical(cld <- getCl(target), c2 <- getCl(current))) {
        hasCA <- "check.attributes" %in% ...names()
        ae <- if (hasCA) 
            all.equal(cld, c2, ...)
        else all.equal(cld, c2, check.attributes = FALSE, ...)
        if (isTRUE(ae) && !hasCA) 
            ae <- all.equal(cld, c2, ...)
        return(sprintf("Class definitions are not identical%s", 
            if (isTRUE(ae)) "" else paste(":", ae, collapse = " ")))
    }
    if (!isS4(cld)) 
        return(if (identical(target, current)) TRUE else "different prototypical 'envRefClass' objects")
    flds <- names(cld@fieldClasses)
    asL <- function(O) sapply(flds, function(ch) O[[ch]], simplify = FALSE)
    n <- all.equal.list(asL(target), asL(current), ...)
    sns <- names(cld@slots)
    sns <- sns[sns != ".xData"]
    msg <- if (length(sns)) {
        L <- lapply(sns, function(sn) all.equal(methods::slot(target, 
            sn), methods::slot(current, sn), ...))
        unlist(L[vapply(L, is.character, NA)])
    }
    if (is.character(n)) 
        msg <- c(msg, n)
    if (is.null(msg)) 
        TRUE
    else msg
}
