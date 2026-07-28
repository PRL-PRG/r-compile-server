#? stdlib
`.get_namespace_from_package_env` <- function (env) 
{
    package <- sub(".*:([^_]*).*", "\\1", attr(env, "name", exact = TRUE))
    if (length(package) && nzchar(package)) 
        .getNamespace(as.name(package))
}
