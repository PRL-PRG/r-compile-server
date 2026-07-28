#? stdlib
`chooseBioCmirror` <- function (graphics = getOption("menu.graphics"), ind = NULL, 
    local.only = FALSE) 
{
    m <- .getMirrors("https://bioconductor.org/BioC_mirrors.csv", 
        file.path(R.home("doc"), "BioC_mirrors.csv"), all = FALSE, 
        local.only = local.only)
    url <- .chooseMirror(m, "BioC", graphics, ind)
    if (length(url)) 
        options(BioC_mirror = url)
    invisible()
}
