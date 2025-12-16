#? stdlib
`fligner.test` <- function (x, ...) 
UseMethod("fligner.test")

# Examples
require(graphics)

plot(count ~ spray, data = InsectSprays)
fligner.test(InsectSprays$count, InsectSprays$spray)
fligner.test(count ~ spray, data = InsectSprays)
## Compare this to bartlett.test()

