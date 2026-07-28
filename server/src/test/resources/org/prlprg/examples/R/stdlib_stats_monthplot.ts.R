#? stdlib
`monthplot.ts` <- function (x, labels = NULL, times = time(x), phase = cycle(x), 
    ylab = deparse1(substitute(x)), ...) 
{
    if (is.null(labels)) {
        if (missing(phase)) {
            f <- frequency(x)
            labels <- if (f == 4) 
                paste0("Q", 1L:4L)
            else if (f == 12) 
                c("J", "F", "M", "A", "M", "J", "J", "A", "S", 
                  "O", "N", "D")
            else 1L:f
        }
        else return(monthplot.default(x, times = times, phase = phase, 
            ylab = ylab, ...))
    }
    monthplot.default(x, labels = labels, times = times, phase = phase, 
        ylab = ylab, ...)
}
