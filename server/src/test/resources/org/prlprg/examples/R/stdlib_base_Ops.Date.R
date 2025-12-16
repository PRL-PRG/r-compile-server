#? stdlib
`Ops.Date` <- function (e1, e2) 
{
    if (nargs() == 1L) 
        stop(gettextf("unary %s not defined for \"Date\" objects", 
            .Generic), domain = NA)
    boolean <- switch(.Generic, `<` = , `>` = , `==` = , `!=` = , 
        `<=` = , `>=` = TRUE, FALSE)
    if (!boolean) 
        stop(gettextf("%s not defined for \"Date\" objects", 
            .Generic), domain = NA)
    if (is.character(e1)) 
        e1 <- as.Date(e1)
    if (is.character(e2)) 
        e2 <- as.Date(e2)
    NextMethod(.Generic)
}

# Examples\donttest{
(z <- Sys.Date())
z + 10
z < c("2009-06-01", "2010-01-01", "2015-01-01")
}
