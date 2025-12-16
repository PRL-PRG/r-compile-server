#? stdlib
`.uncompleteClassDefinition` <- function (ClassDef, slotName) 
{
    if (missing(slotName)) {
        ClassDef <- Recall(ClassDef, "contains")
        Recall(ClassDef, "subclasses")
    }
    else {
        prev <- slot(ClassDef, slotName)
        if (length(prev)) {
            indir <- vapply(prev, .isIndirectExtension, NA)
            slot(ClassDef, slotName) <- slot(ClassDef, slotName)[!indir]
        }
        ClassDef
    }
}
