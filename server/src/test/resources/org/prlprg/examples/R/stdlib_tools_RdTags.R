#? stdlib
`RdTags` <- function (Rd) 
{
    res <- lapply(Rd, attr, "Rd_tag")
    if (length(res)) 
        simplify2array(res, FALSE)
    else character()
}
