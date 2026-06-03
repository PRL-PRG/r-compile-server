#? stdlib
`CRAN_package_dependencies_with_dates` <- function (packages, which = "most", recursive = FALSE, db = CRAN_package_db()) 
{
    repos <- .get_standard_repository_URLs()
    a <- utils::available.packages(filters = list(), repos = repos)
    pb <- NULL
    d <- package_dependencies(packages, a, which = which, recursive = recursive)
    base_packages <- .get_standard_package_names()[["base"]]
    lapply(d, function(e) {
        e <- setdiff(as.character(e), base_packages)
        i <- match(e, db[, "Package"])
        d <- db[i, "Published"]
        if (any(j <- is.na(i))) {
            eb <- e[j]
            if (is.null(pb)) 
                pb <<- BioC_package_db()
            ib <- match(eb, pb[, "Package"])
            d[j] <- pb[ib, "Date/Publication"]
            e[j] <- paste0(eb, "*")
        }
        d <- as.Date(d)
        o <- order(d, decreasing = TRUE)
        list2DF(list(Package = e[o], Date = d[o]))
    })
}
