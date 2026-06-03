#? stdlib
`.ORCID_iD_is_alive` <- function (x) 
{
    urls <- sprintf("https://orcid.org/%s", x)
    hdrs <- list(Accept = "application/xml")
    resp <- .curl_multi_run_worker(urls, nobody = TRUE, hdrs = hdrs)
    vapply(resp, .curl_response_status_code, 0L) == 200L
}
