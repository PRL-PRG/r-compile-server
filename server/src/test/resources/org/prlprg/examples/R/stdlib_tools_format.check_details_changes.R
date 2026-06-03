#? stdlib
`format.check_details_changes` <- function (x, ...) 
{
    if (!nrow(x)) 
        return(character())
    sprintf("Package: %s\nCheck: %s%s%s", x$Package, x$Check, 
        ifelse(nzchar(old <- x$Old), sprintf("\nOld result: %s", 
            old), ""), ifelse(nzchar(new <- x$New), sprintf("\nNew result: %s", 
            new), ""))
}
