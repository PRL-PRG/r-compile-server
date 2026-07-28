#? stdlib
`read_CRAN_object` <- function (cran, path) 
{
    con <- gzcon(url(sprintf("%s/%s", cran, path), open = "rb"))
    on.exit(close(con))
    readRDS(con)
}
