#? stdlib
`Rd_escape_specials` <- function (x) 
{
    gsub("([%{}\\])", "\\\\\\1", x)
}
