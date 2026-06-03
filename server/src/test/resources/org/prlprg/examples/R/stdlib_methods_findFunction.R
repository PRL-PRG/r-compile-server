#? stdlib
`findFunction` <- function (f, generic = TRUE, where = topenv(parent.frame())) 
{
    allWhere <- .findAll(f, where)
    ok <- logical(length(allWhere))
    for (i in seq_along(allWhere)) {
        wherei <- allWhere[[i]]
        if (!is.null(fdef <- wherei[[f]])) {
            ok[i] <- is.function(fdef) && (generic || is.primitive(fdef) || 
                !isGeneric(f, wherei, fdef))
        }
    }
    allWhere[ok]
}
