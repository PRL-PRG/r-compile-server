#? stdlib
`curlGetHeaders` <- function (url, redirect = TRUE, verify = TRUE, timeout = 0L, 
    TLS = "") 
.Internal(curlGetHeaders(url, redirect, verify, timeout, as.character(TLS)))
