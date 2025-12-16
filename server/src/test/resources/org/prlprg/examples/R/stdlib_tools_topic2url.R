#? stdlib
`topic2url` <- function (x) 
{
    if (config_val_to_logical(Sys.getenv("_R_HELP_USE_URLENCODE_", 
        "FALSE"))) 
        utils::URLencode(x, reserved = TRUE)
    else vapply(x, urlify, "", reserved = TRUE)
}
