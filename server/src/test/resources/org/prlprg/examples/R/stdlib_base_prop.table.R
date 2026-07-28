#? stdlib
`prop.table` <- function (x, margin = NULL) 
{
    if (length(margin)) 
        sweep(x, margin, marginSums(x, margin), `/`, check.margin = FALSE)
    else x/sum(x)
}
