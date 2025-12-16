#? stdlib
`.S3Extends` <- function (ClassDef, exts, where) 
{
    superClasses <- names(exts)
    S3Class <- attr(ClassDef@prototype, ".S3Class")
    need <- S3Class[[1L]]
    for (i in seq_along(exts)) {
        exti <- exts[[i]]
        if (exti@distance == 1) 
            next
        what <- superClasses[[i]]
        whatDef <- getClassDef(what, package = packageSlot(exti))
        if (is.null(whatDef) || !isXS3Class(whatDef)) 
            next
        coerce <- exti@coerce
        body(coerce, environment(coerce)) <- body(.S3coerce)
        exti@coerce <- coerce
        replace <- exti@replace
        pos <- match(what, S3Class, 0L)
        if (pos > 1) 
            body(replace, environment(replace)) <- substituteDirect(.S3replace$e2, 
                list(CLASS = what, NEED = need))
        else body(replace, environment(replace)) <- substituteDirect(.S3replace$e1, 
            list(NEED = need))
        exti@replace <- replace
        exts[[i]] <- exti
    }
    exts
}
