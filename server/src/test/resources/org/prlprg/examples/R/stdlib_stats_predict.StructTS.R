#? stdlib
`predict.StructTS` <- function (object, n.ahead = 1L, se.fit = TRUE, ...) 
{
    xtsp <- object$xtsp
    z <- KalmanForecast(n.ahead, object$model)
    pred <- ts(z[[1L]], start = xtsp[2L] + 1/xtsp[3L], frequency = xtsp[3L])
    if (se.fit) {
        se <- ts(sqrt(z[[2L]]), start = xtsp[2L] + 1/xtsp[3L], 
            frequency = xtsp[3L])
        return(list(pred = pred, se = se))
    }
    else return(pred)
}
