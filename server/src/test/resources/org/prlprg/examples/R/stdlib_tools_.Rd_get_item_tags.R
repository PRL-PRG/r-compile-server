#? stdlib
`.Rd_get_item_tags` <- function (x) 
{
    x <- x[RdTags(x) == "\\item"]
    out <- lapply(x[lengths(x) == 2L], function(e) .Rd_deparse(e[[1L]]))
    as.character(unlist(out))
}
