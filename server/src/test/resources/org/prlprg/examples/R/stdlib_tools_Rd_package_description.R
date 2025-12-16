#? stdlib
`Rd_package_description` <- function (pkg, dir = Rd_macros_package_dir()) 
{
    desc <- .read_description(file.path(dir, "DESCRIPTION"))
    if (pkg != desc["Package"]) 
        stop(gettextf("DESCRIPTION file is for package '%s', not '%s'", 
            desc["Package"], pkg))
    Rd_escape_specials(desc["Description"])
}
