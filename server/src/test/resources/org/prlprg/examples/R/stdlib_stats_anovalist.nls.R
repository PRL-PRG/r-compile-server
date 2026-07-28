#? stdlib
`anovalist.nls` <- function (object, ..., test = NULL) 
{
    objects <- list(object, ...)
    responses <- as.character(lapply(objects, function(x) formula(x)[[2L]]))
    sameresp <- responses == responses[1L]
    if (!all(sameresp)) {
        objects <- objects[sameresp]
        warning(gettextf("models with response %s removed because response differs from model 1", 
            sQuote(deparse(responses[!sameresp]))), domain = NA)
    }
    nmodels <- length(objects)
    if (nmodels == 1L) 
        stop("'anova' is only defined for sequences of \"nls\" objects")
    models <- as.character(lapply(objects, function(x) formula(x)))
    df.r <- unlist(lapply(objects, df.residual))
    ss.r <- unlist(lapply(objects, deviance))
    df <- c(NA, -diff(df.r))
    ss <- c(NA, -diff(ss.r))
    ms <- ss/df
    f <- p <- rep_len(NA_real_, nmodels)
    for (i in 2:nmodels) {
        if (df[i] > 0) {
            f[i] <- ms[i]/(ss.r[i]/df.r[i])
            p[i] <- pf(f[i], df[i], df.r[i], lower.tail = FALSE)
        }
        else if (df[i] < 0) {
            f[i] <- ms[i]/(ss.r[i - 1]/df.r[i - 1])
            p[i] <- pf(f[i], -df[i], df.r[i - 1], lower.tail = FALSE)
        }
        else {
            ss[i] <- 0
        }
    }
    table <- data.frame(df.r, ss.r, df, ss, f, p)
    dimnames(table) <- list(1L:nmodels, c("Res.Df", "Res.Sum Sq", 
        "Df", "Sum Sq", "F value", "Pr(>F)"))
    title <- "Analysis of Variance Table\n"
    topnote <- paste0("Model ", format(1L:nmodels), ": ", models, 
        collapse = "\n")
    structure(table, heading = c(title, topnote), class = c("anova", 
        "data.frame"))
}
