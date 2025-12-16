#? stdlib
`.vinstall_package_namespaces_as_RDS` <- function (dir, packages) 
{
    for (p in unlist(strsplit(packages, "[[:space:]]+"))) .install_package_namespace_info(file.path(dir, 
        p), file.path(dir, p))
    invisible()
}
