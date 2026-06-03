#? stdlib
`anova.glm` <- function (object, ..., dispersion = NULL, test = NULL) 
{
    dotargs <- list(...)
    named <- if (is.null(names(dotargs))) 
        rep_len(FALSE, length(dotargs))
    else (names(dotargs) != "")
    if (any(named)) 
        warning("the following arguments to 'anova.glm' are invalid and dropped: ", 
            paste(deparse(dotargs[named]), collapse = ", "))
    dotargs <- dotargs[!named]
    is.glm <- vapply(dotargs, function(x) inherits(x, "glm"), 
        NA)
    dotargs <- dotargs[is.glm]
    if (length(dotargs)) 
        return(anova.glmlist(c(list(object), dotargs), dispersion = dispersion, 
            test = test))
    doscore <- !is.null(test) && isTRUE(test == "Rao")
    varlist <- attr(object$terms, "variables")
    x <- if (n <- match("x", names(object), 0L)) 
        object[[n]]
    else model.matrix(object)
    varseq <- attr(x, "assign")
    nvars <- max(0, varseq)
    resdev <- resdf <- NULL
    if (doscore) {
        score <- numeric(nvars)
        method <- object$method
        y <- object$y
        fit <- eval(call(if (is.function(method)) "method" else method, 
            x = x[, varseq == 0, drop = FALSE], y = y, weights = object$prior.weights, 
            start = object$start, offset = object$offset, family = object$family, 
            control = object$control))
        r <- fit$residuals
        w <- fit$weights
        icpt <- attr(object$terms, "intercept")
    }
    if (nvars > 1 || doscore) {
        method <- object$method
        y <- object$y
        if (is.null(y)) {
            mu.eta <- object$family$mu.eta
            eta <- object$linear.predictors
            y <- object$fitted.values + object$residuals * mu.eta(eta)
        }
        for (i in seq_len(max(nvars - 1L, 0))) {
            fit <- eval(call(if (is.function(method)) "method" else method, 
                x = x[, varseq <= i, drop = FALSE], y = y, weights = object$prior.weights, 
                start = object$start, offset = object$offset, 
                family = object$family, control = object$control))
            if (doscore) {
                zz <- eval(call(if (is.function(method)) "method" else method, 
                  x = x[, varseq <= i, drop = FALSE], y = r, 
                  weights = w, intercept = icpt))
                score[i] <- zz$null.deviance - zz$deviance
                r <- fit$residuals
                w <- fit$weights
            }
            resdev <- c(resdev, fit$deviance)
            resdf <- c(resdf, fit$df.residual)
        }
        if (doscore) {
            zz <- eval(call(if (is.function(method)) "method" else method, 
                x = x, y = r, weights = w, intercept = icpt))
            score[nvars] <- zz$null.deviance - zz$deviance
        }
    }
    resdf <- c(object$df.null, resdf, object$df.residual)
    resdev <- c(object$null.deviance, resdev, object$deviance)
    table <- data.frame(c(NA, -diff(resdf)), c(NA, pmax(0, -diff(resdev))), 
        resdf, resdev)
    tl <- attr(object$terms, "term.labels")
    if (length(tl) == 0L) 
        table <- table[1, , drop = FALSE]
    dimnames(table) <- list(c("NULL", tl), c("Df", "Deviance", 
        "Resid. Df", "Resid. Dev"))
    if (doscore) 
        table <- cbind(table, Rao = c(NA, score))
    title <- paste0("Analysis of Deviance Table", "\n\nModel: ", 
        object$family$family, ", link: ", object$family$link, 
        "\n\nResponse: ", as.character(varlist[-1L])[1L], "\n\nTerms added sequentially (first to last)\n\n")
    fam <- object$family
    if (is.null(test)) {
        test <- if (!is.null(dispersion)) 
            "Chisq"
        else if (!is.null(fam$dispersion)) 
            if (is.na(fam$dispersion)) 
                "F"
            else "Chisq"
        else FALSE
    }
    if (!isFALSE(test)) {
        if (is.null(dispersion)) {
            dispersion <- summary(object)$dispersion
        }
        df.dispersion <- if (is.null(fam$dispersion)) 
            if (isTRUE(dispersion == 1)) 
                Inf
            else object$df.residual
        else if (is.na(fam$dispersion)) 
            object$df.residual
        else Inf
        if (isTRUE(test == "F") && df.dispersion == 0) {
            test <- FALSE
        }
    }
    if (!isFALSE(test)) {
        if (isTRUE(test == "F") && df.dispersion == Inf) {
            fname <- fam$family
            if (fname == "binomial" || fname == "poisson") 
                warning(gettextf("using F test with a '%s' family is inappropriate", 
                  fname), domain = NA)
            else warning("using F test with a fixed dispersion is inappropriate")
        }
        table <- stat.anova(table = table, test = test, scale = dispersion, 
            df.scale = df.dispersion, n = NROW(x))
    }
    structure(table, heading = title, class = c("anova", "data.frame"))
}

# Examples
## --- Continuing the Example from  '?glm':
require(utils)
example("glm", echo = FALSE)
anova(glm.D93, test = FALSE)
anova(glm.D93, test = "Cp")
anova(glm.D93, test = "Chisq")
glm.D93a <-
   update(glm.D93, ~treatment*outcome) # equivalent to Pearson Chi-square
anova(glm.D93, glm.D93a, test = "Rao")

