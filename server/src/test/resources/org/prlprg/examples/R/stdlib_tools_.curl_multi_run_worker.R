#? stdlib
`.curl_multi_run_worker` <- function (urls, nobody = FALSE, verbose = FALSE, pool = NULL, 
    opts = NULL, hdrs = NULL) 
{
    .progress_bar <- function(length, msg = "") {
        bar <- new.env(parent = baseenv())
        if (is.null(length)) {
            length <- 0L
        }
        done <- fmt <- NULL
        bar$length <- length
        bar$done <- -1L
        digits <- trunc(log10(length)) + 1L
        bar$fmt <- paste0("\r", msg, "[ %", digits, "i / %", 
            digits, "i ]")
        bar$update <- function() {
            assign("done", inherits = TRUE, done + 1L)
            if (length <= 0L) {
                return()
            }
            if (done >= length) {
                cat("\r", strrep(" ", nchar(fmt)), "\r", sep = "", 
                  file = stderr())
            }
            else {
                cat(sprintf(fmt, done, length), sep = "", file = stderr())
            }
        }
        environment(bar$update) <- bar
        bar$update()
        bar
    }
    if (is.null(pool)) 
        pool <- curl::new_pool()
    if (is.null(opts)) 
        opts <- .curl_handle_default_opts
    opts <- c(opts, list(nobody = nobody))
    timeout <- as.integer(getOption("timeout"))
    if (!is.na(timeout) && (timeout > 0L)) 
        opts <- c(opts, list(connecttimeout = timeout, timeout = timeout))
    if (is.null(hdrs)) 
        hdrs <- .curl_handle_default_hdrs
    bar <- .progress_bar(if (verbose) 
        length(urls), msg = "fetching ")
    out <- vector("list", length(urls))
    for (i in seq_along(out)) {
        u <- urls[[i]]
        h <- curl::new_handle(url = u)
        curl::handle_setopt(h, .list = opts)
        if (length(hdrs)) 
            curl::handle_setheaders(h, .list = hdrs)
        if (grepl("^https?://github[.]com", u) && nzchar(a <- Sys.getenv("GITHUB_PAT", 
            ""))) {
            curl::handle_setheaders(h, Authorization = paste("token", 
                a))
        }
        handle_result <- local({
            i <- i
            function(x) {
                out[[i]] <<- x
                bar$update()
            }
        })
        handle_error <- local({
            i <- i
            function(x) {
                out[[i]] <<- structure(list(message = x), class = c("curl_error", 
                  "error", "condition"))
                bar$update()
            }
        })
        curl::multi_add(h, done = handle_result, fail = handle_error, 
            pool = pool)
    }
    curl::multi_run(pool = pool)
    out
}
