#? stdlib
`Rd_package_DESCRIPTION` <- function (pkg, lib.loc = Sys.getenv("R_BUILD_TEMPLIB")) 
{
    if (!length(find.package(pkg, lib.loc = lib.loc, quiet = TRUE))) 
        "This package was not yet installed at build time.\\cr"
    else {
        tabular <- function(col1, col2) c("\\tabular{ll}{", paste0(col1, 
            " \\tab ", col2, "\\cr"), "}")
        desc <- utils::packageDescription(pkg, lib.loc = lib.loc)
        if (pkg != desc[["Package"]]) 
            stop(gettextf("DESCRIPTION file is for package '%s', not '%s'", 
                desc["Package"], pkg))
        desc <- desc[names(desc) != "Built"]
        tabular(paste0(names(desc), ":"), Rd_escape_specials(unlist(desc)))
    }
}
