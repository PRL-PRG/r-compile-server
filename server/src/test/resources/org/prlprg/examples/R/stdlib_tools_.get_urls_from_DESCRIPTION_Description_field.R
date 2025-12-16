#? stdlib
`.get_urls_from_DESCRIPTION_Description_field` <- function (v) 
{
    urls <- character()
    if (is.na(v)) 
        return(urls)
    pattern <- "<(URL: *)?((https?|ftp)://[^[:space:]]+)[[:space:]]*>"
    m <- gregexpr(pattern, v)
    urls <- c(urls, .gregexec_at_pos(pattern, v, m, 3L))
    regmatches(v, m) <- ""
    pattern <- "([^>\"?])((https?|ftp)://[[:alnum:]/.:@+\\_~%#?=&;,-]+[[:alnum:]/])"
    m <- gregexpr(pattern, v)
    urls <- c(urls, .gregexec_at_pos(pattern, v, m, 3L))
    regmatches(v, m) <- ""
    pattern <- "<([A-Za-z][A-Za-z0-9.+-]*:[^>]+)>"
    m <- gregexpr(pattern, v)
    urls <- c(urls, .gregexec_at_pos(pattern, v, m, 2L))
    urls
}
