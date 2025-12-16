#? stdlib
`CRAN_check_results` <- function (flavors = NULL) 
{
    db <- read_CRAN_object(CRAN_baseurl_for_web_area(), "web/checks/check_results.rds")
    if (!is.null(flavors)) 
        db <- db[!is.na(match(db$Flavor, flavors)), ]
    db
}
