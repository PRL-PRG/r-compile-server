#? stdlib
`.fetch_headers_via_curl` <- function (urls, verbose = FALSE, pool = NULL, nobody = TRUE) 
{
    out <- .curl_multi_run_worker(urls, nobody, verbose, pool)
    ind <- !vapply(out, inherits, NA, "error")
    if (any(ind)) 
        out[ind] <- lapply(out[ind], function(x) {
            y <- strsplit(rawToChar(x$headers), "(?<=\r\n)", 
                perl = TRUE)[[1L]]
            attr(y, "status") <- x$status_code
            y
        })
    out
}
