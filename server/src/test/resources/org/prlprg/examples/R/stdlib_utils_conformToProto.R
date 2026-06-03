#? stdlib
`conformToProto` <- function (mat, proto) 
{
    ans <- lapply(seq_along(proto), function(i) {
        if (isS4(proto[[i]])) {
            methods::as(mat[, i], class(proto[[i]]))
        }
        else {
            fun <- match.fun(paste0("as.", class(proto[[i]])))
            fun(mat[, i])
        }
    })
    names(ans) <- names(proto)
    if (isS4(proto)) {
        methods::as(ans, class(proto))
    }
    else {
        as.data.frame(ans, optional = TRUE, stringsAsFactors = FALSE)
    }
}
