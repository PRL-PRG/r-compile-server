#? stdlib
`CRAN_package_db` <- function () 
as.data.frame(read_CRAN_object(CRAN_baseurl_for_web_area(), "web/packages/packages.rds"), 
    stringsAsFactors = FALSE)
