#? stdlib
`str_parse` <- function (ch, default = TRUE, logical = TRUE, otherwise = default, 
    n = 2L) 
{
    if (logical) 
        str_parse_logic(ch, default = default, otherwise = otherwise, 
            n = n)
    else if (is.na(ch)) 
        default
    else ch
}
