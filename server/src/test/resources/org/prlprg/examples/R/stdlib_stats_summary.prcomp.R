#? stdlib
`summary.prcomp` <- function (object, ...) 
{
    chkDots(...)
    vars <- object$sdev^2
    vars <- vars/sum(vars)
    importance <- rbind(`Standard deviation` = object$sdev, `Proportion of Variance` = round(vars, 
        5), `Cumulative Proportion` = round(cumsum(vars), 5))
    k <- ncol(object$rotation)
    colnames(importance) <- c(colnames(object$rotation), rep("", 
        length(vars) - k))
    object$importance <- importance
    class(object) <- "summary.prcomp"
    object
}
