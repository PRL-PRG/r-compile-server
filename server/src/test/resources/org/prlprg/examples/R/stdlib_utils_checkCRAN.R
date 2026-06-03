#? stdlib
`checkCRAN` <- function (method) 
{
    master <- available.packages(contrib.url("https://CRAN.R-project.org"), 
        method = method)
    m <- getCRANmirrors()
    z <- list()
    for (url in as.character(m$URL)) z[[url]] <- available.packages(contrib.url(url), 
        method = method)
    lapply(z, function(a) all.equal(a, master))
}
