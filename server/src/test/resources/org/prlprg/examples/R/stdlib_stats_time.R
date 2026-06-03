#? stdlib
`time` <- function (x, ...) 
UseMethod("time")

# Examples
require(graphics)

cycle(presidents)
# a simple series plot
plot(as.vector(time(presidents)), as.vector(presidents), type = "l")

