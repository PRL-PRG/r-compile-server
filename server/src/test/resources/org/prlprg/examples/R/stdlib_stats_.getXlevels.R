#? stdlib
`.getXlevels` <- function (Terms, m) 
{
    xvars <- vapply(attr(Terms, "variables"), deparse2, "")[-1L]
    if ((yvar <- attr(Terms, "response")) > 0) 
        xvars <- xvars[-yvar]
    if (length(xvars)) {
        xlev <- lapply(m[xvars], function(x) if (is.factor(x)) 
            levels(x)
        else if (is.character(x)) 
            levels(as.factor(x)))
        xlev[!vapply(xlev, is.null, NA)]
    }
}
