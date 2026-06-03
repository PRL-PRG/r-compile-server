#? stdlib
`print.ts` <- function (x, calendar, ...) 
{
    x <- as.ts(x)
    Tsp <- tsp(x)
    if (is.null(Tsp)) {
        warning("series is corrupt, with no 'tsp' attribute")
        print(unclass(x), ...)
        return(invisible(x))
    }
    nn <- 1 + round((Tsp[2L] - Tsp[1L]) * Tsp[3L])
    if (NROW(x) != nn) {
        warning(gettextf("series is corrupt: length %d with 'tsp' implying %d", 
            NROW(x), nn), domain = NA, call. = FALSE)
        calendar <- FALSE
    }
    fr.x <- frequency(x)
    if (missing(calendar)) 
        calendar <- any(fr.x == c(4, 12)) && length(start(x)) == 
            2L
    if (!calendar) {
        if (fr.x != 1) 
            cat("Time Series:\nStart =", deparse(start(x)), "\nEnd =", 
                deparse(end(x)), "\nFrequency =", deparse(fr.x), 
                "\n")
        else cat("Time Series:\nStart =", format(tsp(x)[1L]), 
            "\nEnd =", format(tsp(x)[2L]), "\nFrequency =", deparse(fr.x), 
            "\n")
    }
    print(.preformat.ts(x, calendar, ...), quote = FALSE, right = TRUE, 
        ...)
    invisible(x)
}

# Examples
print(ts(1:10, frequency = 7, start = c(12, 2)), calendar = TRUE)

print(sunsp.1 <- window(sunspot.month, end=c(1756, 12)))
m <- .preformat.ts(sunsp.1) # a character matrix

