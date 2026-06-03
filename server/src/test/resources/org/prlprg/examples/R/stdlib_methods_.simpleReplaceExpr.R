#? stdlib
`.simpleReplaceExpr` <- function (toDef) 
{
    toSlots <- names(toDef@slots)
    substitute({
        for (what in TOSLOTS) methods::slot(from, what) <- methods::slot(value, 
            what)
        from
    }, list(TOSLOTS = toSlots))
}
