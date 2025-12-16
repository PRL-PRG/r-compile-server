#? stdlib
`print.codoc` <- function (x, ...) 
{
    functions_in_usages_not_in_code <- attr(x, "functions_in_usages_not_in_code")
    if (length(functions_in_usages_not_in_code)) {
        for (fname in names(functions_in_usages_not_in_code)) {
            writeLines(gettextf("Functions or methods with usage in Rd file '%s' but not in code:", 
                fname))
            .pretty_print(sQuote(unique(functions_in_usages_not_in_code[[fname]])))
            writeLines("")
        }
    }
    data_sets_in_usages_not_in_code <- attr(x, "data_sets_in_usages_not_in_code")
    if (length(data_sets_in_usages_not_in_code)) {
        for (fname in names(data_sets_in_usages_not_in_code)) {
            writeLines(gettextf("Data with usage in Rd file '%s' but not in code:", 
                fname))
            .pretty_print(sQuote(unique(data_sets_in_usages_not_in_code[[fname]])))
            writeLines("")
        }
    }
    variables_in_usages_not_in_code <- attr(x, "variables_in_usages_not_in_code")
    if (length(variables_in_usages_not_in_code)) {
        for (fname in names(variables_in_usages_not_in_code)) {
            writeLines(gettextf("Variables with usage in Rd file '%s' but not in code:", 
                fname))
            .pretty_print(sQuote(unique(variables_in_usages_not_in_code[[fname]])))
            writeLines("")
        }
    }
    if (!length(x)) 
        return(invisible(x))
    has_only_names <- is.character(x[[1L]][[1L]][["code"]])
    format_args <- function(s) {
        if (!length(s)) 
            "function()"
        else if (has_only_names) 
            paste0("function(", paste(s, collapse = ", "), ")")
        else {
            s <- paste(deparse(s), collapse = "")
            s <- gsub(" = ([,\\)])", "\\1", s)
            s <- gsub("<unescaped bksl>", "\\", s, fixed = TRUE)
            s <- gsub("^pairlist", "function", s)
            gsub("^as.pairlist\\(alist\\((.*)\\)\\)$", "function(\\1)", 
                s)
        }
    }
    summarize_mismatches_in_names <- function(nfc, nfd) {
        if (length(nms <- setdiff(nfc, nfd))) 
            writeLines(c(gettext("  Argument names in code not in docs:"), 
                strwrap(paste(nms, collapse = " "), indent = 4L, 
                  exdent = 4L)))
        if (length(nms <- setdiff(nfd, nfc))) 
            writeLines(c(gettext("  Argument names in docs not in code:"), 
                strwrap(paste(nms, collapse = " "), indent = 4L, 
                  exdent = 4L)))
        len <- min(length(nfc), length(nfd))
        if (len) {
            len <- seq_len(len)
            nfc <- nfc[len]
            nfd <- nfd[len]
            ind <- which(nfc != nfd)
            len <- length(ind)
            if (len) {
                if (len > 3L) {
                  writeLines(gettext("  Mismatches in argument names (first 3):"))
                  ind <- ind[1L:3L]
                }
                else {
                  writeLines(gettext("  Mismatches in argument names:"))
                }
                for (i in ind) {
                  writeLines(sprintf("    Position: %d Code: %s Docs: %s", 
                    i, nfc[i], nfd[i]))
                }
            }
        }
    }
    summarize_mismatches_in_values <- function(ffc, ffd) {
        nms <- intersect(names(ffc), names(ffd))
        vffc <- ffc[nms]
        vffd <- ffd[nms]
        ind <- which(as.character(vffc) != as.character(vffd))
        len <- length(ind)
        if (len) {
            if (len > 3L) {
                writeLines(gettext("  Mismatches in argument default values (first 3):"))
                ind <- ind[1L:3L]
            }
            else {
                writeLines(gettext("  Mismatches in argument default values:"))
            }
            for (i in ind) {
                multiline <- FALSE
                cv <- deparse(vffc[[i]])
                if (length(cv) > 1L) {
                  cv <- paste(cv, collapse = "\n      ")
                  multiline <- TRUE
                }
                dv <- deparse(vffd[[i]])
                if (length(dv) > 1L) {
                  dv <- paste(dv, collapse = "\n      ")
                  multiline <- TRUE
                }
                dv <- gsub("<unescaped bksl>", "\\", dv, fixed = TRUE)
                sep <- if (multiline) 
                  "\n    "
                else " "
                writeLines(sprintf("    Name: '%s'%sCode: %s%sDocs: %s", 
                  nms[i], sep, cv, sep, dv))
            }
        }
    }
    summarize_mismatches <- function(ffc, ffd) {
        if (has_only_names) 
            summarize_mismatches_in_names(ffc, ffd)
        else {
            summarize_mismatches_in_names(names(ffc), names(ffd))
            summarize_mismatches_in_values(ffc, ffd)
        }
    }
    for (fname in names(x)) {
        writeLines(gettextf("Codoc mismatches from Rd file '%s':", 
            fname))
        xfname <- x[[fname]]
        for (i in seq_along(xfname)) {
            ffc <- xfname[[i]][["code"]]
            ffd <- xfname[[i]][["docs"]]
            writeLines(c(xfname[[i]][["name"]], strwrap(gettextf("Code: %s", 
                format_args(ffc)), indent = 2L, exdent = 17L), 
                strwrap(gettextf("Docs: %s", format_args(ffd)), 
                  indent = 2L, exdent = 17L)))
            summarize_mismatches(ffc, ffd)
        }
        writeLines("")
    }
    invisible(x)
}
