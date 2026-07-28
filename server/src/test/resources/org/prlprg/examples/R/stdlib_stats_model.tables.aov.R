#? stdlib
`model.tables.aov` <- function (x, type = "effects", se = FALSE, cterms, ...) 
{
    if (inherits(x, "maov")) 
        stop("'model.tables' is not implemented for multiple responses")
    type <- match.arg(type, c("effects", "means", "residuals"))
    if (type == "residuals") 
        stop(gettextf("type '%s' is not implemented yet", type), 
            domain = NA)
    prjs <- proj(x, unweighted.scale = TRUE)
    if (is.null(x$call)) 
        stop("this fit does not inherit from \"lm\"")
    mf <- model.frame(x)
    factors <- attr(prjs, "factors")
    nf <- names(factors)
    dn.proj <- setNames(as.list(nf), nf)
    m.factors <- factors
    t.factor <- attr(prjs, "t.factor")
    vars <- colnames(t.factor)
    which <- match(vars, names(dn.proj))
    which <- which[!is.na(which)]
    dn.proj <- dn.proj[which]
    m.factors <- m.factors[which]
    if (!missing(cterms)) {
        if (anyNA(match(cterms, names(factors)))) 
            stop("'cterms' argument must match terms in model object")
        dn.proj <- dn.proj[cterms]
        m.factors <- m.factors[cterms]
    }
    if (type == "means") {
        dn.proj <- lapply(dn.proj, function(x, mat, vn) c("(Intercept)", 
            vn[(t(mat) %*% (as.logical(mat[, x]) - 1)) == 0]), 
            t.factor, vars)
    }
    tables <- make.tables.aovproj(dn.proj, m.factors, prjs, mf)
    n <- NULL
    for (xx in names(tables)) n <- c(n, replications(paste("~", 
        xx), data = mf))
    if (se) 
        if (is.list(n)) {
            message("Design is unbalanced - use se.contrast() for se's")
            se <- FALSE
        }
        else se.tables <- se.aov(x, n, type = type)
    if (type == "means" && "(Intercept)" %in% colnames(prjs)) {
        gmtable <- mean(prjs[, "(Intercept)"])
        class(gmtable) <- "mtable"
        tables <- c(`Grand mean` = gmtable, tables)
    }
    result <- list(tables = tables, n = n)
    if (se) 
        result$se <- se.tables
    attr(result, "type") <- type
    class(result) <- c("tables_aov", "list.of")
    result
}
