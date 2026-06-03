#? stdlib
`.findMethodInTable` <- function (signature, table, fdef = NULL, expdSig = TRUE) 
{
    if (is(fdef, "genericFunction") && expdSig) 
        signature <- .matchSigLength(signature, fdef, environment(fdef), 
            FALSE)
    label <- .sigLabel(signature)
    if (!is.null(value <- table[[label]])) {
        if (is.environment(value)) {
            pkgs <- names(value)
            if (length(pkgs) == 1) 
                value <- value[[pkgs]]
            else if (length(pkgs) == 0) 
                value <- NULL
        }
        value
    }
}
