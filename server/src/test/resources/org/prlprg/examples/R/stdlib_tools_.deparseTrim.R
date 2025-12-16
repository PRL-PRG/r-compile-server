#? stdlib
`.deparseTrim` <- function (expr, cutoff = 30L) 
{
    res <- deparse(expr)
    if (length(res) > 1) {
        if (res[[1]] == "{") {
            exprs <- sub("^[ \t]*", "", res[c(-1L, -length(res))])
            res <- paste0("{", paste(exprs, collapse = "; "), 
                "}")
        }
        else res <- paste(res[[1]], " ...")
    }
    if (nchar(res) > cutoff) 
        paste(substr(res, 1, cutoff), " ...")
    else res
}
