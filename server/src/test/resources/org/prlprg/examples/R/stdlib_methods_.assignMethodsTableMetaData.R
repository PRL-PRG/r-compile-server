#? stdlib
`.assignMethodsTableMetaData` <- function (name, generic, where, table) 
{
    what <- .TableMetaName(generic@generic, generic@package)
    if (missing(table)) 
        table <- .copyEnv(.getMethodsTable(generic))
    assign(what, table, envir = as.environment(where))
}
