#? stdlib
`proj.aovlist` <- function (object, onedf = FALSE, unweighted.scale = FALSE, ...) 
{
    attr.xdim <- function(x) {
        atrf <- attributes(x)
        atrf[is.na(match(names(atrf), c("names", "dim", "dimnames")))]
    }
    "attr.assign<-" <- function(x, value) {
        for (nm in names(value)) attr(x, nm) <- value[nm]
        x
    }
    factors.aovlist <- function(pnames, tfactor, strata = FALSE, 
        efactor = FALSE) {
        if (!is.na(int <- match("(Intercept)", pnames))) 
            pnames <- pnames[-int]
        tnames <- apply(tfactor, 2L, function(x, nms) nms[as.logical(x)], 
            rownames(tfactor))
        if (!missing(efactor)) {
            enames <- if (!is.na(err <- match(strata, colnames(efactor)))) 
                rownames(efactor)[as.logical(efactor[, err])]
            else if (strata == "Within") 
                c(rownames(efactor)[as.logical(efactor %*% rep.int(1, 
                  ncol(efactor)))], "Within")
            if (!is.null(enames)) 
                tnames <- append(tnames, list(Residuals = enames))
        }
        result <- tnames[match(pnames, names(tnames))]
        if (!is.na(int)) 
            result <- c(`(Intercept)` = "(Intercept)", result)
        result
    }
    if (unweighted.scale && is.null(attr(object, "weights"))) 
        unweighted.scale <- FALSE
    err.qr <- attr(object, "error.qr")
    Terms <- terms(object, "Error")
    t.factor <- attr(Terms, "factors")
    i <- attr(Terms, "specials")$Error
    t <- attr(Terms, "variables")[[1 + i]]
    error <- Terms
    error[[3L]] <- t[[2L]]
    e.factor <- attr(terms(formula(error)), "factors")
    n <- nrow(err.qr$qr)
    n.object <- length(object)
    result <- setNames(vector("list", n.object), names(object))
    D1 <- seq_len(NROW(err.qr$qr))
    if (unweighted.scale) 
        wt <- attr(object, "weights")
    for (i in names(object)) {
        prj <- proj.lm(object[[i]], onedf = onedf)
        if (unweighted.scale) 
            prj <- prj/sqrt(wt)
        result.i <- matrix(0, n, ncol(prj), dimnames = list(D1, 
            colnames(prj)))
        select <- rownames(object[[i]]$qr$qr) %||% rownames(object[[i]]$residuals)
        result.i[select, ] <- prj
        result[[i]] <- as.matrix(qr.qy(err.qr, result.i))
        attr.assign(result[[i]]) <- attr.xdim(prj)
        D2i <- colnames(prj)
        dimnames(result[[i]]) <- list(D1, D2i)
        attr(result[[i]], "factors") <- factors.aovlist(D2i, 
            t.factor, strata = i, efactor = e.factor)
    }
    attr(result, "call") <- attr(object, "call")
    attr(result, "e.factor") <- e.factor
    attr(result, "t.factor") <- t.factor
    class(result) <- c("aovprojlist", "listof")
    result
}
