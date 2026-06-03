#? stdlib
`CRAN_archive_db` <- function () 
read_CRAN_object(CRAN_baseurl_for_src_area(), "src/contrib/Meta/archive.rds")
