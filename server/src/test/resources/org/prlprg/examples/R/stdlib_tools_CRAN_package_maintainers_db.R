#? stdlib
`CRAN_package_maintainers_db` <- function (db = CRAN_package_db()) 
{
    maintainer <- db[, "Maintainer"]
    address <- tolower(sub(".*<(.*)>.*", "\\1", maintainer))
    maintainer <- gsub("\n", " ", maintainer, fixed = TRUE)
    list2DF(list(Package = db[, "Package"], Address = address, 
        Maintainer = maintainer))
}
