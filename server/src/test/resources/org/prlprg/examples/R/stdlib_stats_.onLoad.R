#? stdlib
`.onLoad` <- function (libname, pkgname) 
{
    op.stats <- list(contrasts = c(unordered = "contr.treatment", 
        ordered = "contr.poly"), na.action = "na.omit", show.coef.Pvalues = TRUE, 
        show.signif.stars = TRUE, str.dendrogram.last = "`", 
        ts.eps = 1e-05, ts.S.compat = FALSE)
    toset <- !(names(op.stats) %in% names(.Options))
    if (any(toset)) 
        options(op.stats[toset])
}
