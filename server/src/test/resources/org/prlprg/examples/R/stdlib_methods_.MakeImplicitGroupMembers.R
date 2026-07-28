#? stdlib
`.MakeImplicitGroupMembers` <- function (group, members, where) 
{
    if (!exists(.ImplicitGroupMetaName, where, inherits = FALSE)) 
        assign(.ImplicitGroupMetaName, new.env(TRUE), where)
    tbl <- get(.ImplicitGroupMetaName, where)
    for (what in members) assign(what, as.list(group), envir = tbl)
    NULL
}
