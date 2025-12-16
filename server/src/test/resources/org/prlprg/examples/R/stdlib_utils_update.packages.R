#? stdlib
`update.packages` <- function (lib.loc = NULL, repos = getOption("repos"), contriburl = contrib.url(repos, 
    type), method, instlib = NULL, ask = TRUE, available = NULL, 
    oldPkgs = NULL, ..., checkBuilt = FALSE, type = getOption("pkgType")) 
{
    if (!is.character(type)) 
        stop("invalid 'type'; must be a character string")
    force(ask)
    text.select <- function(old) {
        update <- NULL
        for (k in seq_len(nrow(old))) {
            cat(old[k, "Package"], ":\n", "Version", old[k, "Installed"], 
                "installed in", old[k, "LibPath"], if (checkBuilt) 
                  paste("built under R", old[k, "Built"]), "\n", 
                "Version", old[k, "ReposVer"], "available at", 
                simplifyRepos(old[k, "Repository"], type))
            cat("\n")
            answer <- askYesNo("Update?")
            if (is.na(answer)) {
                cat("cancelled by user\n")
                return(invisible())
            }
            if (isTRUE(answer)) 
                update <- rbind(update, old[k, ])
        }
        update
    }
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    if (type == "both" && (!missing(contriburl) || !is.null(available))) {
        stop("specifying 'contriburl' or 'available' requires a single type, not type = \"both\"")
    }
    if (is.null(available)) {
        available <- available.packages(contriburl = contriburl, 
            method = method, ...)
        if (missing(repos)) 
            repos <- getOption("repos")
    }
    if (!is.matrix(oldPkgs) && is.character(oldPkgs)) {
        subset <- oldPkgs
        oldPkgs <- NULL
    }
    else subset <- NULL
    if (is.null(oldPkgs)) {
        oldPkgs <- old.packages(lib.loc = lib.loc, contriburl = contriburl, 
            method = method, available = available, checkBuilt = checkBuilt)
        if (missing(repos)) 
            repos <- getOption("repos")
        if (!is.null(oldPkgs)) {
            pkg <- 0L
            while (pkg < nrow(oldPkgs)) {
                pkg <- pkg + 1L
                if (find.package(oldPkgs[pkg], lib.loc = lib.loc) != 
                  find.package(oldPkgs[pkg], lib.loc = oldPkgs[pkg, 
                    2])) {
                  warning(sprintf("package '%s' in library '%s' will not be updated", 
                    oldPkgs[pkg], oldPkgs[pkg, 2]), call. = FALSE, 
                    immediate. = TRUE)
                  oldPkgs <- oldPkgs[-pkg, , drop = FALSE]
                  pkg <- pkg - 1L
                }
            }
        }
        if (is.null(oldPkgs)) 
            return(invisible())
    }
    else if (!(is.matrix(oldPkgs) && is.character(oldPkgs))) 
        stop("invalid 'oldPkgs'; must be a character vector or a result from old.packages()")
    if (!is.null(subset)) {
        oldPkgs <- oldPkgs[rownames(oldPkgs) %in% subset, , drop = FALSE]
        if (nrow(oldPkgs) == 0) 
            return(invisible())
    }
    update <- if (is.character(ask) && ask == "graphics") {
        if (.Platform$OS.type == "windows" || .Platform$GUI == 
            "AQUA" || (capabilities("tcltk") && capabilities("X11"))) {
            k <- select.list(oldPkgs[, 1L], oldPkgs[, 1L], multiple = TRUE, 
                title = "Packages to be updated", graphics = TRUE)
            oldPkgs[match(k, oldPkgs[, 1L]), , drop = FALSE]
        }
        else text.select(oldPkgs)
    }
    else if (isTRUE(ask)) 
        text.select(oldPkgs)
    else oldPkgs
    if (length(update)) {
        if (is.null(instlib)) 
            instlib <- update[, "LibPath"]
        libs <- unique(instlib)
        for (l in libs) if (type == "both") 
            install.packages(update[instlib == l, "Package"], 
                l, repos = repos, method = method, ..., type = type)
        else install.packages(update[instlib == l, "Package"], 
            l, contriburl = contriburl, method = method, available = available, 
            ..., type = type)
    }
}

# Examples
