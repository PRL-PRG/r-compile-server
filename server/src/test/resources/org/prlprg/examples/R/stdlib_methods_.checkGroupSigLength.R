#? stdlib
`.checkGroupSigLength` <- function (gnames, generics = lapply(gnames, getGeneric)) 
{
    funs <- gnames
    recall <- FALSE
    for (i in seq_along(gnames)) {
        what <- gnames[[i]]
        fdef <- generics[[i]]
        if (!is(fdef, "groupGenericFunction")) {
            warning(gettextf("trying to check signature length of group generic '%s', but it is not a group generic", 
                what), domain = NA)
            next
        }
        if (length(fdef@group)) {
            gnames[[i]] <- fdef@group
            generics[[i]] <- lapply(fdef@group, getGeneric)
            recall <- TRUE
            next
        }
        funs <- c(funs, getGroupMembers(fdef, TRUE, FALSE))
    }
    if (recall) 
        return(Recall(unlist(gnames, FALSE), unlist(generics, 
            FALSE)))
    funs <- unique(funs)
    fdefs <- lapply(funs, function(x) {
        if (is.character(x) && length(x) == 1L) 
            getGeneric(x)
        else x
    })
    sigs <- rep(0, length(funs))
    for (i in seq_along(sigs)) {
        what <- funs[[i]]
        fdef <- fdefs[[i]]
        if (is.null(fdef)) 
            next
        if (!is(fdef, "genericFunction")) 
            warning(gettextf("trying to check signature length of generic '%s', but it is not a generic function: i = %d, funs = %s, gnames = %s", 
                what, i, paste(unlist(funs), collapse = ", "), 
                paste(as.character(gnames), collapse = ", ")), 
                domain = NA)
        else {
            ev <- environment(fdef)
            if (is.null(sigl <- ev$.SigLength)) {
                .setupMethodsTables(fdef)
                sigl <- get(".SigLength", envir = ev)
            }
            sigs[i] <- sigl
        }
    }
    n <- max(sigs)
    reset <- sigs < n & sigs > 0
    if (any(reset)) {
        funs <- funs[reset]
        fdefs <- fdefs[reset]
        for (fdef in fdefs) {
            .resetSigLength(fdef, n)
        }
    }
    funs
}
