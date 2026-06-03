#? stdlib
`.package_env` <- function (package_name) 
{
    as.environment(paste0("package:", package_name))
}
