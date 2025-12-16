#? stdlib
`get_timeout` <- function (tlim) 
{
    if (is.character(tlim)) {
        if (endsWith(tlim, "m")) 
            tlim <- 60 * as.numeric(sub("m$", "", tlim))
        else if (endsWith(tlim, "h")) 
            tlim <- 3600 * as.numeric(sub("h$", "", tlim))
        else if (endsWith(tlim, "s")) 
            tlim <- as.numeric(sub("s$", "", tlim))
    }
    tlim <- as.numeric(tlim)
    if (is.na(tlim) || tlim < 0) 
        tlim <- 0
    tlim
}
