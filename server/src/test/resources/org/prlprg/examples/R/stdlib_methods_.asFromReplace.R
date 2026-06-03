#? stdlib
`.asFromReplace` <- function (fromClass, toClass, ClassDef, where) 
{
    replaceMethod <- ClassDef@contains[[fromClass]]
    if (is(replaceMethod, "SClassExtension") && !identical(as(replaceMethod@replace, 
        "function"), .ErrorReplace)) {
        f <- function(from, to) NULL
        body(f, envir = where) <- substitute({
            obj <- new(TOCLASS)
            as(obj, FROMCLASS) <- from
            obj
        }, list(FROMCLASS = fromClass, TOCLASS = toClass))
        f
    }
    else NULL
}
