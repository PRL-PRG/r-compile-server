#? stdlib
`shorten.to.string` <- function (line, token) 
{
    if (FALSE) {
        ans <- regexpr(strsplit("token", ",", fixed = TRUE)[[1L]][1L], 
            line, fixed = TRUE)
        if (ans == -1L) 
            line
        else substr(line, 1L, ans + attr(ans, "match.length") - 
            1L)
    }
    else {
        substr(line, 1L, 1L)
    }
}
