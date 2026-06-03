#? stdlib
`R_system_version` <- function (x, strict = TRUE) 
.make_numeric_version(x, strict, .standard_regexps()$valid_R_system_version, 
    c("R_system_version", "package_version"))
