#? stdlib
`.addS3Class` <- function (class, prototype, contains, where) 
{
    for (what in contains) {
        whatDef <- getClassDef(what@superClass, package = packageSlot(what))
        if (isXS3Class(whatDef)) 
            class <- c(class, attr(whatDef@prototype, ".S3Class"))
    }
    attr(prototype, ".S3Class") <- unique(class)
    prototype
}
