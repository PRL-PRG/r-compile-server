#? stdlib
`strslice` <- function (x, split, proto, fixed = FALSE, perl = FALSE, useBytes = FALSE) 
{
    str <- strsplit(x, split, fixed = fixed, perl = perl, useBytes = useBytes)
    ntokens <- length(proto)
    if (length(str) > 0L) {
        if (length(str[[1L]]) != ntokens) {
            stop("The number of tokens != 'length(proto)'")
        }
        else if (length(unique(lengths(str))) > 1L) {
            stop("The number of tokens is not consistent across 'x'")
        }
    }
    mat <- matrix(as.character(unlist(str)), ncol = ntokens, 
        byrow = TRUE)
    conformToProto(mat, proto)
}
