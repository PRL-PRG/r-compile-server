#? stdlib
`.S4OldClass` <- function (Class, prevClass, def, where, prevDef) 
{
    curDef <- getClassDef(Class, where)
    if (!is.null(prevDef)) {
        on.exit(.restoreClass(prevDef, where))
        removeClass(Class, where = where)
    }
    if (!identical(def@className, curDef@className)) 
        def <- .renameClassDef(def, curDef@className)
    .validS3Extends(def, curDef)
    def@slots[names(curDef@slots)] <- curDef@slots
    ext <- c(def@contains, curDef@contains)
    distOrder <- sort.list(vapply(ext, function(x) x@distance, 
        1))
    ext <- ext[distOrder]
    if (anyDuplicated(names(ext))) 
        ext <- .resolveSuperclasses(def, ext, where)
    def@contains <- ext
    oldSupers <- setdiff(names(def@contains), names(curDef@contains))
    addSubclass <- function(super) {
        superDef <- getClassDef(super, where)
        superWhere <- .findOrCopyClass(super, superDef, where, 
            "subclass")
        superDef@subclasses[[Class]] <- def@contains[[super]]
        assignClassDef(super, superDef, superWhere, TRUE)
    }
    lapply(oldSupers, addSubclass)
    subcls <- curDef@subclasses
    if (length(subcls) > 0) {
        def@subclasses[names(subcls)] <- subcls
    }
    proto <- def@prototype
    if (is.null(attr(proto, ".S3Class"))) {
        attr(proto, ".S3Class") <- if (.identC(prevClass, "oldClass")) 
            Class
        else S3Class(curDef@prototype)
        def@prototype <- proto
    }
    assignClassDef(Class, def, where = where)
    if (!extends(def, prevClass, maybe = FALSE)) 
        setIs(Class, prevClass, classDef = def, where = where)
    slotsMethod <- function(object) NULL
    body(slotsMethod) <- substitute({
        LIST
    }, list(LIST = def@slots))
    setMethod("slotsFromS3", Class, slotsMethod, where = where)
    if (!is.null(prevDef)) 
        on.exit()
}
