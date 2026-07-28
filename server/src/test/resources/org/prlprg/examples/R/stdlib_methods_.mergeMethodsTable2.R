#? stdlib
`.mergeMethodsTable2` <- function (table, newtable, envir, metaname) 
{
    old <- as.list(table, all.names = TRUE)
    mm <- 1
    for (what in old) {
        if (is(what, "MethodDefinition")) {
            mm <- length(what@defined)
            break
        }
    }
    new <- as.list(newtable, all.names = TRUE)
    canStore <- TRUE
    for (what in new) {
        if (is(what, "MethodDefinition") && length(what@defined) != 
            mm) {
            canStore <- FALSE
            break
        }
    }
    if (canStore) {
        list2env(new, table)
    }
    else {
        f <- gsub("^\\.__T__(.*):([^:]+)", "\\1", metaname)
        package <- gsub("^\\.__T__(.*):([^:]+(.*))", "\\2", metaname)
        generic <- getGeneric(f, TRUE, envir, package)
        .mergeMethodsTable(generic, table, newtable, TRUE)
    }
    table
}
