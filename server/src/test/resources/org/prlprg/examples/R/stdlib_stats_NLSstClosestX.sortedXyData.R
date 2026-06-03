#? stdlib
`NLSstClosestX.sortedXyData` <- function (xy, yval) 
{
    deviations <- xy$y - yval
    if (any(deviations == 0)) 
        return(xy$x[match(0, deviations)])
    if (any(deviations <= 0)) {
        dev1 <- max(deviations[deviations <= 0])
        lim1 <- xy$x[match(dev1, deviations)]
        if (all(deviations <= 0)) 
            return(lim1)
    }
    if (any(deviations >= 0)) {
        dev2 <- min(deviations[deviations >= 0])
        lim2 <- xy$x[match(dev2, deviations)]
        if (all(deviations >= 0)) 
            return(lim2)
    }
    dev1 <- abs(dev1)
    dev2 <- abs(dev2)
    lim1 + (lim2 - lim1) * dev1/(dev1 + dev2)
}
