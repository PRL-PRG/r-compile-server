#? stdlib
`tsSmooth.StructTS` <- function (object, ...) 
{
    res <- KalmanSmooth(object$data, object$model0, -1)$smooth
    dn <- dim(fitted(object))
    res <- res[, 1L:dn[2L], drop = FALSE]
    dimnames(res) <- dimnames(fitted(object))
    ts(res, start = object$xtsp[1L], frequency = object$xtsp[3L])
}
