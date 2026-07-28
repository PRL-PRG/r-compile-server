#? stdlib
`format.check_details` <- function (x, ...) 
{
    flags <- x$Flags
    flavor <- x$Flavor
    paste0(sprintf("Package: %s %s\n", x$Package, x$Version), 
        ifelse(nzchar(flavor), sprintf("Flavor: %s\n", flavor), 
            ""), ifelse(nzchar(flags), sprintf("Flags: %s\n", 
            flags), ""), sprintf("Check: %s, Result: %s\n", x$Check, 
            x$Status), sprintf("  %s", gsub("\n", "\n  ", x$Output, 
            perl = TRUE)))
}
