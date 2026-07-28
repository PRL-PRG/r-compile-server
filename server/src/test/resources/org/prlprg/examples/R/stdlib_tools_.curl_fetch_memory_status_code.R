#? stdlib
`.curl_fetch_memory_status_code` <- function (u, verbose = FALSE, opts = NULL) 
{
    if (verbose) 
        message(sprintf("processing %s", u))
    if (is.null(opts)) 
        opts <- .curl_handle_default_opts
    timeout <- as.integer(getOption("timeout"))
    if (!is.na(timeout) && (timeout > 0L)) 
        opts <- c(opts, list(connecttimeout = timeout, timeout = timeout))
    h <- curl::new_handle()
    curl::handle_setopt(h, .list = opts)
    if (startsWith(u, "https://github.com") && nzchar(a <- Sys.getenv("GITHUB_PAT", 
        ""))) 
        curl::handle_setheaders(h, Authorization = paste("token", 
            a))
    g <- tryCatch(curl::curl_fetch_memory(u, handle = h), error = identity)
    .curl_response_status_code(g)
}
