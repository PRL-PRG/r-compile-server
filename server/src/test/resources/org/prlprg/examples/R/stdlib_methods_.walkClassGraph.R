#? stdlib
`.walkClassGraph` <- function (ClassDef, slotName, where, conflicts = character()) 
{
    ext <- slot(ClassDef, slotName)
    if (length(ext) == 0) 
        return(ext)
    className <- ClassDef@className
    superClassCase <- identical(slotName, "contains")
    what <- names(ext)
    for (i in seq_along(ext)) {
        by <- what[[i]]
        if (isClass(by, where = packageSlot(ext[[i]]))) {
            byDef <- getClassDef(by, package = packageSlot(ext[[i]]))
            exti <- slot(byDef, slotName)
            coni <- attr(exti, "conflicts")
            if (superClassCase && length(coni) > 0) {
                conflicts <- unique(c(conflicts, coni))
            }
            exti <- exti[is.na(match(names(exti), what))]
            if (length(exti)) {
                if (superClassCase) {
                  strictBy <- TRUE
                  exti <- .transitiveExtends(className, by, ext[[i]], 
                    exti, strictBy)
                }
                else {
                  strictBy <- TRUE
                  exti <- .transitiveSubclasses(by, className, 
                    ext[[i]], exti, strictBy)
                }
                ext <- c(ext, exti)
            }
        }
        else stop(gettextf("the '%s' list for class %s, includes an undefined class %s", 
            if (superClassCase) 
                "superClass"
            else "subClass", dQuote(className), dQuote(.className(by))), 
            domain = NA)
    }
    what <- names(ext)
    if (!all(is.na(match(what, className)))) {
        ok <- is.na(match(what, className))
        for (i in seq_along(what)[!ok]) {
            exti <- ext[[i]]
            if (!is(exti, "conditionalExtension")) {
                if (superClassCase) {
                  whatError <- "contain itself"
                }
                else {
                  whatError <- "have itself as a subclass"
                }
                stop(sprintf("class %s may not %s: it contains class %s, with a circular relation back to %s", 
                  dQuote(className), whatError, dQuote(exti@by), 
                  dQuote(className)), domain = NA)
            }
        }
        ext <- ext[ok]
    }
    distOrder <- sort.list(vapply(ext, function(x) x@distance, 
        1))
    ext <- ext[distOrder]
    if (superClassCase && (anyDuplicated(what) || length(conflicts) > 
        0)) 
        ext <- .resolveSuperclasses(ClassDef, ext, where, conflicts)
    ext
}
