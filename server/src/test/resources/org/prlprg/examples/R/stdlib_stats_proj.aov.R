#? stdlib
`proj.aov` <- function (object, onedf = FALSE, unweighted.scale = FALSE, ...) 
{
    if (inherits(object, "maov")) 
        stop("'proj' is not implemented for multiple responses")
    factors.aov <- function(pnames, tfactor) {
        if (!is.na(int <- match("(Intercept)", pnames))) 
            pnames <- pnames[-int]
        tnames <- setNames(lapply(colnames(tfactor), function(x, 
            mat) rownames(mat)[mat[, x] > 0], tfactor), colnames(tfactor))
        if (!is.na(match("Residuals", pnames))) {
            enames <- c(rownames(tfactor)[as.logical(tfactor %*% 
                rep.int(1, ncol(tfactor)))], "Within")
            tnames <- append(tnames, list(Residuals = enames))
        }
        result <- tnames[match(pnames, names(tnames))]
        if (!is.na(int)) 
            result <- c(`(Intercept)` = "(Intercept)", result)
        result
    }
    projections <- NextMethod("proj")
    t.factor <- attr(terms(object), "factors")
    attr(projections, "factors") <- factors.aov(colnames(projections), 
        t.factor)
    attr(projections, "call") <- object$call
    attr(projections, "t.factor") <- t.factor
    class(projections) <- "aovproj"
    projections
}
