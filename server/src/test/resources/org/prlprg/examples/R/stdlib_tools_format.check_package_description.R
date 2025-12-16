#? stdlib
`format.check_package_description` <- function (x, ...) 
{
    fmt <- function(x) {
        if (length(x)) 
            paste(x, collapse = "\n")
        else character()
    }
    xx <- x
    xx$bad_Title <- xx$bad_Description <- NULL
    c(character(), if (length(x$missing_encoding)) gettext("Unknown encoding"), 
        if (length(y <- x$fields_with_non_ASCII_tags)) paste(c(gettext("Fields with non-ASCII tags:"), 
            .strwrap22(y), gettext("All field tags must be ASCII.")), 
            collapse = "\n"), if (length(y <- x$fields_with_non_ASCII_values)) paste(c(gettext("Fields with non-ASCII values:"), 
            .strwrap22(y), gettext("These fields must have ASCII values.")), 
            collapse = "\n"), fmt(.format_check_package_description_authors_at_R_field_results(x)), 
        if (length(x$bad_package)) paste(x$bad_package, collapse = "\n"), 
        if (length(x$bad_version)) gettext("Malformed package version."), 
        if (length(x$bad_maintainer)) gettext("Malformed maintainer field."), 
        if (any(as.integer(lengths(x$bad_depends_or_suggests_or_imports)) > 
            0L)) {
            bad <- x$bad_depends_or_suggests_or_imports
            paste(c(gettext("Malformed Depends or Suggests or Imports or Enhances field."), 
                if (length(y <- bad$bad_dep_entry)) c(gettext("Offending entries:"), 
                  paste0("  ", y), strwrap(gettextf("Entries must be names of packages optionally followed by '<=' or '>=', white space, and a valid version number in parentheses."))), 
                if (length(y <- bad$bad_dep_op)) c(gettext("Entries with infeasible comparison operator:"), 
                  paste0("  ", y), strwrap(gettextf("Only operators '<=' and '>=' are possible."))), 
                if (length(y <- bad$bad_dep_version)) c(gettext("Entries with infeasible version number:"), 
                  paste0("  ", y), strwrap(gettextf("Version numbers must be sequences of at least two non-negative integers, separated by single '.' or '-'.")))), 
                collapse = "\n")
        }, if (isTRUE(x$bad_vignettebuilder)) paste(c(gettext("Invalid VignetteBuilder field."), 
            strwrap(gettextf("This field must contain one or more packages (and no version requirement)."))), 
            collapse = "\n"), if (length(x$bad_priority)) paste(c(gettext("Invalid Priority field."), 
            strwrap(gettextf("Packages with priorities 'base' or 'recommended' or 'defunct-base' must already be known to R."))), 
            collapse = "\n"), fmt(c(if (isTRUE(x$bad_Title)) gettext("Malformed Title field: should not end in a period."), 
            if (isTRUE(x$bad_Description)) gettext("Malformed Description field: should contain one or more complete sentences."))), 
        if (any(as.integer(lengths(xx)) > 0L)) paste(c(strwrap(gettext("See section 'The DESCRIPTION file' in the 'Writing R Extensions' manual."))), 
            collapse = "\n"))
}
