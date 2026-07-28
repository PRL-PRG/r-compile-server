#? stdlib
`lines` <- function (x, ...) 
UseMethod("lines")

# Examples
# draw a smooth line through a scatter plot
plot(cars, main = "Stopping Distance versus Speed")
lines(stats::lowess(cars))

