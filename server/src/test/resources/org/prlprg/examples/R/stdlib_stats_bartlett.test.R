#? stdlib
`bartlett.test` <- function (x, ...) 
UseMethod("bartlett.test")

# Examples
require(graphics)

plot(count ~ spray, data = InsectSprays)
bartlett.test(InsectSprays$count, InsectSprays$spray)
bartlett.test(count ~ spray, data = InsectSprays)

