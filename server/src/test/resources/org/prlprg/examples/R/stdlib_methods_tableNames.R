#? stdlib
`tableNames` <- function (generic, where, table) 
{
    fdef <- getGeneric(generic)
    if (missing(table)) 
        table <- if (missing(where)) 
            .getMethodsTable(fdef)
        else get(.TableMetaName(fdef@generic, fdef@package), 
            envir = as.environment(where), inherits = FALSE)
    names(table)
}
