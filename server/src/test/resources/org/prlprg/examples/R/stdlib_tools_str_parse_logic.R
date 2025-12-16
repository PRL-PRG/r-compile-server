#? stdlib
`str_parse_logic` <- function (ch, default = TRUE, otherwise = default, n = 1L) 
{
    if (is.na(ch)) 
        default
    else switch(tolower(ch), `1` = , yes = , true = TRUE, `0` = , 
        no = , false = FALSE, eval.parent(otherwise, n = n))
}
