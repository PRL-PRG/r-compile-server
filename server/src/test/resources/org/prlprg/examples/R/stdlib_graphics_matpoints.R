#? stdlib
`matpoints` <- function (x, y, type = "p", lty = 1:5, lwd = 1, pch = NULL, col = 1:6, 
    ...) 
matplot(x = x, y = y, type = type, lty = lty, lwd = lwd, pch = pch, 
    col = col, add = TRUE, ...)
