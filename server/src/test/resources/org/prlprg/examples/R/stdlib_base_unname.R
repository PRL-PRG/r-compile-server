#? stdlib
`unname` <- function (obj, force = FALSE) 
{
    if (!is.null(names(obj))) 
        names(obj) <- NULL
    if (!is.null(dimnames(obj)) && (force || !is.data.frame(obj))) 
        dimnames(obj) <- NULL
    obj
}

# Examples
require(graphics); require(stats)

## Answering a question on R-help (14 Oct 1999):
col3 <- 750+ 100*rt(1500, df = 3)
breaks <- factor(cut(col3, breaks = 360+5*(0:155)))
z <- table(breaks)
z[1:5] # The names are larger than the data ...
barplot(unname(z), axes = FALSE)

