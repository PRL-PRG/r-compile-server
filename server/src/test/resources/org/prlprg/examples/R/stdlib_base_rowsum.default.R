#? stdlib
`rowsum.default` <- function (x, group, reorder = TRUE, na.rm = FALSE, ...) 
{
    if (!is.numeric(x)) 
        stop("'x' must be numeric")
    if (length(dim(x)) > 2L) 
        stop("invalid 'x'")
    nr <- if (is.matrix(x)) 
        NROW(x)
    else length(x)
    if (length(group) != nr) 
        stop("incorrect length for 'group'")
    if (anyNA(group)) 
        warning("missing values for 'group'")
    ugroup <- unique(group)
    if (reorder) 
        ugroup <- sort(ugroup, na.last = TRUE, method = "quick")
    .Internal(rowsum_matrix(x, group, ugroup, na.rm, as.character(ugroup)))
}
