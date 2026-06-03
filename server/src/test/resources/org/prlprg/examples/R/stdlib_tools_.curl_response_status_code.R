#? stdlib
`.curl_response_status_code` <- function (x) 
{
    if (inherits(x, "error")) 
        -1L
    else x$status_code
}
