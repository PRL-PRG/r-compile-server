#? stdlib
`getGroupMembers` <- function (group, recursive = FALSE, character = TRUE) 
{
    .recMembers <- function(members, where) {
        all = vector("list", length(members))
        for (i in seq_along(members)) {
            what <- members[[i]]
            f <- getGeneric(what, FALSE, where)
            if (!is.null(f)) 
                all[[i]] <- what
            if (is(f, "groupGenericFunction")) {
                newMem <- f@groupMembers
                all <- c(all, Recall(newMem, where))
            }
        }
        all
    }
    f <- getGeneric(group)
    if (is.null(f)) {
        warning(gettextf("%s is not a generic function (or not visible here)", 
            sQuote(f)), domain = NA)
        return(character())
    }
    else if (!is(f, "groupGenericFunction")) 
        character()
    else {
        members <- f@groupMembers
        if (recursive) {
            where <- f@package
            if (identical(where, "base")) {
                where <- "methods"
                members <- .recMembers(members, .methodsNamespace)
            }
            else members <- .recMembers(members, .requirePackage(where))
        }
        if (character) 
            sapply(members, function(x) {
                if (is(x, "character")) 
                  x
                else if (is(x, "genericFunction")) 
                  x@generic
                else stop(gettextf("invalid element in the \"groupMembers\" slot (class %s)", 
                  dQuote(class(x))), domain = NA)
            })
        else members
    }
}
