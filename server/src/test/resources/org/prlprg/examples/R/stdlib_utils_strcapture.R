#? stdlib
`strcapture` <- function (pattern, x, proto, perl = FALSE, useBytes = FALSE) 
{
    m <- regexec(pattern, x, perl = perl, useBytes = useBytes)
    str <- regmatches(x, m)
    ntokens <- length(proto) + 1L
    nomatch <- lengths(str) == 0L
    str[nomatch] <- list(rep.int(NA_character_, ntokens))
    if (length(str) > 0L && length(str[[1L]]) != ntokens) {
        stop("The number of captures in 'pattern' != 'length(proto)'")
    }
    mat <- matrix(as.character(unlist(str)), ncol = ntokens, 
        byrow = TRUE)[, -1L, drop = FALSE]
    conformToProto(mat, proto)
}

# Examples
x <- "chr1:1-1000"
pattern <- "(.*?):([[:digit:]]+)-([[:digit:]]+)"
proto <- data.frame(chr=character(), start=integer(), end=integer())
strcapture(pattern, x, proto)

