#? stdlib
`Ops.numeric_version` <- function (e1, e2) 
{
    if (nargs() == 1L) 
        stop(gettextf("unary '%s' not defined for \"numeric_version\" objects", 
            .Generic), domain = NA)
    boolean <- switch(.Generic, `<` = , `>` = , `==` = , `!=` = , 
        `<=` = , `>=` = TRUE, FALSE)
    if (!boolean) 
        stop(gettextf("'%s' not defined for \"numeric_version\" objects", 
            .Generic), domain = NA)
    if (!is.numeric_version(e1)) 
        e1 <- as.numeric_version(e1)
    if (!is.numeric_version(e2)) 
        e2 <- as.numeric_version(e2)
    op <- get(.Generic, mode = "function")
    op(.Internal(compareNumericVersion(e1, e2)), 0L)
}
