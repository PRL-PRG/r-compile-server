#? stdlib
`.addAbnormalDataType` <- function (classes) 
{
    types <- match(classes, .AbnormalTypes, 0) > 0
    type = classes[types]
    if (length(type) == 0) 
        return(classes)
    if (length(type) > 1) 
        stop(gettextf("class definition cannot extend more than one of these data types: %s", 
            paste0("\"", type, "\"", collapse = ", ")), domain = NA)
    class <- .indirectAbnormalClasses[type]
    if (is.na(class)) 
        stop(gettextf("abnormal type %s is not supported as a superclass of a class definition", 
            dQuote(type)), domain = NA)
    c(class, classes[!types])
}
