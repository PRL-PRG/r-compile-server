#? stdlib
`getFunAPI` <- function () 
{
    apitypes <- c("api", "eapi", "emb")
    val <- do.call(rbind, lapply(apitypes, getOneFunAPI))
    val <- unique(val)
    val <- by(val, list(val$unmapped), function(x) if (nrow(x) > 
        1) 
        x[1, ]
    else x, simplify = FALSE)
    val <- do.call(rbind, val)
    val$unmapped <- NULL
    rownames(val) <- NULL
    val
}
