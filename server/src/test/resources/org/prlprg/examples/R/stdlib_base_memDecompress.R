#? stdlib
`memDecompress` <- function (from, type = c("unknown", "gzip", "bzip2", "xz", "none"), 
    asChar = FALSE) 
{
    type <- match(match.arg(type), c("none", "gzip", "bzip2", 
        "xz", "unknown"))
    ans <- .Internal(memDecompress(from, type))
    if (asChar) 
        rawToChar(ans)
    else ans
}
