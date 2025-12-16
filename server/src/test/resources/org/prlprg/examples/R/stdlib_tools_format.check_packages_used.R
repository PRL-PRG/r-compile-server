#? stdlib
`format.check_packages_used` <- function (x, ...) 
{
    incoming <- identical(Sys.getenv("_R_CHECK_PACKAGES_USED_CRAN_INCOMING_NOTES_", 
        "FALSE"), "TRUE")
    ignore_unused_imports <- config_val_to_logical(Sys.getenv("_R_CHECK_PACKAGES_USED_IGNORE_UNUSED_IMPORTS_", 
        "FALSE"))
    c(character(), if (length(xx <- x$imports)) {
        if (length(xx) > 1L) {
            c(gettext("'::' or ':::' imports not declared from:"), 
                .pretty_format(sort(xx)))
        } else {
            gettextf("'::' or ':::' import not declared from: %s", 
                sQuote(xx))
        }
    }, if (length(xx <- x$others)) {
        if (length(xx) > 1L) {
            c(gettext("'library' or 'require' calls not declared from:"), 
                .pretty_format(sort(xx)))
        } else {
            gettextf("'library' or 'require' call not declared from: %s", 
                sQuote(xx))
        }
    }, if (length(xx <- x$imps)) {
        if (length(xx) > 1L) {
            c(gettext("'loadNamespace' or 'requireNamespace' calls not declared from:"), 
                .pretty_format(sort(xx)))
        } else {
            gettextf("'loadNamespace' or 'requireNamespace' call not declared from: %s", 
                sQuote(xx))
        }
    }, if (length(xx <- x$in_depends)) {
        msg <- "  Please remove these calls from your code."
        if (length(xx) > 1L) {
            c(gettext("'library' or 'require' calls to packages already attached by Depends:"), 
                .pretty_format(sort(xx)), msg)
        } else {
            c(gettextf("'library' or 'require' call to %s which was already attached by Depends.", 
                sQuote(xx)), msg)
        }
    }, if (length(xx <- x$bad_practice)) {
        msg <- "  Please use :: or requireNamespace() instead.\n  See section 'Suggested packages' in the 'Writing R Extensions' manual."
        if (length(xx) > 1L) {
            c(gettext("'library' or 'require' calls in package code:"), 
                .pretty_format(sort(xx)), msg)
        } else {
            c(gettextf("'library' or 'require' call to %s in package code.", 
                sQuote(xx)), msg)
        }
    }, if (length(xx <- x$unused_imports) && !ignore_unused_imports) {
        msg <- "  All declared Imports should be used."
        if (length(xx) > 1L) {
            c(gettext("Namespaces in Imports field not imported from:"), 
                .pretty_format(sort(xx)), msg)
        } else {
            c(gettextf("Namespace in Imports field not imported from: %s", 
                sQuote(xx)), msg)
        }
    }, if (length(xx <- x$depends_not_import)) {
        msg <- c("  These packages need to be imported from (in the NAMESPACE file)", 
            "  for when this namespace is loaded but not attached.")
        if (length(xx) > 1L) {
            c(gettext("Packages in Depends field not imported from:"), 
                .pretty_format(sort(xx)), msg)
        } else {
            c(gettextf("Package in Depends field not imported from: %s", 
                sQuote(xx)), msg)
        }
    }, if (length(xx <- x$imp2un)) {
        if (length(xx) > 1L) {
            c(gettext("Missing or unexported objects:"), .pretty_format(sort(xx)))
        } else {
            gettextf("Missing or unexported object: %s", sQuote(xx))
        }
    }, if (length(xx <- x$imp32)) {
        msg <- "See the note in ?`:::` about the use of this operator."
        msg <- strwrap(paste(msg, collapse = " "), indent = 2L, 
            exdent = 2L)
        if (length(xx) > 1L) {
            c(gettext("':::' calls which should be '::':"), .pretty_format(sort(xx)), 
                msg)
        } else {
            c(gettextf("':::' call which should be '::': %s", 
                sQuote(xx)), msg)
        }
    }, if (length(xx <- x$imp3ff)) {
        if (length(xx) > 1L) {
            c(gettext("Missing objects imported by ':::' calls:"), 
                .pretty_format(sort(xx)))
        } else {
            gettextf("Missing object imported by a ':::' call: %s", 
                sQuote(xx))
        }
    }, if (length(xxx <- x$imp3f)) {
        msg <- "See the note in ?`:::` about the use of this operator."
        msg <- strwrap(paste(msg, collapse = " "), indent = 2L, 
            exdent = 2L)
        if (incoming) {
            z <- sub(":::.*", "", xxx)
            base <- unlist(.get_standard_package_names()[c("base", 
                "recommended")])
            if (any(z %in% base)) msg <- c(msg, "  Including base/recommended package(s):", 
                .pretty_format(intersect(base, z)))
        }
        if (length(xxx) > 1L) {
            c(gettext("Unexported objects imported by ':::' calls:"), 
                .pretty_format(sort(xxx)), msg)
        } else if (length(xxx)) {
            c(gettextf("Unexported object imported by a ':::' call: %s", 
                sQuote(xxx)), msg)
        }
    }, if (isTRUE(x$imp3self)) {
        msg <- c("There are ::: calls to the package's namespace in its code.", 
            "A package almost never needs to use ::: for its own objects:")
        c(strwrap(paste(msg, collapse = " "), indent = 0L, exdent = 2L), 
            .pretty_format(sort(x$imp3selfcalls)))
    }, if (length(xx <- x$imp3unknown)) {
        msg <- "See the note in ?`:::` about the use of this operator."
        msg <- strwrap(paste(msg, collapse = " "), indent = 2L, 
            exdent = 2L)
        if (length(xx) > 1L) {
            c(gettext("Unavailable namespaces imported from by ':::' calls:"), 
                .pretty_format(sort(xx)), msg)
        } else {
            c(gettextf("Unavailable namespace imported from by a ':::' call: %s", 
                sQuote(xx)), msg)
        }
    }, if (length(xx <- x$data)) {
        if (length(xx) > 1L) {
            c(gettext("'data(package=)' calls not declared from:"), 
                .pretty_format(sort(xx)))
        } else {
            gettextf("'data(package=)' call not declared from: %s", 
                sQuote(xx))
        }
    }, if (nzchar(x$methods_message)) {
        x$methods_message
    })
}
