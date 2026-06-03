#? stdlib
`.updateMethodsInTable` <- function (generic, where, attach) 
{
    fenv <- environment(generic)
    reset <- identical(attach, "reset")
    if (is.null(mtable <- fenv$.MTable)) {
        .setupMethodsTables(generic)
        mtable <- get(".MTable", envir = fenv)
    }
    if (!reset) {
        env <- as.environment(where)
        tname <- .TableMetaName(generic@generic, generic@package)
        if (!is.null(tt <- env[[tname]])) {
            .mergeMethodsTable(generic, mtable, tt, attach)
        }
    }
    if (length(generic@group)) {
        groups <- as.list(generic@group)
        generics <- vector("list", length(groups))
        for (i in seq_along(groups)) generics[[i]] <- getGeneric(groups[[i]])
        .checkGroupSigLength(groups, generics)
    }
    if (is(generic, "groupGenericFunction")) {
        .checkGroupSigLength(list(generic@generic), list(generic))
        for (g in getGroupMembers(generic)) .updateMethodsInTable(getGeneric(g), 
            where, attach)
    }
    .resetInheritedMethods(fenv, mtable)
    mtable
}
