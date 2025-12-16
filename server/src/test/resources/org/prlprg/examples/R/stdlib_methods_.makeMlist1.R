#? stdlib
`.makeMlist1` <- function (arg, objects, j = 1) 
{
    .MlistDefunct(".makeMlist1()")
    mnames <- character(length(objects))
    for (i in seq_along(objects)) {
        what <- objects[[i]]
        if (is.primitive(what)) 
            sig <- "ANY"
        else sig <- what@defined
        mnames[[i]] <- (if (length(sig) < j) 
            "ANY"
        else sig[[j]])
    }
    names(objects) <- mnames
    new("MethodsList", argument = arg, methods = objects, allMethods = objects)
}
