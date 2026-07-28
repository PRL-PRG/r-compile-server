#? stdlib
`Rd_package_indices` <- function (pkg, lib.loc = Sys.getenv("R_BUILD_TEMPLIB")) 
{
    if (!length(find.package(pkg, lib.loc = lib.loc, quiet = TRUE))) 
        result <- c("", "Index:  This package was not yet installed at build time.\\cr")
    else {
        tabular <- function(col1, col2) c("\\tabular{ll}{", paste0(col1, 
            " \\tab ", col2, "\\cr"), "}")
        info <- library(help = pkg, lib.loc = lib.loc, character.only = TRUE)
        result <- NULL
        if (!is.null(info$info[[2L]])) 
            result <- c("", "Index of help topics:", "\\preformatted{", 
                info$info[[2L]], "}")
        if (!is.null(info$info[[3L]])) 
            result <- c(result, "", "Further information is available in the following vignettes:\\cr\\cr", 
                tabular(paste0("\\code{", info$info[[3L]][, 1], 
                  "}"), info$info[[3L]][, 2]))
    }
    result
}
