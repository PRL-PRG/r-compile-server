#? stdlib
`.installed_package_dependencies` <- function (pkgs, fields) 
{
    mat <- do.call(rbind, lapply(.libPaths(), .readPkgDesc, fields, 
        pkgs))
    lst <- apply(mat[, -c(1L, 2L), drop = FALSE], 1L, .clean_up_dependencies, 
        simplify = FALSE)
    names(lst) <- mat[, 1L]
    lst
}
