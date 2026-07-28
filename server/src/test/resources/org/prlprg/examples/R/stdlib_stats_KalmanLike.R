#? stdlib
`KalmanLike` <- function (y, mod, nit = 0L, update = FALSE) 
{
    x <- .Call(C_KalmanLike, y, mod, nit, FALSE, update)
    z <- list(Lik = 0.5 * (log(x[1L]) + x[2L]), s2 = x[1L])
    if (update) 
        attr(z, "mod") <- attr(x, "mod")
    z
}

# Examples
## an ARIMA fit
fit3 <- arima(presidents, c(3, 0, 0))
predict(fit3, 12)
## reconstruct this
pr <- KalmanForecast(12, fit3$model)
pr$pred + fit3$coef[4]
sqrt(pr$var * fit3$sigma2)
## and now do it year by year
mod <- fit3$model
for(y in 1:3) {
  pr <- KalmanForecast(4, mod, TRUE)
  print(list(pred = pr$pred + fit3$coef["intercept"], 
             se = sqrt(pr$var * fit3$sigma2)))
  mod <- attr(pr, "mod")
}

