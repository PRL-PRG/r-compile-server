#? stdlib
`.mergeExportMethods` <- function (new, ns) 
{
    newMethods <- new[startsWith(new, ".__M__")]
    nsimports <- parent.env(ns)
    for (what in newMethods) {
        if (!is.null(m1 <- nsimports[[what]])) {
            m2 <- get(what, envir = ns)
            ns[[what]] <- methods::mergeMethods(m1, m2)
        }
    }
}
