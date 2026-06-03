#? stdlib
`.ImplicitGenericsTable` <- function (where) 
{
    if (!exists(.ImplicitGenericsMetaName, where, inherits = FALSE)) 
        assign(.ImplicitGenericsMetaName, new.env(TRUE), where)
    get(.ImplicitGenericsMetaName, where)
}
