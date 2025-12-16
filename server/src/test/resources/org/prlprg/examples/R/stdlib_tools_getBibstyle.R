#? stdlib
`getBibstyle` <- function (all = FALSE) 
{
    if (all) 
        names(environment(bibstyle)$styles)
    else environment(bibstyle)$default
}
