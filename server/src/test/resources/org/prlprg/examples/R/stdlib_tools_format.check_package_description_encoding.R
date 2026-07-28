#? stdlib
`format.check_package_description_encoding` <- function (x, ...) 
{
    c(character(), if (length(x$non_portable_encoding)) {
        c(gettextf("Encoding '%s' is not portable", x$non_portable_encoding), 
            "")
    }, if (length(x$missing_encoding)) {
        gettext("Unknown encoding with non-ASCII data")
    }, if (length(x$fields_with_non_ASCII_tags)) {
        c(gettext("Fields with non-ASCII tags:"), .pretty_format(x$fields_with_non_ASCII_tags), 
            gettext("All field tags must be ASCII."), "")
    }, if (length(x$fields_with_non_ASCII_values)) {
        c(gettext("Fields with non-ASCII values:"), .pretty_format(x$fields_with_non_ASCII_values))
    }, if (any(as.integer(lengths(x)) > 0L)) {
        c(strwrap(gettextf("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual.")), 
            "")
    })
}
