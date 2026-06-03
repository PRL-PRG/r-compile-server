#? stdlib
`diff` <- function (x, ...) 
UseMethod("diff")

# Examples
diff(1:10, 2)
diff(1:10, 2, 2)
x <- cumsum(cumsum(1:10))
diff(x, lag = 2)
diff(x, differences = 2)

diff(.leap.seconds)
## allows to pass units via ... to difftime()
diff(.leap.seconds, units = "weeks") 
diff(as.Date(.leap.seconds), units = "weeks")

