#? stdlib
`.fetch_headers_via_base` <- function (urls, verbose = FALSE, ids = urls) 
Map(function(u, verbose, i) {
    if (verbose) 
        message(sprintf("processing %s", i))
    tryCatch(curlGetHeaders(u), error = identity)
}, urls, verbose, ids)
