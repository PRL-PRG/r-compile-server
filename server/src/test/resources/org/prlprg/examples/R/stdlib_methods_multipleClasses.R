#? stdlib
`multipleClasses` <- function (details = FALSE) 
{
    classes <- as.list(.classTable, all.names = TRUE)
    dups <- Filter(is.list, classes)
    if (details) 
        dups
    else names(dups)
}
