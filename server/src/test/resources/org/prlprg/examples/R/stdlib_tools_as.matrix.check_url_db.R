#? stdlib
`as.matrix.check_url_db` <- function (x, ...) 
{
    n <- lengths(x[["From"]])
    y <- do.call(cbind, c(list(URL = rep.int(x[["URL"]], n), 
        Parent = unlist(x[["From"]])), lapply(x[-c(1L, 2L)], 
        rep.int, n)))
    rownames(y) <- NULL
    y
}
