#? stdlib
`contr.SAS` <- function (n, contrasts = TRUE, sparse = FALSE) 
{
    contr.treatment(n, base = if (is.numeric(n) && length(n) == 
        1L) 
        n
    else length(n), contrasts = contrasts, sparse = sparse)
}
