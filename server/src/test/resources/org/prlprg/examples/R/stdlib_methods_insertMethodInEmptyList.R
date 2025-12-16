#? stdlib
`insertMethodInEmptyList` <- function (mlist, def) 
{
    .MlistDefunct("insertMethodInEmptyList()")
    value <- new("MethodsList", argument = mlist@argument)
    sublist <- mlist@sublist
    submethods <- sublist[[1L]]
    if (is.null(submethods)) 
        sublist[[1L]] <- def
    else sublist[[1L]] <- Recall(submethods, def)
    value@allMethods <- sublist
    value
}
