#? stdlib
`check_screen_device` <- function (where = "screen devices") 
{
    check <- Sys.getenv("_R_CHECK_SCREEN_DEVICE_", "")
    msg <- sprintf("%s should not be used in examples etc", where)
    if (identical(check, "stop")) 
        stop(msg, domain = NA)
    else if (identical(check, "warn")) 
        warning(msg, immediate. = TRUE, noBreaks. = TRUE, domain = NA)
}
