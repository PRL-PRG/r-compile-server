#? stdlib
`Rd_package_maintainer` <- function (pkg, dir = Rd_macros_package_dir()) 
{
    desc <- .read_description(file.path(dir, "DESCRIPTION"))
    if (pkg != desc["Package"]) 
        stop(gettextf("DESCRIPTION file is for package '%s', not '%s'", 
            desc["Package"], pkg))
    desc <- c(desc, .expand_package_description_db_R_fields(desc))
    Rd_escape_specials(desc["Maintainer"])
}
