#? stdlib
`.makeMlistFromTable` <- function (generic, where = NULL) 
{
    .MlistDefunct(".makeMlistFromTable()")
    if (is.null(where)) {
        what <- ".MTable"
        where <- environment(generic)
    }
    else {
        where <- as.environment(where)
        what <- .TableMetaName(generic@generic, generic@package)
    }
    if (exists(what, envir = where, inherits = FALSE)) 
        table <- get(what, envir = where)
    else table <- new.env()
    value <- new("MethodsList", argument = as.name(generic@signature[[1]]))
    allNames <- sort(names(table))
    if (length(allNames) == 0L) 
        return(value)
    argNames <- generic@signature
    nargs <- nchar(unique(gsub("[^#]", "", allNames))) + 1
    if (length(nargs) > 1L) {
        warning("something weird:  inconsistent number of args in methods table strings:", 
            paste(nargs, collapse = ", "), " (using the largest value)", 
            domain = NA)
        nargs <- max(nargs)
    }
    length(argNames) <- nargs
    if (nargs == 1) 
        .makeMlist1(as.name(argNames[[1L]]), mget(allNames, table))
    else .makeMlist2(argNames, mget(allNames, table))
}
