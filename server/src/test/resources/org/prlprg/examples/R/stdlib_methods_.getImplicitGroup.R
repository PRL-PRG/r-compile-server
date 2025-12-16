#? stdlib
`.getImplicitGroup` <- function (name, where) 
{
    if (!is.null(tbl <- where[[.ImplicitGroupMetaName]])) {
        if (!is.null(r <- tbl[[name]])) 
            return(r)
    }
    list()
}
