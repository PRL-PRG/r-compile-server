#? stdlib
`format.check_Rd_metadata` <- function (x, ...) 
{
    c(character(), if (length(bad <- x$files_with_duplicated_name)) {
        unlist(lapply(names(bad), function(nm) {
            c(gettextf("Rd files with duplicated name '%s':", 
                nm), .pretty_format(bad[[nm]]))
        }))
    }, if (length(bad <- x$files_with_duplicated_aliases)) {
        unlist(lapply(names(bad), function(nm) {
            c(gettextf("Rd files with duplicated alias '%s':", 
                nm), .pretty_format(bad[[nm]]))
        }))
    }, if (length(bad <- x$files_without_aliases)) {
        c(gettext("Rd files without \\alias:"), .pretty_format(bad))
    }, if (length(bad <- x$files_with_bad_package_aliases)) {
        unlist(lapply(names(bad), function(nm) {
            c(gettextf("Invalid package aliases in Rd file '%s':", 
                nm), .pretty_format(bad[[nm]]))
        }))
    })
}
