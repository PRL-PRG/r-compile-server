#? stdlib
`getCRANmirrors` <- function (all = FALSE, local.only = FALSE) 
{
    .getMirrors("https://cran.r-project.org/CRAN_mirrors.csv", 
        file.path(R.home("doc"), "CRAN_mirrors.csv"), all = all, 
        local.only = local.only)
}
