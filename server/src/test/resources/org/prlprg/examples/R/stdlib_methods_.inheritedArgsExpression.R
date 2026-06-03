#? stdlib
`.inheritedArgsExpression` <- function (target, defined, body) 
{
    expr <- substitute({
    }, list(DUMMY = ""))
    args <- names(defined)
    for (i in seq_along(defined)) {
        ei <- extends(setPackageSlot(target[[i]], packageSlot(target)[[i]]), 
            setPackageSlot(defined[[i]], packageSlot(defined)), 
            fullInfo = TRUE)
        if (is(ei, "SClassExtension") && !ei@simple) 
            expr[[length(expr) + 1L]] <- substitute(ARG <- as(ARG, 
                DEFINED, strict = FALSE), list(ARG = as.name(args[[i]]), 
                DEFINED = as.character(defined[[i]])))
    }
    if (length(expr) > 1L) {
        expr[length(expr) + 1L] <- list(body)
        expr
    }
    else NULL
}
