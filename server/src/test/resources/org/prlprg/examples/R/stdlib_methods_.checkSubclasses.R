#? stdlib
`.checkSubclasses` <- function (class, def, class2, def2, where) 
{
    where <- as.environment(where)
    subs <- def@subclasses
    subNames <- names(subs)
    extDefs <- def2@subclasses
    for (i in seq_along(subs)) {
        what <- subNames[[i]]
        if (.identC(what, class2)) 
            next
        cname <- classMetaName(what)
        cpkg <- packageSlot(subs[[i]]@subClass)
        subclassIsLocal <- identical(cpkg, packageSlot(def))
        if (!subclassIsLocal) {
            if (is(def2, "ClassUnionRepresentation")) 
                next
            warning(gettextf(paste("From .checkSubclasses(): subclass %s (of package %s) is not local to superclass %s (of package %s), which is not a class union, so inheritance information will be lost."), 
                .dQ(what), .dQ(cpkg), .dQ(class2), .dQ(packageSlot(def)), 
                domain = NA))
            cwhere <- .requirePackage(cpkg)
        }
        else {
            cwhere <- where
        }
        subDef <- get(cname, envir = cwhere, inherits = FALSE)
        extension <- extDefs[[what]]
        if (is.null(extension)) 
            warning(gettextf("no definition of inheritance from %s to %s, though the relation was implied by the setIs() from %s", 
                .dQ(what), .dQ(def2@className), .dQ(class)), 
                call. = FALSE, domain = NA)
        else if (is.na(match(class2, names(subDef@contains)))) {
            if (isTRUE(as.logical(Sys.getenv("_R_METHODS_SHOW_CHECKSUBCLASSES", 
                "false")))) 
                message(sprintf(paste("Debugging .checkSubclasses(): assignClassDef(what=\"%s\", *, where=%s, force=TRUE);\n", 
                  "E := environment(): %s; parent.env(E): %s"), 
                  what, format(cwhere), format(E <- environment()), 
                  format(parent.env(E))))
            subDef@contains[[class2]] <- extension
            assignClassDef(what, subDef, cwhere, TRUE)
        }
    }
    NULL
}
