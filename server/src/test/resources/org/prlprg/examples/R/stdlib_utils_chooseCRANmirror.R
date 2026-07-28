#? stdlib
`chooseCRANmirror` <- function (graphics = getOption("menu.graphics"), ind = NULL, 
    local.only = FALSE) 
{
    m <- getCRANmirrors(all = FALSE, local.only = local.only)
    url <- .chooseMirror(m, "CRAN", graphics, ind)
    if (length(url)) {
        repos <- getOption("repos")
        repos["CRAN"] <- url
        options(repos = repos)
    }
    invisible()
}
