#? stdlib
`.Rd_get_equations_from_Rd` <- function (x) 
{
    y <- .Rd_find_nodes_with_tags(x, c("\\eqn", "\\deqn"))
    if (!length(y)) 
        return(matrix(character(), 0L, 5L))
    z <- lapply(y, function(e) {
        c(attr(e, "Rd_tag"), .Rd_deparse(e[[1L]], tag = FALSE), 
            if (length(e) > 1L) trimws(.Rd_deparse(e[[2L]], tag = FALSE)) else NA_character_, 
            if (!is.null(loc <- attr(e, "srcref"))) loc[c(1L, 
                3L)] else rep.int(NA_character_, 2L))
    })
    do.call(rbind, z)
}
