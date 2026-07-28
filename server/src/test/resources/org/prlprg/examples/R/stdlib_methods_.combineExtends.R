#? stdlib
`.combineExtends` <- function (byExt, toExt, by, to, strictBy) 
{
    f <- toExt@coerce
    toExpr <- body(f)
    fBy <- byExt@coerce
    byExpr <- body(fBy)
    if (byExt@simple && toExt@simple) {
        expr <- (if (byExt@dataPart) 
            substitute({
                if (strict) from <- from@.Data
                EXPR
            }, list(EXPR = toExpr))
        else if (toExt@dataPart) 
            substitute({
                from <- EXPR
                if (strict) from@.Data
            }, list(EXPR = byExpr))
        else (if (identical(byExpr, quote(from)) && identical(toExpr, 
            quote(from))) 
            quote(from)
        else substitute({
            from <- E1
            E2
        }, list(E1 = byExpr, E2 = toExpr))))
        body(f, envir = environment(f)) <- expr
    }
    else {
        toExt@simple <- FALSE
        if (!identical(byExpr, quote(from))) 
            body(f, envir = environment(f)) <- substitute({
                from <- as(from, BY, strict = strict)
                TO
            }, list(BY = by, TO = toExpr))
    }
    toExt@coerce <- f
    f <- toExt@test
    toExpr <- body(f)
    byExpr <- body(byExt@test)
    if (!isTRUE(byExpr)) {
        if (!isTRUE(toExpr)) 
            body(f, envir = environment(f)) <- substitute((BY) && 
                (TO), list(BY = byExpr, TO = toExpr))
        else body(f, envir = environment(f)) <- byExpr
    }
    toExt@test <- f
    f <- byExt@replace
    byExpr <- body(f)
    if (!strictBy) {
        toDef <- getClassDef(to, package = packageSlot(toExt))
        byDef <- getClassDef(by, package = packageSlot(byExt))
        strictBy <- is.null(toDef) || is.null(byDef) || toDef@virtual || 
            byDef@virtual
    }
    if (isVirtualClass(by, .requirePackage(packageSlot(byExt)))) {
        skipDef <- getClassDef(by, package = packageSlot(byExt))
        skipExt <- skipDef@contains[[to]]
        if (!is.null(skipExt)) {
            body(f, envir = environment(f)) <- substitute(methods::as(BODY, 
                TO), list(BODY = body(skipExt@replace), TO = byExt@subClass))
        }
    }
    else {
        expr <- substitute({
            .value <- methods::as(from, BY, STRICT)
            methods::as(.value, TO) <- value
            value <- .value
            BYEXPR
        }, list(BY = by, TO = to, BYEXPR = byExpr, STRICT = strictBy))
        body(f, envir = environment(f)) <- expr
    }
    toExt@replace <- f
    toExt@by <- toExt@subClass
    toExt@subClass <- byExt@subClass
    toExt@distance <- toExt@distance + byExt@distance
    if (is(byExt, "conditionalExtension") && !is(toExt, "conditionalExtension")) 
        class(toExt) <- class(byExt)
    toExt@package <- byExt@package
    toExt
}
