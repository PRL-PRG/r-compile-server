#? stdlib
`getDependencies` <- function (pkgs, dependencies = NA, available = NULL, lib = .libPaths()[1L], 
    binary = FALSE, ..., av2 = NULL) 
{
    if (is.null(dependencies)) 
        return(unique(pkgs))
    oneLib <- length(lib) == 1L
    dep2 <- NULL
    if (is.logical(dependencies) && is.na(dependencies)) 
        dependencies <- c("Depends", "Imports", "LinkingTo")
    depends <- is.character(dependencies) || (is.logical(dependencies) && 
        dependencies)
    if (depends && is.logical(dependencies)) {
        if (binary) {
            dependencies <- c("Depends", "Imports", "Suggests")
            dep2 <- c("Depends", "Imports")
        }
        else {
            dependencies <- c("Depends", "Imports", "LinkingTo", 
                "Suggests")
            dep2 <- c("Depends", "Imports", "LinkingTo")
        }
    }
    if (depends && !oneLib) {
        warning("Do not know which element of 'lib' to install dependencies into\nskipping dependencies")
        depends <- FALSE
    }
    p0 <- unique(pkgs)
    miss <- !p0 %in% row.names(available)
    base <- vapply(p0, isBasePkg, FALSE)
    if (sum(base)) 
        warning(sprintf(ngettext(sum(base), "package %s is a base package, and should not be updated", 
            "packages %s are base packages, and should not be updated"), 
            paste(sQuote(p0[base]), collapse = ", ")), domain = NA, 
            call. = FALSE)
    m0 <- miss & !base
    msg2 <- NULL
    if (sum(m0) && !is.null(av2)) {
        keep <- rownames(av2) %in% p0[m0]
        av2 <- av2[keep, , drop = FALSE]
        if (nrow(av2)) {
            ds <- av2[, "Depends"]
            ds[is.na(ds)] <- ""
            x <- lapply(strsplit(sub("^[[:space:]]*", "", ds), 
                "[[:space:]]*,[[:space:]]*"), function(s) s[grepl("^R[[:space:]]*\\(", 
                s)])
            lens <- lengths(x)
            pos <- which(lens > 0L)
            av2 <- av2[pos, , drop = FALSE]
            x <- x[pos]
            msg2 <- paste(sQuote(av2[, "Package"]), "version", 
                av2[, "Version"], "is in the repositories but depends on", 
                unlist(x))
        }
    }
    if (sum(m0)) {
        msg <- paste0(if (binary) 
            "as a binary package ", "for this version of R")
        msg3 <- c(paste0(ngettext(sum(m0), "A version of this package for your version of R might be available elsewhere,\nsee the ideas at\n", 
            "Versions of these packages for your version of R might be available elsewhere,\nsee the ideas at\n"), 
            if (grepl("Under development", R.version.string)) {
                "https://cran.r-project.org/doc/manuals/r-devel/R-admin.html#Installing-packages"
            } else {
                "https://cran.r-project.org/doc/manuals/r-patched/R-admin.html#Installing-packages"
            }))
        warning(sprintf(ngettext(sum(m0), "package %s is not available %s", 
            "packages %s are not available %s"), paste(sQuote(p0[m0]), 
            collapse = ", "), paste(c(msg, msg2, "", msg3), collapse = "\n")), 
            domain = NA, call. = FALSE)
        if (sum(m0) == 1L && !is.na(w <- match(tolower(p0[m0]), 
            tolower(row.names(available))))) {
            warning(sprintf("Perhaps you meant %s ?", sQuote(row.names(available)[w])), 
                call. = FALSE, domain = NA)
        }
        flush.console()
    }
    p0 <- p0[!miss]
    if (depends && length(p0)) {
        p1 <- p0
        libpath <- .libPaths()
        if (!lib %in% libpath) 
            libpath <- c(lib, libpath)
        installed <- installed.packages(lib.loc = libpath, fields = c("Package", 
            "Version"), ...)
        not_avail <- character()
        repeat {
            deps <- apply(available[p1, dependencies, drop = FALSE], 
                1L, function(x) paste(x[!is.na(x)], collapse = ", "))
            res <- .clean_up_dependencies2(deps, installed, available)
            not_avail <- c(not_avail, res[[2L]])
            deps <- unique(res[[1L]])
            deps <- deps[!deps %in% c("R", pkgs)]
            if (!length(deps)) 
                break
            pkgs <- c(deps, pkgs)
            p1 <- deps
            if (!is.null(dep2)) {
                dependencies <- dep2
                dep2 <- NULL
            }
        }
        if (length(not_avail)) {
            not_avail <- unique(not_avail)
            warning(sprintf(ngettext(length(not_avail), "dependency %s is not available", 
                "dependencies %s are not available"), paste(sQuote(not_avail), 
                collapse = ", ")), domain = NA, call. = FALSE, 
                immediate. = TRUE)
            flush.console()
        }
        pkgs <- unique(pkgs)
        pkgs <- pkgs[pkgs %in% row.names(available)]
        if (length(pkgs) > length(p0)) {
            added <- setdiff(pkgs, p0)
            message(sprintf(ngettext(length(added), "also installing the dependency %s", 
                "also installing the dependencies %s"), paste(sQuote(added), 
                collapse = ", ")), "\n", domain = NA)
            flush.console()
        }
        p0 <- pkgs
    }
    p0
}
