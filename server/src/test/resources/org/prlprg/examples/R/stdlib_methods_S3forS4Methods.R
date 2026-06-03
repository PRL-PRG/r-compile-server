#? stdlib
`S3forS4Methods` <- function (where, checkClasses = character()) 
{
    allClasses <- getClasses(where)
    if (length(checkClasses) > 0) 
        allClasses <- allClasses[match(allClasses, checkClasses, 
            0) > 0]
    if (length(allClasses) == 0) 
        return(allClasses)
    pattern <- paste0("([.]", allClasses, "$)", collapse = "|")
    allObjects <- names(where)
    allObjects <- allObjects[-grep("^[.][_][_]", allObjects)]
    allObjects <- grep(pattern, allObjects, value = TRUE)
    if (length(allObjects) > 0) {
        badMethods <- allObjects
        funs <- sub(pattern, "", badMethods)
        uniqueFuns <- unique(funs)
        uniqueFuns <- uniqueFuns[nzchar(uniqueFuns)]
        possible <- .checkGeneric(uniqueFuns, where)
        if (!any(possible)) 
            return(character())
        uniqueFuns <- uniqueFuns[possible]
        badMethods <- badMethods[match(funs, uniqueFuns, 0) > 
            0]
        allObjects <- badMethods
        attr(allObjects, "functions") <- uniqueFuns
    }
    allObjects
}
