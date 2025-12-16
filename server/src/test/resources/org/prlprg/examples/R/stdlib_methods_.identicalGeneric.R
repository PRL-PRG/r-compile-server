#? stdlib
`.identicalGeneric` <- function (f1, f2, allow.extra.dots = FALSE) 
{
    gpString <- function(gp) {
        if (length(gp)) 
            paste(as.character(gp), collapse = ", ")
        else "<none>"
    }
    if (isFALSE(f2)) 
        return(gettext("original function is prohibited as a generic function"))
    if (!(is.function(f2) && is.function(f1))) 
        return(gettext("not both functions!"))
    if (!identical(class(f1), class(f2))) 
        return(sprintf("classes: %s, %s", .dQ(class(f1)), .dQ(class(f2))))
    if (!isS4(f1)) 
        return(gettextf("argument %s is not S4", deparse1(substitute(f1))))
    if (!isS4(f2)) 
        return(gettextf("argument %s is not S4", deparse1(substitute(f2))))
    f1d <- f1@.Data
    f2d <- f2@.Data
    if (!identical(formals(f1d), formals(f2d))) {
        a1 <- names(formals(f1d))
        a2 <- names(formals(f2d))
        if (identical(a1, a2)) 
            return(gettext("formal arguments differ (in default values?)"))
        else if (identical(c(a1, "..."), a2) && allow.extra.dots) {
        }
        else return(gettextf("formal arguments differ: (%s), (%s)", 
            paste(a1, collapse = ", "), paste(a2, collapse = ", ")))
    }
    if (!identical(f1@valueClass, f2@valueClass)) 
        return(gettextf("value classes differ: %s, %s", .dQ(gpString(f1@valueClass)), 
            .dQ(gpString(f2@valueClass))))
    if (!identical(body(utils::removeSource(f1d)), body(utils::removeSource(f2d)))) 
        return("function body differs")
    if (!identical(f1@signature, f2@signature)) 
        return(gettextf("signatures differ:  (%s), (%s)", paste(f1@signature, 
            collapse = ", "), paste(f2@signature, collapse = ", ")))
    if (!identical(f1@package, f2@package)) 
        return(gettextf("package slots  differ: %s, %s", .dQ(gpString(f1@package)), 
            .dQ(gpString(f2@package))))
    if (!identical(f1@group, f2@group)) {
        return(gettextf("groups differ: %s, %s", .dQ(gpString(f1@group)), 
            .dQ(gpString(f2@group))))
    }
    if (!identical(as.character(f1@generic), as.character(f2@generic))) 
        return(gettextf("generic names differ: %s, %s", .dQ(f1@generic), 
            .dQ(f2@generic)))
    TRUE
}
