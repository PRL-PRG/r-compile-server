#? stdlib
`summary.packageStatus` <- function (object, ...) 
{
    Libs <- levels(object$inst$LibPath)
    Repos <- levels(object$avail$Repository)
    Libs <- lapply(split(object$inst, object$inst$LibPath), function(x) tapply(x$Package, 
        x$Status, function(x) sort(as.character(x)), simplify = FALSE))
    Repos <- lapply(split(object$avail, object$avail$Repository), 
        function(x) tapply(x$Package, x$Status, function(x) sort(as.character(x)), 
            simplify = FALSE))
    object$Libs <- Libs
    object$Repos <- Repos
    class(object) <- c("summary.packageStatus", "packageStatus")
    object
}
