#? stdlib
`package_version` <- function (x, strict = TRUE) 
{
    if (is.package_version(x)) 
        return(x)
    if (is.list(x) && all(c("major", "minor") %in% names(x))) 
        return(R_system_version(paste(x[c("major", "minor")], 
            collapse = ".")))
    .make_numeric_version(x, strict, .standard_regexps()$valid_package_version, 
        "package_version")
}
