#? stdlib
`relevel` <- function (x, ref, ...) 
UseMethod("relevel")

# Examples
warpbreaks$tension <- relevel(warpbreaks$tension, ref = "M")
summary(lm(breaks ~ wool + tension, data = warpbreaks))

