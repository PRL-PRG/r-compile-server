#? stdlib
`as.Date.character` <- function (x, format, tryFormats = c("%Y-%m-%d", "%Y/%m/%d"), 
    optional = FALSE, ...) 
{
    charToDate <- function(x) {
        is.na(x) <- !nzchar(x)
        xx <- x[1L]
        if (is.na(xx)) {
            j <- 1L
            while (is.na(xx) && (j <- j + 1L) <= length(x)) xx <- x[j]
            if (is.na(xx)) 
                f <- "%Y-%m-%d"
        }
        if (is.na(xx)) 
            strptime(x, f)
        else {
            for (ff in tryFormats) if (!is.na(strptime(xx, ff, 
                tz = "GMT"))) 
                return(strptime(x, ff))
            if (optional) 
                as.Date.character(rep.int(NA_character_, length(x)), 
                  "%Y-%m-%d")
            else stop("character string is not in a standard unambiguous format")
        }
    }
    res <- if (missing(format)) 
        charToDate(x)
    else strptime(x, format, tz = "GMT")
    as.Date(res)
}
