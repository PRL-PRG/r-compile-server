#? stdlib
`format.check_package_license` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    check <- Sys.getenv("_R_CHECK_LICENSE_")
    check <- if (check %in% c("maybe", "")) 
        (!(x$is_standardizable) || length(x$bad_pointers) || 
            length(x$bad_extensions) || length(x$license_stub_is_bad_DCF) || 
            length(x$license_stub_fields_not_complete))
    else isTRUE(as.logical(check))
    if (!check) 
        return(character())
    c(character(), if (!(x$is_canonical)) {
        c(gettext("Non-standard license specification:"), strwrap(x$license, 
            indent = 2L, exdent = 2L), gettextf("Standardizable: %s", 
            x$is_standardizable), if (x$is_standardizable) {
            c(gettext("Standardized license specification:"), 
                strwrap(x$standardization, indent = 2L, exdent = 2L))
        })
    }, if (length(y <- x$deprecated)) {
        c(gettextf("Deprecated license: %s", paste(y, collapse = " ")))
    }, if (length(y <- x$bad_pointers)) {
        c(gettextf("Invalid license file pointers: %s", paste(y, 
            collapse = " ")))
    }, if (length(y <- x$bad_extensions)) {
        c(gettext("License components with restrictions not permitted:"), 
            paste0("  ", y))
    }, if (length(y <- x$miss_extension)) {
        c(gettext("License components which are templates and need '+ file LICENSE':"), 
            paste0("  ", y))
    }, if (length(y <- x$license_stub_is_bad_DCF)) gettext("License stub is invalid DCF."), 
        if (length(y <- x$license_stub_fields_not_complete)) {
            c(gettext("License stub records with missing/empty fields:", 
                paste0("  ", y)))
        }, if (length(y <- x$ACM)) {
            gettext("Uses ACM license: only appropriate for pre-2013 ACM TOMS code")
        })
}
