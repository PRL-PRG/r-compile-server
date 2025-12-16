#? stdlib
`str2logical` <- function (x, na.ok = TRUE) 
{
    if (!is.character(x)) 
        x <- as.character(x)
    stopifnot(length(x) == 1L)
    if (na.ok && (is.na(x) || x == "NA")) 
        return(NA)
    if (!is.na(v <- as.logical(x))) 
        return(v)
    v <- tolower(x)
    if (v %in% c("1", "yes")) 
        TRUE
    else if (v %in% c("0", "no")) 
        FALSE
    else {
        warning(gettextf("cannot coerce %s to TRUE or FALSE", 
            sQuote(x)), domain = NA)
        NA
    }
}
