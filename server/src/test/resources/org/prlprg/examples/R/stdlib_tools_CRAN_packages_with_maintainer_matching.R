#? stdlib
`CRAN_packages_with_maintainer_matching` <- function (pattern, db = CRAN_package_db(), ...) 
{
    ind <- grep(pattern, db[, "Maintainer"], ...)
    db[ind, "Package"]
}
