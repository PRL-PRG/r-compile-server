#? stdlib
`Ops.POSIXt` <- function (e1, e2) 
{
    if (nargs() == 1L) 
        stop(gettextf("unary '%s' not defined for \"POSIXt\" objects", 
            .Generic), domain = NA)
    boolean <- switch(.Generic, `<` = , `>` = , `==` = , `!=` = , 
        `<=` = , `>=` = TRUE, FALSE)
    if (!boolean) 
        stop(gettextf("'%s' not defined for \"POSIXt\" objects", 
            .Generic), domain = NA)
    if (inherits(e1, "POSIXlt") || is.character(e1)) 
        e1 <- as.POSIXct(e1)
    if (inherits(e2, "POSIXlt") || is.character(e2)) 
        e2 <- as.POSIXct(e2)
    .check_tzones(e1, e2)
    NextMethod(.Generic)
}
