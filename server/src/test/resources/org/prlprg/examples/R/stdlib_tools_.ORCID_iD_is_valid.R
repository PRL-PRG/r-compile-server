#? stdlib
`.ORCID_iD_is_valid` <- function (x) 
{
    one <- function(s) {
        if (!grepl(.ORCID_iD_variants_regexp, s)) 
            return(FALSE)
        s <- .ORCID_iD_canonicalize(s)
        s <- strsplit(gsub("-", "", s, fixed = TRUE), "")[[1L]]
        x <- as.numeric(s[-16L])
        t <- sum(x * 2^(15L:1L))
        rem <- t%%11
        res <- (12 - rem)%%11
        z <- if (res == 10) 
            "X"
        else as.character(res)
        z == s[16L]
    }
    vapply(x, one, NA)
}
