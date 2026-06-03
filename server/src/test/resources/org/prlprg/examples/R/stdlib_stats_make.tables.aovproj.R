#? stdlib
`make.tables.aovproj` <- function (proj.cols, mf.cols, prjs, mf, fun = "mean", prt = FALSE, 
    ...) 
{
    tables <- setNames(vector("list", length(proj.cols)), names(proj.cols))
    for (i in seq_along(tables)) {
        terms <- proj.cols[[i]]
        terms <- terms[terms %in% colnames(prjs)]
        data <- if (length(terms) == 1L) 
            prjs[, terms]
        else prjs[, terms] %*% as.matrix(rep.int(1, length(terms)))
        tables[[i]] <- tapply(data, mf[mf.cols[[i]]], get(fun, 
            mode = "function"))
        class(tables[[i]]) <- "mtable"
        if (prt) 
            print(tables[i], ..., quote = FALSE)
    }
    tables
}
