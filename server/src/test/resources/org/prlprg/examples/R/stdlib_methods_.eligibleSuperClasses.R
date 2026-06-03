#? stdlib
`.eligibleSuperClasses` <- function (contains, simpleOnly) 
{
    what <- names(contains)
    if (!length(what)) 
        what
    else {
        eligible <- vapply(contains, if (simpleOnly) 
            function(x) (is.logical(x) && x) || x@simple
        else function(x) (is.logical(x) && x) || x@simple || 
            isTRUE(body(x@test)), NA)
        what[eligible]
    }
}
