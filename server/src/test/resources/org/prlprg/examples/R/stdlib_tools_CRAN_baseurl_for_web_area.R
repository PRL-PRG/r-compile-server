#? stdlib
`CRAN_baseurl_for_web_area` <- function () 
Sys.getenv("R_CRAN_WEB", .get_CRAN_repository_URL())
