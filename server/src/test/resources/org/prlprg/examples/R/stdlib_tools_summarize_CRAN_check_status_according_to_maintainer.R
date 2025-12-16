#? stdlib
`summarize_CRAN_check_status_according_to_maintainer` <- function (db = CRAN_package_db(), results = CRAN_check_results(), 
    details = CRAN_check_details(), issues = CRAN_check_issues()) 
{
    ind <- !duplicated(db[, "Package"])
    maintainer <- db[, "Maintainer"]
    maintainer <- tolower(sub(".*<(.*)>.*", "\\1", maintainer))
    split(format(summarize_CRAN_check_status(db[ind, "Package"], 
        results, details, issues), header = TRUE), maintainer[ind])
}
