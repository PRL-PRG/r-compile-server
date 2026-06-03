#? stdlib
`fitted.kmeans` <- function (object, method = c("centers", "classes"), ...) 
{
    method <- match.arg(method)
    if (method == "centers") 
        object$centers[object$cluster, , drop = FALSE]
    else object$cluster
}
