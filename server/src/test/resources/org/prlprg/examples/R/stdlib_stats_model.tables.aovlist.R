#? stdlib
`model.tables.aovlist` <- function (x, type = "effects", se = FALSE, ...) 
{
    type <- match.arg(type, c("effects", "means", "residuals"))
    if (type == "residuals") 
        stop(gettextf("type '%s' is not implemented yet", type), 
            domain = NA)
    prjs <- proj(x, unweighted.scale = TRUE)
    mf <- model.frame.aovlist(x)
    factors <- lapply(prjs, attr, "factors")
    dn.proj <- unlist(lapply(factors, names), recursive = FALSE)
    m.factors <- unlist(factors, recursive = FALSE)
    dn.strata <- rep.int(names(factors), lengths(factors))
    names(dn.strata) <- names(m.factors) <- names(dn.proj) <- unlist(dn.proj)
    t.factor <- attr(prjs, "t.factor")
    efficiency <- FALSE
    if (type == "effects" || type == "means") {
        if (anyDuplicated(names(dn.proj)[names(dn.proj) != "Residuals"])) {
            efficiency <- eff.aovlist(x)
            eff.used <- apply(efficiency, 2L, function(x, ind = seq_len(x)) {
                temp <- (x > 0)
                if (sum(temp) == 1) 
                  temp
                else max(ind[temp]) == ind
            })
        }
    }
    if (any(efficiency)) {
        if (is.list(eff.used)) 
            stop("design is unbalanced so cannot proceed")
        which <- match(outer(rownames(efficiency), colnames(efficiency), 
            paste)[eff.used], paste(dn.strata, dn.proj))
        efficiency <- efficiency[eff.used]
    }
    else which <- match(colnames(t.factor), names(dn.proj))
    which <- which[!is.na(which)]
    dn.proj <- dn.proj[which]
    dn.strata <- dn.strata[which]
    m.factors <- m.factors[which]
    if (type == "means") {
        t.factor <- t.factor[, names(dn.proj), drop = FALSE]
        dn.proj <- lapply(dn.proj, function(x, mat, vn) vn[(t(mat) %*% 
            (as.logical(mat[, x]) - 1)) == 0], t.factor, colnames(t.factor))
    }
    tables <- if (any(efficiency)) {
        names(efficiency) <- names(dn.proj)
        make.tables.aovprojlist(dn.proj, dn.strata, m.factors, 
            prjs, mf, efficiency)
    }
    else make.tables.aovprojlist(dn.proj, dn.strata, m.factors, 
        prjs, mf)
    if (type == "means") {
        gmtable <- mean(prjs[["(Intercept)"]])
        class(gmtable) <- "mtable"
        tables <- lapply(tables, `+`, gmtable)
        tables <- c(`Grand mean` = gmtable, tables)
    }
    n <- replications(terms(x), data = mf)
    if (se) 
        if (type == "effects" && is.list(n)) {
            message("Standard error information not returned as design is unbalanced. \nStandard errors can be obtained through 'se.contrast'.")
            se <- FALSE
        }
        else if (type != "effects") {
            warning(gettextf("SEs for type '%s' are not yet implemented", 
                type), domain = NA)
            se <- FALSE
        }
        else {
            se.tables <- se.aovlist(x, dn.proj, dn.strata, factors, 
                mf, efficiency, n, type = type)
        }
    result <- list(tables = tables, n = n)
    if (se) 
        result$se <- se.tables
    attr(result, "type") <- type
    class(result) <- c("tables_aov", "list.of")
    result
}
