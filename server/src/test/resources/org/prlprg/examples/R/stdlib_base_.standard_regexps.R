#? stdlib
`.standard_regexps` <- function () 
{
    list(valid_package_name = "[[:alpha:]][[:alnum:].]*[[:alnum:]]", 
        valid_package_version = "([[:digit:]]+[.-]){1,}[[:digit:]]+", 
        valid_R_system_version = "[[:digit:]]+\\.[[:digit:]]+\\.[[:digit:]]+", 
        valid_numeric_version = "([[:digit:]]+[.-])*[[:digit:]]+")
}
