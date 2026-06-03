#? stdlib
`filter_packages_by_depends_predicates` <- function (db, predicate, recursive = TRUE) 
{
    db1 <- data.frame(Package = db[, "Package"], stringsAsFactors = FALSE)
    fields <- c("Depends", "Imports", "LinkingTo")
    for (f in fields) db1[[f]] <- lapply(db[, f], tools:::.extract_dependency_package_names)
    all_packages <- unique(unlist(db1[fields], use.names = FALSE))
    bad_packages <- all_packages[is.na(match(all_packages, db1$Package))]
    bad_packages <- setdiff(bad_packages, unlist(tools:::.get_standard_package_names()))
    ind <- !predicate(db)
    rdepends <- tools::package_dependencies(db1$Package[ind], 
        db = db1, reverse = TRUE, recursive = recursive)
    rdepends <- unique(unlist(rdepends))
    ind[match(rdepends, db1$Package, nomatch = 0L)] <- TRUE
    db[!ind, , drop = FALSE]
}
