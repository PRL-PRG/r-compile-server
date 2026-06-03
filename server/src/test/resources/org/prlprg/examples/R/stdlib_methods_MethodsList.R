#? stdlib
`MethodsList` <- function (.ArgName, ...) 
{
    .MlistDefunct("MethodsList")
    value <- makeMethodsList(list(...))
    if (is.name(.ArgName)) {
    }
    else if (is.character(.ArgName) && length(.ArgName) == 1) 
        .ArgName <- as.name(.ArgName)
    else stop("invalid first argument: should be the name of the first argument in the dispatch")
    slot(value, "argument") <- .ArgName
    value
}
