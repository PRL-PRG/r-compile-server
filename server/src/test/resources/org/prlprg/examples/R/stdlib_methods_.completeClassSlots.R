#? stdlib
`.completeClassSlots` <- function (ClassDef, where) 
{
    properties <- ClassDef@slots
    ext <- getAllSuperClasses(ClassDef, TRUE)
    if (length(ext)) {
        superProps <- vector("list", length(ext) + 1L)
        superProps[[1L]] <- properties
        for (i in seq_along(ext)) {
            eClass <- ext[[i]]
            if (isClass(eClass, where = where)) 
                superProps[[i + 1]] <- getClassDef(eClass, where = where)@slots
        }
        properties <- unlist(superProps, recursive = FALSE)
        if (anyDuplicated(allNames(properties))) {
            duped <- duplicated(names(properties))
            properties <- properties[!duped]
        }
    }
    undefClasses <- rep.int(FALSE, length(properties))
    for (i in seq_along(properties)) {
        cli <- properties[[i]]
        if (is.null(packageSlot(cli))) {
            cliDef <- getClassDef(cli, where)
            if (is.null(cliDef)) 
                undefClasses[[i]] <- TRUE
            else packageSlot(properties[[i]]) <- cliDef@package
        }
        else {
            cliDef <- getClassDef(cli)
            if (is.null(cliDef)) 
                undefClasses[[i]] <- TRUE
        }
    }
    if (any(undefClasses)) 
        warning(sprintf(gettext("undefined slot classes in definition of %s: %s", 
            domain = "R-methods"), .dQ(ClassDef@className), paste0(names(properties)[undefClasses], 
            gettextf("(class %s)", .dQ(unlist(properties, recursive = FALSE)[undefClasses])), 
            collapse = ", ")), call. = FALSE, domain = NA)
    ClassDef@slots <- properties
    ClassDef
}
