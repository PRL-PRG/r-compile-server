#? stdlib
`.getRequiredPackages` <- function (file = "DESCRIPTION", lib.loc = NULL, quietly = FALSE, 
    useImports = FALSE) 
{
    pkgInfo <- tools:::.split_description(tools:::.read_description(file))
    .getRequiredPackages2(pkgInfo, quietly, lib.loc, useImports)
    invisible()
}
