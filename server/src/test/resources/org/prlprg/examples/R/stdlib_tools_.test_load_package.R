#? stdlib
`.test_load_package` <- function (pkg_name, lib) 
{
    options(warn = 1)
    res <- try(suppressPackageStartupMessages(library(pkg_name, 
        lib.loc = lib, character.only = TRUE, logical.return = TRUE)))
    if (inherits(res, "try-error") || !res) 
        stop("loading failed", call. = FALSE)
}
