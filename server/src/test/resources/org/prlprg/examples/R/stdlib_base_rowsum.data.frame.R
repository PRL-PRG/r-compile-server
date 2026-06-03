#? stdlib
`rowsum.data.frame` <- function (x, group, reorder = TRUE, na.rm = FALSE, ...) 
{
    if (!is.data.frame(x)) 
        stop("not a data frame")
    if (length(group) != NROW(x)) 
        stop("incorrect length for 'group'")
    if (anyNA(group)) 
        warning("missing values for 'group'")
    ugroup <- unique(group)
    if (reorder) 
        ugroup <- sort(ugroup, na.last = TRUE, method = "quick")
    .Internal(rowsum_df(x, group, ugroup, na.rm, as.character(ugroup)))
}
