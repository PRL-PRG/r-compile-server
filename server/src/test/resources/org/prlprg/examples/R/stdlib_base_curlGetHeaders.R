#? stdlib
`curlGetHeaders` <- function (url, redirect = TRUE, verify = TRUE, timeout = 0L, 
    TLS = "") 
.Internal(curlGetHeaders(url, redirect, verify, timeout, as.character(TLS)))

# Examples\donttest{## needs Internet access, results vary
curlGetHeaders("http://bugs.r-project.org")   ## this redirects to https://
## 2023-04: replaces slow and unreliable https://httpbin.org/status/404
curlGetHeaders("https://developer.R-project.org/inet-tests/not-found")
## returns status
}
