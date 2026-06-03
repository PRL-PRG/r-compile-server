#? stdlib
`.vinstall_package_indices` <- function (src_dir, out_dir, packages) 
{
    for (p in unlist(strsplit(packages, "[[:space:]]+"))) .install_package_indices(file.path(src_dir, 
        p), file.path(out_dir, p))
    utils::make.packages.html(.Library, verbose = FALSE)
    invisible()
}
