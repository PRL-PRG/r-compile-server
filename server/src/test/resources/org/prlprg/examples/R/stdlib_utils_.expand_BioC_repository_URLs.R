#? stdlib
`.expand_BioC_repository_URLs` <- function (x) 
{
    x <- sub("%bm", as.character(getOption("BioC_mirror", "https://bioconductor.org")), 
        x, fixed = TRUE)
    sub("%v", as.character(.BioC_version_associated_with_R_version()), 
        x, fixed = TRUE)
}
