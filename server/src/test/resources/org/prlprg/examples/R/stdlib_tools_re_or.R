#? stdlib
`re_or` <- function (s, group = TRUE) 
{
    if (!length(s)) 
        character()
    else if (group) 
        re_group(paste(s, collapse = "|"))
    else paste(s, collapse = "|")
}
