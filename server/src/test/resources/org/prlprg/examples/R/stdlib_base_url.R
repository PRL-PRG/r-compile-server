#? stdlib
`url` <- function (description, open = "", blocking = TRUE, encoding = getOption("encoding"), 
    method = getOption("url.method", "default"), headers = NULL) 
{
    method <- match.arg(method, c("default", "internal", "libcurl", 
        "wininet"))
    if (!is.null(headers)) {
        nh <- names(headers)
        if (length(nh) != length(headers) || any(nh == "") || 
            anyNA(headers) || anyNA(nh)) 
            stop("'headers' must have names and must not be NA")
        headers <- paste0(nh, ": ", headers)
        headers <- list(headers, paste0(headers, "\r\n", collapse = ""))
    }
    .Internal(url(description, open, blocking, encoding, method, 
        headers))
}
