#? stdlib
`summary.infl` <- function (object, digits = max(2L, getOption("digits") - 5L), 
    ...) 
{
    is.inf <- object$is.inf
    isMLM <- length(dim(is.inf)) == 3L
    is.inf[is.na(is.inf)] <- FALSE
    is.star <- apply(is.inf, 1L, any)
    cat("Potentially influential observations of\n\t", deparse(object$call), 
        ":\n")
    if (any(is.star)) {
        if (isMLM) {
            is.inf <- is.inf[is.star, , ]
            imat <- object$infmat[is.star, , , drop = FALSE]
        }
        else {
            is.inf <- is.inf[is.star, ]
            imat <- object$infmat[is.star, , drop = FALSE]
        }
        rownam <- dimnames(object$infmat)[[1L]] %||% format(seq(is.star))
        dimnames(imat)[[1L]] <- rownam[is.star]
        chmat <- format(round(imat, digits = digits))
        cat("\n")
        print(array(paste0(chmat, c("", "_*")[1L + is.inf]), 
            dimnames = dimnames(imat), dim = dim(imat)), quote = FALSE)
        invisible(imat)
    }
    else {
        cat("NONE\n")
        numeric()
    }
}
