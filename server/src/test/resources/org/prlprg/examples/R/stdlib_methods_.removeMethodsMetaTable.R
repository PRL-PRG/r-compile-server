#? stdlib
`.removeMethodsMetaTable` <- function (generic, where) 
{
    tname <- .TableMetaName(generic@generic, generic@package)
    if (exists(tname, where, inherits = FALSE)) 
        rm(list = tname, pos = where)
}
