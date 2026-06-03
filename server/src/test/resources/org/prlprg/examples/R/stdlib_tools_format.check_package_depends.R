#? stdlib
`format.check_package_depends` <- function (x, ...) 
{
    c(character(), if (length(x$skipped)) c(x$skipped, ""), if (length(x$all_depends)) {
        c("There is circular dependency in the installation order:", 
            .pretty_format2("  One or more packages in", x$all_depends), 
            "  depend on this package (for the versions on the repositories).", 
            "")
    }, if (length(bad <- x$required_but_not_installed) > 1L) {
        c(.pretty_format2("Packages required but not available:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("Package required but not available: %s", sQuote(bad)), 
            "")
    }, if (length(bad <- x$suggested_but_not_installed) > 1L) {
        c(.pretty_format2("Packages suggested but not available:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("Package suggested but not available: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x$required_but_obsolete) > 1L) {
        c(.pretty_format2("Packages required and available but unsuitable versions:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("Package required and available but unsuitable version: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x$suggests_but_not_installed) > 1L) {
        c(.pretty_format2("Packages suggested but not available for checking:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("Package suggested but not available for checking: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x$enhances_but_not_installed) > 1L) {
        c(.pretty_format2("Packages which this enhances but not available for checking:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("Package which this enhances but not available for checking: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x$required_for_checking_but_not_declared) > 
        1L) {
        c(.pretty_format2("VignetteBuilder packages not declared:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("VignetteBuilder package not declared: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x$required_for_checking_but_not_installed) > 
        1L) {
        c(.pretty_format2("VignetteBuilder packages required for checking but not installed:", 
            bad), "")
    } else if (length(bad)) {
        c(sprintf("VignetteBuilder package required for checking but not installed: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x$missing_vignette_depends)) {
        c(if (length(bad) > 1L) {
            c("Vignette dependencies not required:", .pretty_format(bad))
        } else {
            sprintf("Vignette dependency not required: %s", sQuote(bad))
        }, strwrap(gettextf("Vignette dependencies (%s entries) must be contained in the DESCRIPTION Depends/Suggests/Imports entries.", 
            "\\VignetteDepends{}")), "")
    }, if (length(bad <- x$no_vignettes)) {
        c(if (length(bad) > 1L) {
            c("Vignette dependencies required without any vignettes:", 
                .pretty_format(bad))
        } else {
            sprintf("Vignette dependency required without any vignettes: %s", 
                sQuote(bad))
        }, "")
    }, if (length(bad <- x$missing_rdmacros_depends)) {
        c(if (length(bad) > 1L) .pretty_format2("RdMacros packages not required:", 
            bad) else sprintf("RdMacros package not required: %s", 
            sQuote(bad)), strwrap("RdMacros packages must be contained in the DESCRIPTION Imports/Depends entries."), 
            "")
    }, if (length(bad <- x$missing_namespace_depends)) {
        error_str <- "missing from DESCRIPTION Imports/Depends entries:"
        c(if (length(bad) > 1L) .pretty_format2(paste("Namespace dependencies", 
            error_str), bad) else sprintf("Namespace dependency %s %s", 
            error_str, sQuote(bad)), "")
    }, if (length(y <- x$many_depends)) {
        c(.pretty_format2("Depends: includes the non-default packages:", 
            y), strwrap(paste("Adding so many packages to the search path", 
            "is excessive", "and importing selectively is preferable.", 
            collapse = ", ")), "")
    }, if (ly <- length(x$many_imports)) {
        c(sprintf("Imports includes %d non-default packages.", 
            ly), strwrap(paste("Importing from so many packages", 
            "makes the package vulnerable to any of them", "becoming unavailable.  Move as many as possible to", 
            "Suggests and use conditionally.", collapse = ", ")), 
            "")
    }, if (length(y <- x$bad_engine)) {
        c(y, "")
    }, if (length(bad <- x$hdOnly)) {
        c(if (length(bad) > 1L) c("Packages in Depends/Imports which should probably only be in LinkingTo:", 
            .pretty_format(bad)) else sprintf("Package in Depends/Imports which should probably only be in LinkingTo: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x[["orphaned"]])) {
        c(if (length(bad) > 1L) c("Requires orphaned packages:", 
            .pretty_format(bad)) else sprintf("Requires orphaned package: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x[["orphaned1"]])) {
        c(if (length(bad) > 1L) c("Requires (indirectly) orphaned packages:", 
            .pretty_format(bad)) else sprintf("Requires (indirectly) orphaned package: %s", 
            sQuote(bad)), "")
    }, if (length(bad <- x[["orphaned2"]])) {
        c(if (length(bad) > 1L) c("Suggests orphaned packages:", 
            .pretty_format(bad)) else sprintf("Suggests orphaned package: %s", 
            sQuote(bad)), "")
    })
}
