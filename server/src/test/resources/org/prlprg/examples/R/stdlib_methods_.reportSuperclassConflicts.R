#? stdlib
`.reportSuperclassConflicts` <- function (className, ext, where) 
{
    what <- names(ext)
    conflicts <- character()
    for (i in seq_along(ext)) {
        by <- what[[i]]
        wherei <- packageSlot(ext[[i]])
        if (identical(ext[[i]]@distance, 1) && isClass(by, where = wherei)) {
            byDef <- getClassDef(by, package = wherei)
            exti <- byDef@contains
            coni <- attr(exti, "conflicts")
            if (length(coni) > 0) {
                warning(gettextf("class %s is inheriting an inconsistent superclass structure from class %s, inconsistent with %s", 
                  .dQ(className), .dQ(by), paste(.dQ(coni), collapse = ", ")), 
                  call. = FALSE, domain = NA)
                conflicts <- unique(c(conflicts, coni))
            }
        }
    }
    newconflicts <- attr(ext, "conflicts")
    if (length(newconflicts) > length(conflicts)) 
        warning(gettextf("unable to find a consistent ordering of superclasses for class %s: order chosen is inconsistent with the superclasses of %s", 
            .dQ(className), paste(.dQ(setdiff(newconflicts, conflicts)), 
                collapse = ", ")), call. = FALSE, domain = NA)
}
