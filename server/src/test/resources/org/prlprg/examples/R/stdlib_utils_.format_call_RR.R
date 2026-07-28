#? stdlib
`.format_call_RR` <- function (cname, cargs) 
{
    cargs <- as.list(cargs)
    n <- length(cargs)
    lens <- lengths(cargs)
    sums <- cumsum(lens)
    starters <- c(sprintf("%s(", cname), rep.int(strrep(" ", 
        nchar(cname) + 1L), sums[n] - 1L))
    trailers <- c(rep.int("", sums[n] - 1L), ")")
    trailers[sums[-n]] <- ","
    sprintf("%s%s%s", starters, unlist(cargs), trailers)
}
