#? stdlib
`weighted.mean` <- function (x, w, ...) 
UseMethod("weighted.mean")

# Examples
## GPA from Siegel 1994
wt <- c(5,  5,  4,  1)/15
x <- c(3.7,3.3,3.5,2.8)
xm <- weighted.mean(x, wt)

