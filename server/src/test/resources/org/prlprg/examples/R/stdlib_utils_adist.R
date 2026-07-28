#? stdlib
`adist` <- function (x, y = NULL, costs = NULL, counts = FALSE, fixed = TRUE, 
    partial = !fixed, ignore.case = FALSE, useBytes = FALSE) 
{
    bytesToInt <- function(x) {
        if (is.na(x)) 
            return(NA_integer_)
        as.integer(charToRaw(x))
    }
    costs <- .amatch_costs(costs)
    nmx <- names(x)
    x <- as.character(x)
    names(x) <- nmx
    if (!is.null(y)) {
        nmy <- names(y)
        y <- as.character(y)
        names(y) <- nmy
    }
    if (!isFALSE(fixed) && !isTRUE(partial)) {
        ex <- Encoding(x)
        useBytes <- isTRUE(useBytes) || any(ex == "bytes")
        if (!is.null(y)) {
            ey <- Encoding(y)
            useBytes <- useBytes || any(ey == "bytes")
        }
        if (useBytes) {
            x <- lapply(x, bytesToInt)
            y <- if (is.null(y)) {
                x
            }
            else {
                lapply(y, bytesToInt)
            }
        }
        else {
            ignore.case <- isTRUE(ignore.case)
            x <- if (ignore.case) {
                lapply(tolower(enc2utf8(x)), utf8ToInt)
            }
            else {
                lapply(enc2utf8(x), utf8ToInt)
            }
            y <- if (is.null(y)) {
                x
            }
            else if (ignore.case) {
                lapply(tolower(enc2utf8(y)), utf8ToInt)
            }
            else {
                lapply(enc2utf8(y), utf8ToInt)
            }
        }
    }
    else {
        if (is.null(y)) {
            y <- x
        }
        costs <- as.integer(costs)
    }
    .Internal(adist(x, y, costs, counts, fixed, partial, ignore.case, 
        useBytes))
}

# Examples
## Cf. https://en.wikipedia.org/wiki/Levenshtein_distance
adist("kitten", "sitting")
## To see the transformation counts for the Levenshtein distance:
drop(attr(adist("kitten", "sitting", counts = TRUE), "counts"))
## To see the transformation sequences:
attr(adist(c("kitten", "sitting"), counts = TRUE), "trafos")

## Cf. the examples for agrep:
adist("lasy", "1 lazy 2")
## For a "partial approximate match" (as used for agrep):
adist("lasy", "1 lazy 2", partial = TRUE)

