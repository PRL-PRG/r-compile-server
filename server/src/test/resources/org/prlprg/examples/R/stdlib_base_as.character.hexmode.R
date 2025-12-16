#? stdlib
`as.character.hexmode` <- function (x, keepStr = FALSE, ...) 
{
    ans <- rep_len(NA_character_, length(x))
    notNA <- !is.na(x)
    ans[notNA] <- sprintf("%x", as.integer(x[notNA]))
    if (keepStr) {
        dim(ans) <- dim(x)
        dimnames(ans) <- dimnames(x)
        names(ans) <- names(x)
    }
    ans
}
