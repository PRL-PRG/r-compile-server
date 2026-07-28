#? stdlib
`CRAN_check_issues` <- function () 
read_CRAN_object(CRAN_baseurl_for_web_area(), "web/checks/check_issues.rds")
