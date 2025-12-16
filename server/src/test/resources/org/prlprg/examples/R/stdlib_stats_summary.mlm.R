#? stdlib
`summary.mlm` <- function (object, ny = ncol(coef), names = TRUE, ...) 
{
    coef <- coef(object)
    effects <- object$effects
    resid <- object$residuals
    fitted <- object$fitted.values
    value <- if (names) {
        ynames <- colnames(coef)
        if (is.null(ynames)) 
            ynames <- {
                lhs <- object$terms[[2L]]
                if (mode(lhs) == "call" && lhs[[1L]] == "cbind") 
                  as.character(lhs)[-1L]
                else paste0("Y", seq_len(ny))
            }
        ind <- ynames == ""
        if (any(ind)) 
            ynames[ind] <- paste0("Y", seq_len(ny))[ind]
        setNames(vector("list", ny), paste("Response", ynames))
    }
    else vector("list", ny)
    cl <- oldClass(object)
    class(object) <- cl[match("mlm", cl):length(cl)][-1L]
    object$call$formula <- formula(object)
    for (i in seq(ny)) {
        object$coefficients <- setNames(coef[, i], rownames(coef))
        object$residuals <- resid[, i]
        object$fitted.values <- fitted[, i]
        object$effects <- effects[, i]
        object$call$formula[[2L]] <- object$terms[[2L]] <- as.name(if (names) 
            ynames[i]
        else paste0("Y", i))
        value[[i]] <- summary(object, ...)
    }
    class(value) <- "listof"
    value
}
