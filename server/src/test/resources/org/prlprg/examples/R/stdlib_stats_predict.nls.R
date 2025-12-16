#? stdlib
`predict.nls` <- function (object, newdata, se.fit = FALSE, scale = NULL, df = Inf, 
    interval = c("none", "confidence", "prediction"), level = 0.95, 
    ...) 
{
    if (missing(newdata)) 
        return(as.vector(fitted(object)))
    if (!is.null(cl <- object$dataClasses)) 
        .checkMFClasses(cl, newdata)
    object$m$predict(newdata)
}

# Examples
od <- options(digits = 5)
require(graphics)

fm <- nls(demand ~ SSasympOrig(Time, A, lrc), data = BOD)
predict(fm)              # fitted values at observed times
## Form data plot and smooth line for the predictions
opar <- par(las = 1)
plot(demand ~ Time, data = BOD, col = 4,
     main = "BOD data and fitted first-order curve",
     xlim = c(0,7), ylim = c(0, 20) )
tt <- seq(0, 8, length.out = 101)
lines(tt, predict(fm, list(Time = tt)))
par(opar)
options(od)

