#? stdlib
`.ChangeFormals` <- function (def, defForArgs, msg = "<unidentified context>") 
{
    if (!is.function(def)) 
        stop(gettextf("trying to change the formal arguments in %s in an object of class %s; expected a function definition", 
            msg, dQuote(class(def))), domain = NA)
    if (!is.function(defForArgs)) 
        stop(gettextf("trying to change the formal arguments in %s, but getting the new formals from an object of class %s; expected a function definition", 
            msg, dQuote(class(def))), domain = NA)
    old <- formalArgs(def)
    new <- formalArgs(defForArgs)
    if (length(old) < length(new)) 
        stop(gettextf("trying to change the formal arguments in %s, but the number of existing arguments is less than the number of new arguments: (%s) vs (%s)", 
            msg, paste0("\"", old, "\"", collapse = ", "), paste0("\"", 
                new, "\"", collapse = ", ")), domain = NA)
    if (length(old) > length(new)) 
        warning(gettextf("trying to change the formal arguments in %s, but the number of existing arguments is greater than the number of new arguments (the extra arguments won't be used): (%s) vs (%s)", 
            msg, paste0("\"", old, "\"", collapse = ", "), paste0("\"", 
                new, "\"", collapse = ", ")), domain = NA)
    if (identical(old, new)) 
        return(def)
    dlist <- as.list(def)
    slist <- lapply(c(old, new), as.name)
    names(slist) <- c(new, old)
    vlist <- dlist
    for (i in seq_along(vlist)) vlist[[i]] <- do.call("substitute", 
        list(vlist[[i]], slist))
    dnames <- names(dlist)
    whereNames <- match(old, dnames)
    if (anyNA(whereNames)) 
        stop(gettextf("in changing formal arguments in %s, some of the old names are not in fact arguments: %s", 
            msg, paste0("\"", old[is.na(match(old, names(dlist)))], 
                "\"", collapse = ", ")), domain = NA)
    dnames[whereNames] <- new
    names(vlist) <- dnames
    as.function(vlist, envir = environment(def))
}
