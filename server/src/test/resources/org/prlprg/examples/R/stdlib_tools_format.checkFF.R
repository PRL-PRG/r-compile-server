#? stdlib
`format.checkFF` <- function (x, ...) 
{
    xx <- attr(x, "empty")
    y <- attr(x, "wrong_pkg")
    z <- attr(x, "bad_pkg")
    zz <- attr(x, "undeclared")
    other_problem <- attr(x, "other_problem")
    res <- character()
    if (length(x)) {
        .fmt <- function(x) paste0("  ", deparse(x[[1L]]), "(", 
            deparse(x[[2L]]), ", ...)")
        msg <- ngettext(length(x), "Foreign function call without 'PACKAGE' argument:", 
            "Foreign function calls without 'PACKAGE' argument:", 
            domain = NA)
        res <- c(msg, unlist(lapply(x, .fmt)))
    }
    if (length(xx)) {
        .fmt <- function(x) paste0("  ", deparse(x[[1L]]), "(", 
            deparse(x[[2L]]), ", ...)")
        msg <- ngettext(length(x), "Foreign function call with empty 'PACKAGE' argument:", 
            "Foreign function calls with empty 'PACKAGE' argument:", 
            domain = NA)
        res <- c(res, msg, unlist(lapply(xx, .fmt)))
    }
    if (length(y)) {
        bases <- .get_standard_package_names()$base
        .fmt2 <- function(x, z) {
            if ("PACKAGE" %in% names(x)) 
                paste0("  ", deparse(x[[1L]]), "(", deparse(x[[2L]]), 
                  ", ..., PACKAGE = \"", z, "\")")
            else paste0("  ", deparse(x[[1L]]), "(", deparse(x[[2L]]), 
                ", ...)")
        }
        base <- z %in% bases
        if (any(base)) {
            xx <- unlist(lapply(seq_along(y)[base], function(i) .fmt2(y[[i]], 
                z[i])))
            xx <- unique(xx)
            msg <- ngettext(length(xx), "Foreign function call to a base package:", 
                "Foreign function calls to a base package:", 
                domain = NA)
            res <- c(res, msg, sort(xx))
        }
        if (any(!base)) {
            xx <- unlist(lapply(seq_along(y)[!base], function(i) .fmt2(y[[i]], 
                z[i])))
            xx <- unique(xx)
            msg <- ngettext(length(xx), "Foreign function call to a different package:", 
                "Foreign function calls to a different package:", 
                domain = NA)
            res <- c(res, msg, sort(xx))
        }
    }
    if (length(zz)) {
        zz <- unique(zz)
        msg <- ngettext(length(zz), "Undeclared package in foreign function calls:", 
            "Undeclared packages in foreign function calls:", 
            domain = NA)
        res <- c(res, msg, paste("  ", paste(sQuote(sort(zz)), 
            collapse = ", ")))
    }
    if (length(other_problem)) {
        msg <- ngettext(length(other_problem), "Registration problem:", 
            "Registration problems:", domain = NA)
        res <- c(res, msg)
        other_desc <- attr(x, "other_desc")
        for (i in seq_along(other_problem)) {
            res <- c(res, paste0("  ", other_desc[i], ":"), paste0("   ", 
                deparse(other_problem[[i]])))
        }
    }
    z3 <- attr(x, "dup_false")
    if (length(z3)) {
        msg <- ngettext(length(z3), "Call with DUP:", "Calls with DUP:", 
            domain = NA)
        res <- c(res, msg)
        for (i in seq_along(z3)) {
            res <- c(res, paste0("   ", deparse(z3[[i]])))
        }
    }
    res
}
