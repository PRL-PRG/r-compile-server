#? stdlib
`tabulate` <- function (bin, nbins = max(1L, bin, na.rm = TRUE)) 
{
    if (!is.numeric(bin) && !is.factor(bin)) 
        stop("'bin' must be numeric or a factor")
    if (typeof(bin) != "integer") 
        bin <- as.integer(bin)
    if (nbins > .Machine$integer.max) 
        stop("attempt to make a table with >= 2^31 elements")
    nbins <- as.integer(nbins)
    if (is.na(nbins)) 
        stop(gettextf("invalid value of %s", "'nbins'"), domain = NA)
    .Internal(tabulate(bin, nbins))
}

# Examples
tabulate(c(2,3,5))
tabulate(c(2,3,3,5), nbins = 10)
tabulate(c(-2,0,2,3,3,5))  # -2 and 0 are ignored
tabulate(c(-2,0,2,3,3,5), nbins = 3)
tabulate(factor(letters[1:10]))

