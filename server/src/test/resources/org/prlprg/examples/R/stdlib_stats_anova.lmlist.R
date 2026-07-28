#? stdlib
`anova.lmlist` <- function (object, ..., scale = 0, test = "F") 
{
    objects <- list(object, ...)
    responses <- as.character(lapply(objects, function(x) deparse(x$terms[[2L]])))
    sameresp <- responses == responses[1L]
    if (!all(sameresp)) {
        objects <- objects[sameresp]
        warning(gettextf("models with response %s removed because response differs from model 1", 
            sQuote(deparse(responses[!sameresp]))), domain = NA)
    }
    ns <- sapply(objects, function(x) length(x$residuals))
    if (any(ns != ns[1L])) 
        stop("models were not all fitted to the same size of dataset")
    nmodels <- length(objects)
    if (nmodels == 1) 
        return(anova.lm(object))
    resdf <- as.numeric(lapply(objects, df.residual))
    resdev <- as.numeric(lapply(objects, deviance))
    table <- data.frame(resdf, resdev, c(NA, -diff(resdf)), c(NA, 
        -diff(resdev)))
    variables <- lapply(objects, function(x) paste(deparse(formula(x)), 
        collapse = "\n"))
    dimnames(table) <- list(1L:nmodels, c("Res.Df", "RSS", "Df", 
        "Sum of Sq"))
    title <- "Analysis of Variance Table\n"
    topnote <- paste0("Model ", format(1L:nmodels), ": ", variables, 
        collapse = "\n")
    if (!is.null(test)) {
        bigmodel <- order(resdf)[1L]
        scale <- if (scale > 0) 
            scale
        else resdev[bigmodel]/resdf[bigmodel]
        table <- stat.anova(table = table, test = test, scale = scale, 
            df.scale = resdf[bigmodel], n = length(objects[[bigmodel]]$residuals))
    }
    structure(table, heading = c(title, topnote), class = c("anova", 
        "data.frame"))
}
