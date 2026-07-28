#? stdlib
`box` <- function (which = "plot", lty = "solid", ...) 
{
    which <- pmatch(which[1L], c("plot", "figure", "inner", "outer"))
    .External.graphics(C_box, which = which, lty = lty, ...)
    invisible()
}

# Examples
plot(1:7, abs(stats::rnorm(7)), type = "h", axes = FALSE)
axis(1, at = 1:7, labels = letters[1:7])
box(lty = '1373', col = 'red')

