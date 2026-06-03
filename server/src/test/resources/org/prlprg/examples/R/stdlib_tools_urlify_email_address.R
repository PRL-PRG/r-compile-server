#? stdlib
`urlify_email_address` <- function (x) 
{
    urlify(x, reserved = "][#?/&;=%", repeated = TRUE)
}
