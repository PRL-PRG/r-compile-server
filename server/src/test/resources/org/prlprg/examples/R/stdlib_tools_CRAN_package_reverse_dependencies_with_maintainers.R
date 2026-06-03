#? stdlib
`CRAN_package_reverse_dependencies_with_maintainers` <- function (packages, which = "strong", recursive = FALSE, db = CRAN_package_db()) 
{
    rdepends <- package_dependencies(packages, db, which, recursive = recursive, 
        reverse = TRUE)
    rdepends <- sort(unique(unlist(rdepends)))
    pos <- match(rdepends, db[, "Package"], nomatch = 0L)
    db[pos, c("Package", "Version", "Maintainer")]
}
