#? stdlib
`anova.glmlist` <- function (object, ..., dispersion = NULL, test = NULL) 
{
    doscore <- !is.null(test) && isTRUE(test == "Rao")
    responses <- as.character(lapply(object, function(x) {
        deparse(formula(x)[[2L]])
    }))
    sameresp <- responses == responses[1L]
    if (!all(sameresp)) {
        object <- object[sameresp]
        warning(gettextf("models with response %s removed because response differs from model 1", 
            sQuote(deparse(responses[!sameresp]))), domain = NA)
    }
    ns <- sapply(object, function(x) length(x$residuals))
    if (any(ns != ns[1L])) 
        stop("models were not all fitted to the same size of dataset")
    nmodels <- length(object)
    if (nmodels == 1) 
        return(anova.glm(object[[1L]], dispersion = dispersion, 
            test = test))
    resdf <- as.numeric(lapply(object, function(x) x$df.residual))
    resdev <- as.numeric(lapply(object, function(x) x$deviance))
    if (doscore) {
        score <- numeric(nmodels)
        score[1] <- NA
        df <- -diff(resdf)
        for (i in seq_len(nmodels - 1)) {
            m1 <- if (df[i] > 0) 
                object[[i]]
            else object[[i + 1]]
            m2 <- if (df[i] > 0) 
                object[[i + 1]]
            else object[[i]]
            r <- m1$residuals
            w <- m1$weights
            method <- m2$method
            icpt <- attr(m1$terms, "intercept")
            zz <- eval(call(if (is.function(method)) "method" else method, 
                x = model.matrix(m2), y = r, weights = w, intercept = icpt))
            score[i + 1] <- zz$null.deviance - zz$deviance
            if (df[i] < 0) 
                score[i + 1] <- -score[i + 1]
        }
    }
    table <- data.frame(resdf, resdev, c(NA, -diff(resdf)), c(NA, 
        -diff(resdev)))
    variables <- lapply(object, function(x) paste(deparse(formula(x)), 
        collapse = "\n"))
    dimnames(table) <- list(1L:nmodels, c("Resid. Df", "Resid. Dev", 
        "Df", "Deviance"))
    if (doscore) 
        table <- cbind(table, Rao = score)
    title <- "Analysis of Deviance Table\n"
    topnote <- paste0("Model ", format(1L:nmodels), ": ", variables, 
        collapse = "\n")
    bigmodel <- object[[order(resdf)[1L]]]
    bigdispersion <- bigmodel$family$dispersion
    if (is.null(test)) {
        test <- if (!is.null(dispersion)) 
            "Chisq"
        else if (!is.null(bigdispersion)) 
            if (is.na(bigdispersion)) 
                "F"
            else "Chisq"
        else FALSE
    }
    if (!isFALSE(test)) {
        if (is.null(dispersion)) {
            dispersion <- summary(bigmodel)$dispersion
        }
        df.dispersion <- if (!is.null(bigdispersion)) 
            if (is.na(bigdispersion)) 
                bigmodel$df.residual
            else Inf
        else if (isTRUE(dispersion == 1)) 
            Inf
        else min(resdf)
        if (isTRUE(test == "F") && df.dispersion == 0) {
            test <- FALSE
        }
    }
    if (!isFALSE(test)) {
        if (isTRUE(test == "F") && df.dispersion == Inf) {
            fam <- bigmodel$family$family
            if (fam == "binomial" || fam == "poisson") 
                warning(gettextf("using F test with a '%s' family is inappropriate", 
                  fam), domain = NA, call. = FALSE)
            else warning("using F test with a fixed dispersion is inappropriate")
        }
        table <- stat.anova(table = table, test = test, scale = dispersion, 
            df.scale = df.dispersion, n = length(bigmodel$residuals))
    }
    structure(table, heading = c(title, topnote), class = c("anova", 
        "data.frame"))
}
