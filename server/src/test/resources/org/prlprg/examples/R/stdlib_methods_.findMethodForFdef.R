#? stdlib
`.findMethodForFdef` <- function (signature, table, fdef = NULL) 
{
    value <- .findMethodInTable(signature, table, fdef)
    if (is.null(value) && is(fdef, "genericFunction")) {
        fullSig <- .matchSigLength(signature, fdef, environment(fdef), 
            FALSE)
        if (!identical(fullSig, signature)) 
            value <- .findMethodInTable(signature, table, fdef, 
                FALSE)
    }
    value
}
