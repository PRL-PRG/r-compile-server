#? stdlib
`KalmanForecast` <- function (n.ahead = 10L, mod, update = FALSE) 
.Call(C_KalmanFore, as.integer(n.ahead), mod, update)
