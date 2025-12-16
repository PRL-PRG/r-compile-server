#? stdlib
`make.tables.aovprojlist` <- function (proj.cols, strata.cols, model.cols, projections, model, 
    eff, fun = "mean", prt = FALSE, ...) 
{
    tables <- setNames(vector("list", length(proj.cols)), names(proj.cols))
    if (!missing(eff)) {
        for (i in seq_along(tables)) {
            terms <- proj.cols[[i]]
            if (all(is.na(eff.i <- match(terms, names(eff))))) 
                eff.i <- rep.int(1, length(terms))
            if (length(terms) == 1L) 
                data <- projections[[strata.cols[i]]][, terms]/eff[eff.i]
            else {
                if (length(strata <- unique(strata.cols[terms])) == 
                  1L) 
                  data <- projections[[strata]][, terms] %*% 
                    as.matrix(1/eff[eff.i])
                else {
                  mat <- NULL
                  for (j in strata) {
                    mat <- cbind(mat, projections[[j]][, terms[!is.na(match(terms, 
                      names(strata.cols)[strata.cols == j]))]])
                  }
                  data <- mat %*% as.matrix(1/eff[eff.i])
                }
            }
            tables[[i]] <- tapply(data, model[model.cols[[i]]], 
                get(fun, mode = "function"))
            attr(tables[[i]], "strata") <- strata.cols[i]
            class(tables[[i]]) <- "mtable"
            if (prt) 
                print(tables[i], ..., quote = FALSE)
        }
    }
    else for (i in seq_along(tables)) {
        terms <- proj.cols[[i]]
        if (length(terms) == 1L) 
            data <- projections[[strata.cols[i]]][, terms]
        else {
            if (length(strata <- unique(strata.cols[terms])) == 
                1L) 
                data <- projections[[strata]][, terms] %*% as.matrix(rep.int(1, 
                  length(terms)))
            else {
                mat <- NULL
                for (j in strata) {
                  mat <- cbind(mat, projections[[j]][, terms[!is.na(match(terms, 
                    names(strata.cols)[strata.cols == j]))]])
                }
                data <- mat %*% as.matrix(rep.int(1, length(terms)))
            }
        }
        tables[[i]] <- tapply(data, model[model.cols[[i]]], get(fun))
        attr(tables[[i]], "strata") <- strata.cols[i]
        class(tables[[i]]) <- "mtable"
        if (prt) 
            print(tables[i], ..., quote = FALSE)
    }
    tables
}
