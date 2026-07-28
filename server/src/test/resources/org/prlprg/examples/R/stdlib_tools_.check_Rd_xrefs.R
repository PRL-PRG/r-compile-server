#? stdlib
`.check_Rd_xrefs` <- function (package, dir, lib.loc = NULL) 
{
    base <- unlist(.get_standard_package_names()[c("base", "recommended")], 
        use.names = FALSE)
    base <- base[dir.exists(file.path(.Library, base))]
    aliases <- lapply(base, Rd_aliases, lib.loc = NULL)
    if (!missing(package)) {
        pfile <- system.file("Meta", "package.rds", package = package, 
            lib.loc = lib.loc)
        pkgInfo <- readRDS(pfile)
    }
    else {
        pkgInfo <- .split_description(.get_package_metadata(dir))
    }
    pkgname <- pkgInfo$DESCRIPTION[["Package"]]
    deps <- c(names(pkgInfo$Depends), names(pkgInfo$Imports))
    pkgs <- setdiff(unique(deps), base)
    try_Rd_aliases <- function(...) tryCatch(Rd_aliases(...), 
        error = identity)
    aliases <- c(aliases, lapply(pkgs, try_Rd_aliases, lib.loc = lib.loc))
    aliases[vapply(aliases, inherits, "error", FUN.VALUE = NA)] <- NULL
    if (!missing(package)) {
        aliases1 <- Rd_aliases(package, lib.loc = lib.loc)
        if (!length(aliases1)) 
            return(structure(list(), class = "check_Rd_xrefs"))
        aliases <- c(aliases, list(aliases1))
        db <- .build_Rd_xref_db(package, lib.loc = lib.loc)
    }
    else {
        aliases1 <- Rd_aliases(dir = dir)
        if (!length(aliases1)) 
            return(structure(list(), class = "check_Rd_xrefs"))
        aliases <- c(aliases, list(aliases1))
        db <- .build_Rd_xref_db(dir = dir)
    }
    db <- cbind(do.call(rbind, db), File = rep.int(names(db), 
        vapply(db, NROW, 0L)))
    if (nrow(db) == 0L) 
        return(structure(list(), class = "check_Rd_xrefs"))
    anchor <- db[, 2L]
    have_equals <- startsWith(anchor, "=")
    if (any(have_equals)) 
        db[have_equals, 1:2] <- cbind(sub("^=", "", anchor[have_equals]), 
            "")
    db <- cbind(db, bad = FALSE, report = db[, 1L])
    have_anchor <- nzchar(anchor <- db[, 2L])
    db[have_anchor, "report"] <- paste0("[", db[have_anchor, 
        2L], "]{", db[have_anchor, 1L], "}")
    db[!have_anchor, "bad"] <- db[!have_anchor, 1L] %notin% unlist(aliases)
    have_colon <- grepl(":", anchor, fixed = TRUE)
    unknown <- character()
    thispkg <- anchor
    thisfile <- db[, 1L]
    thispkg[have_colon] <- sub("([^:]*):(.*)", "\\1", anchor[have_colon])
    thisfile[have_colon] <- sub("([^:]*):(.*)", "\\2", anchor[have_colon])
    use_aliases_from_CRAN <- config_val_to_logical(Sys.getenv("_R_CHECK_XREFS_USE_ALIASES_FROM_CRAN_", 
        "FALSE"))
    if (use_aliases_from_CRAN) {
        aliases_db <- NULL
        tried_aliases_db <- FALSE
    }
    anchors <- unique(thispkg[have_anchor])
    check_anchors <- config_val_to_logical(Sys.getenv("_R_CHECK_XREFS_PKGS_ARE_DECLARED_", 
        "FALSE"))
    if (check_anchors) {
        deps2 <- c(names(pkgInfo$Depends), names(pkgInfo$Imports), 
            names(pkgInfo$Suggests))
        undeclared <- setdiff(anchors, c(unique(deps2), pkgname, 
            base))
        if (length(undeclared)) {
            DESC <- pkgInfo$DESCRIPTION
            if ("Enhances" %in% names(DESC)) {
                enh <- names(.split_dependencies(DESC[["Enhances"]]))
                undeclared <- setdiff(undeclared, enh)
            }
        }
        if (length(undeclared)) 
            message(sprintf(ngettext(length(undeclared), "Undeclared package %s in Rd xrefs", 
                "Undeclared packages %s in Rd xrefs"), paste(sQuote(undeclared), 
                collapse = ", ")), domain = NA)
    }
    mind_suspects <- config_val_to_logical(Sys.getenv("_R_CHECK_XREFS_MIND_SUSPECT_ANCHORS_", 
        "FALSE"))
    if (mind_suspects) {
        db <- cbind(db, suspect = FALSE)
    }
    for (pkg in anchors) {
        if (missing(package) && pkg == pkgname) 
            next
        this <- have_anchor & (thispkg %in% pkg)
        top <- system.file(package = pkg, lib.loc = lib.loc)
        if (nzchar(top)) {
            RdDB <- file.path(top, "help", "paths.rds")
            nm <- sub("\\.[Rr]d", "", basename(readRDS(RdDB)))
            good <- thisfile[this] %in% nm
            suspect <- if (any(!good)) {
                aliases1 <- if (pkg %in% names(aliases)) 
                  aliases[[pkg]]
                else Rd_aliases(pkg, lib.loc = lib.loc)
                !good & (thisfile[this] %in% aliases1)
            }
            else FALSE
            db[this, "bad"] <- !good & !suspect
            if (mind_suspects) 
                db[this, "suspect"] <- suspect
        }
        else if (use_aliases_from_CRAN) {
            if (is.null(aliases_db)) {
                if (tried_aliases_db) {
                  unknown <- c(unknown, pkg)
                  next
                }
                tried_aliases_db <- TRUE
                aliases_db <- tryCatch(CRAN_aliases_db(), error = function(e) NULL)
                if (is.null(aliases_db)) {
                  unknown <- c(unknown, pkg)
                  next
                }
            }
            aliases <- aliases_db[[pkg]]
            if (is.null(aliases)) {
                unknown <- c(unknown, pkg)
                next
            }
            nm <- sub("\\.[Rr]d", "", basename(names(aliases)))
            good <- thisfile[this] %in% nm
            suspect <- if (any(!good)) {
                aliases1 <- unique(as.character(unlist(aliases, 
                  use.names = FALSE)))
                !good & (thisfile[this] %in% aliases1)
            }
            else FALSE
            db[this, "bad"] <- !good & !suspect
            if (mind_suspects) 
                db[this, "suspect"] <- suspect
        }
        else unknown <- c(unknown, pkg)
    }
    unknown <- unique(unknown)
    if (length(unknown)) {
        repos <- .get_standard_repository_URLs(ForXrefs = TRUE)
        aurls <- pkgInfo[["DESCRIPTION"]]["Additional_repositories"]
        if (!is.na(aurls)) {
            repos <- c(repos, .read_additional_repositories_field(aurls))
        }
        known <- try(suppressWarnings(utils::available.packages(utils::contrib.url(repos, 
            "source"), filters = c("R_version", "duplicates"))[, 
            "Package"]))
        miss <- if (inherits(known, "try-error")) 
            TRUE
        else unknown %in% c(known, c("GLMMGibbs", "survnnet", 
            "yags"))
        if (any(miss)) 
            message(sprintf(ngettext(sum(miss), "Package unavailable to check Rd xrefs: %s", 
                "Packages unavailable to check Rd xrefs: %s"), 
                paste(sQuote(unknown[miss]), collapse = ", ")), 
                domain = NA)
        if (any(!miss)) 
            message(sprintf(ngettext(sum(!miss), "Unknown package %s in Rd xrefs", 
                "Unknown packages %s in Rd xrefs"), paste(sQuote(unknown[!miss]), 
                collapse = ", ")), domain = NA)
    }
    bad <- db[, "bad"] == "TRUE"
    out <- list(bad = split(db[bad, "report"], db[bad, "File"]))
    if (mind_suspects && any(ind <- db[, "suspect"] == "TRUE")) {
        out <- c(out, list(suspect = split(db[ind, "report"], 
            db[ind, "File"])))
    }
    structure(out, class = "check_Rd_xrefs")
}
