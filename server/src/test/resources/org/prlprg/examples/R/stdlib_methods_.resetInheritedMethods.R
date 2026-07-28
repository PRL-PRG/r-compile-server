#? stdlib
`.resetInheritedMethods` <- function (fenv, mtable) 
{
    allObjects <- character()
    direct <- names(mtable)
    if (!is.null(allTable <- fenv$.AllMTable)) {
        allObjects <- names(allTable)
        remove(list = setdiff(allObjects, direct), envir = allTable)
    }
    else {
        allTable <- new.env(TRUE, fenv)
        assign(".AllMTable", allTable, envir = fenv)
    }
    if (anyNA(match(direct, allObjects))) {
        list2env(as.list(mtable, all.names = TRUE), allTable)
    }
    for (d in direct) {
        m <- allTable[[d]]
        if (is(m, "MethodWithNext")) 
            allTable[[d]] <- as(m, "MethodDefinition")
    }
    NULL
}
