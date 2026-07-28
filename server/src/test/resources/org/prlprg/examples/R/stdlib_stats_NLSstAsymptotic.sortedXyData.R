#? stdlib
`NLSstAsymptotic.sortedXyData` <- function (xy) 
{
    xy$rt <- NLSstRtAsymptote(xy)
    setNames(coef(nls(y ~ cbind(1, 1 - exp(-exp(lrc) * x)), data = xy, 
        start = list(lrc = log(-coef(lm(log(abs(y - rt)) ~ x, 
            data = xy))[[2L]])), algorithm = "plinear"))[c(2, 
        3, 1)], c("b0", "b1", "lrc"))
}
