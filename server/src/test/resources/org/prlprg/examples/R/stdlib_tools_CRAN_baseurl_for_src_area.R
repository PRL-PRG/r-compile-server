#? stdlib
`CRAN_baseurl_for_src_area` <- function () 
Sys.getenv("R_CRAN_SRC", .get_CRAN_repository_URL())
