#? stdlib
`cov` <- function (x, y = NULL, use = "everything", method = c("pearson", 
    "kendall", "spearman")) 
{
    na.method <- pmatch(use, c("all.obs", "complete.obs", "pairwise.complete.obs", 
        "everything", "na.or.complete"))
    if (is.na(na.method)) 
        stop("invalid 'use' argument")
    method <- match.arg(method)
    if (is.data.frame(y)) 
        y <- as.matrix(y)
    if (is.data.frame(x)) 
        x <- as.matrix(x)
    if (!is.matrix(x) && is.null(y)) 
        stop("supply both 'x' and 'y' or a matrix-like 'x'")
    stopifnot(is.numeric(x) || is.logical(x), is.atomic(x))
    if (!is.null(y)) 
        stopifnot(is.numeric(y) || is.logical(y), is.atomic(y))
    Rank <- function(u) {
        if (length(u) == 0L) 
            u
        else if (is.matrix(u)) {
            if (nrow(u) > 1L) 
                apply(u, 2L, rank, na.last = "keep")
            else row(u)
        }
        else rank(u, na.last = "keep")
    }
    if (method == "pearson") 
        .Call(C_cov, x, y, na.method, method == "kendall")
    else if (na.method %in% c(2L, 5L)) {
        if (is.null(y)) {
            .Call(C_cov, Rank(na.omit(x)), NULL, na.method, method == 
                "kendall")
        }
        else {
            nas <- attr(na.omit(cbind(x, y)), "na.action")
            dropNA <- function(x, nas) {
                if (length(nas)) {
                  if (is.matrix(x)) 
                    x[-nas, , drop = FALSE]
                  else x[-nas]
                }
                else x
            }
            .Call(C_cov, Rank(dropNA(x, nas)), Rank(dropNA(y, 
                nas)), na.method, method == "kendall")
        }
    }
    else if (na.method != 3L) {
        x <- Rank(x)
        if (!is.null(y)) 
            y <- Rank(y)
        .Call(C_cov, x, y, na.method, method == "kendall")
    }
    else stop("cannot handle 'pairwise.complete.obs'")
}
