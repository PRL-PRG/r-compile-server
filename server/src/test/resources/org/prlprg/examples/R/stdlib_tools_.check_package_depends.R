#? stdlib
`.check_package_depends` <- function (dir, force_suggests = TRUE, check_incoming = FALSE, 
    ignore_vignettes = FALSE) 
{
    .check_dependency_cycles <- function(db, available = utils::available.packages(), 
        dependencies = c("Depends", "Imports", "LinkingTo")) {
        this <- db[dependencies]
        names(this) <- dependencies
        known <- utils:::.clean_up_dependencies(this)
        info <- available[, dependencies, drop = FALSE]
        rn <- rownames(info)
        deps <- function(p) {
            if (p %notin% rn) 
                return(character())
            utils:::.clean_up_dependencies(info[p, ])
        }
        extra <- known
        repeat {
            extra <- unlist(lapply(extra, deps))
            extra <- setdiff(extra, known)
            if (!length(extra)) 
                break
            known <- c(known, extra)
        }
        known
    }
    if (length(dir) != 1L) 
        stop("The package 'dir' argument must be of length 1")
    db <- .read_description(file.path(dir, "DESCRIPTION"))
    dir_name <- basename(dir)
    package_name <- db["Package"]
    if (!identical(package_name, dir_name) && (!is.character(package_name) || 
        !nzchar(package_name))) {
        message(sprintf("package name '%s' seems invalid; using directory name '%s' instead", 
            package_name, dir_name))
        package_name <- dir_name
    }
    bad_depends <- list()
    repos <- getOption("repos")
    if (any(repos == "@CRAN@")) 
        repos <- .get_standard_repository_URLs()
    if (length(repos)) {
        available <- utils::available.packages(repos = repos)
        ad <- .check_dependency_cycles(db, available)
        pkgname <- db[["Package"]]
        if (pkgname %in% ad) 
            bad_depends$all_depends <- setdiff(ad, pkgname)
    }
    else if (check_incoming) 
        bad_depends$skipped <- "  No repository set, so cyclic dependency check skipped"
    ldepends <- .get_requires_with_version_from_package_db(db, 
        "Depends")
    limports <- .get_requires_with_version_from_package_db(db, 
        "Imports")
    llinks <- .get_requires_with_version_from_package_db(db, 
        "LinkingTo")
    lsuggests <- .get_requires_with_version_from_package_db(db, 
        "Suggests")
    lenhances <- .get_requires_with_version_from_package_db(db, 
        "Enhances")
    VB <- .get_requires_from_package_db(db, "VignetteBuilder")
    depends <- vapply(ldepends, `[[`, "", 1L)
    imports <- vapply(limports, `[[`, "", 1L)
    links <- vapply(llinks, `[[`, "", 1L)
    suggests <- vapply(lsuggests, `[[`, "", 1L)
    standard_package_names <- .get_standard_package_names()
    lreqs <- c(ldepends, limports, llinks, if (force_suggests) lsuggests)
    lreqs2 <- c(if (!force_suggests) lsuggests, lenhances)
    if (length(c(lreqs, lreqs2))) {
        installed <- character()
        installed_in <- character()
        for (lib in .libPaths()) {
            pkgs <- list.files(lib)
            pkgs <- pkgs[file.access(file.path(lib, pkgs, "DESCRIPTION"), 
                4) == 0]
            installed <- c(installed, pkgs)
            installed_in <- c(installed_in, rep.int(lib, length(pkgs)))
        }
        if (length(lreqs)) {
            reqs <- unique(sapply(lreqs, `[[`, 1L))
            bad <- setdiff(reqs, installed)
            if (length(bad)) {
                bad1 <- bad[bad %in% c(depends, imports, links)]
                if (length(bad1)) 
                  bad_depends$required_but_not_installed <- bad1
                bad2 <- setdiff(bad, bad1)
                if (length(bad2)) 
                  bad_depends$suggested_but_not_installed <- bad2
            }
            have_ver <- vapply(lreqs, function(x) length(x) == 
                3L, NA)
            lreqs3 <- lreqs[have_ver]
            if (length(lreqs3)) {
                bad <- character()
                for (r in lreqs3) {
                  pkg <- r[[1L]]
                  op <- r[[2L]]
                  where <- which(installed == pkg)
                  if (!length(where)) 
                    next
                  desc <- readRDS(file.path(installed_in[where[1L]], 
                    pkg, "Meta", "package.rds"))
                  current <- desc$DESCRIPTION["Version"]
                  target <- as.package_version(r[[3L]])
                  if (!do.call(op, list(current, target))) 
                    bad <- c(bad, pkg)
                }
                if (length(bad)) 
                  bad_depends$required_but_obsolete <- bad
            }
        }
        if (length(lenhances) && !config_val_to_logical(Sys.getenv("_R_CHECK_PACKAGE_DEPENDS_IGNORE_MISSING_ENHANCES_", 
            "FALSE"))) {
            m <- setdiff(sapply(lenhances, `[[`, 1L), installed)
            if (length(m)) 
                bad_depends$enhances_but_not_installed <- m
        }
        if (!force_suggests && length(lsuggests)) {
            m <- setdiff(sapply(lsuggests, `[[`, 1L), installed)
            if (length(m)) 
                bad_depends$suggests_but_not_installed <- m
        }
        if (!ignore_vignettes && length(VB)) {
            bad <- VB %w/o% c(package_name, "utils", depends, 
                imports, suggests)
            if (length(bad)) 
                bad_depends$required_for_checking_but_not_declared <- bad
            bad2 <- VB %w/o% c(package_name, installed)
            bad2 <- setdiff(bad2, bad)
            if (length(bad2)) 
                bad_depends$required_for_checking_but_not_installed <- bad2
            if (length(VB) && !dir.exists(file.path(dir, "vignettes"))) 
                bad_depends$no_vignettes <- VB
        }
    }
    defer <- package_name %in% db["VignetteBuilder"]
    vigns <- .package_vignettes_via_call_to_R(dir = dir, subdirs = file.path("inst", 
        "doc"), check = !defer)
    if (length(vigns$msg)) 
        bad_depends$bad_engine <- vigns$msg
    if (!is.null(vigns) && length(vigns$docs) > 0L) {
        reqs <- unique(unlist(.build_vignette_index(vigns)$Depends))
        reqs <- setdiff(reqs, c(depends, imports, suggests, package_name, 
            standard_package_names$base))
        if (length(reqs)) 
            bad_depends$missing_vignette_depends <- reqs
    }
    if (file_test("-f", file.path(dir, "NAMESPACE"))) {
        reqs <- .get_namespace_package_depends(dir)
        allowed_imports <- setdiff(standard_package_names$base, 
            c("methods", "stats4"))
        reqs <- setdiff(reqs, c(imports, depends, allowed_imports))
        if (length(reqs)) 
            bad_depends$missing_namespace_depends <- reqs
    }
    deps <- setdiff(depends, c("R", "base", "datasets", "grDevices", 
        "graphics", "methods", "utils", "stats"))
    if (length(deps) > 5L) 
        bad_depends$many_depends <- deps
    lim <- as.integer(Sys.getenv("_R_CHECK_EXCESSIVE_IMPORTS_", 
        "0"))
    imps <- setdiff(imports, standard_package_names$base)
    if (!is.na(lim) && lim > 0 && length(imps) > lim) 
        bad_depends$many_imports <- imps
    if (check_incoming) {
        hdOnly <- c("BH", "RcppArmadillo", "RcppEigen")
        hd <- setdiff(intersect(hdOnly, c(depends, imports)), 
            .get_namespace_package_depends(dir, TRUE))
        if (length(hd)) 
            bad_depends$hdOnly <- hd
    }
    RM <- setdiff(.get_requires_from_package_db(db, "RdMacros"), 
        c(imports, depends))
    if (length(RM)) 
        bad_depends$missing_rdmacros_depends <- RM
    if (config_val_to_logical(Sys.getenv("_R_CHECK_ORPHANED_", 
        "FALSE"))) {
        strict <- setdiff(unique(c(as.character(depends), as.character(imports), 
            as.character(links))), bad_depends$required_but_not_installed)
        dependencies <- .expand_dependency_type_spec("strong")
        ipd <- utils:::.installed_package_dependencies
        new <- strict0 <- strict
        ex <- character()
        repeat {
            need <- unname(unlist(ipd(new, dependencies)))
            new <- setdiff(need, c(strict, ex))
            if (!length(new)) 
                break
            strict <- union(strict, new)
        }
        mt <- utils::maintainer
        strict2 <- sapply(strict, function(x) suppressWarnings(mt(x)))
        miss1 <- is.na(strict2)
        weak <- setdiff(as.character(suggests), bad_depends$suggested_but_not_installed)
        weak2 <- sapply(weak, function(x) suppressWarnings(mt(x)))
        miss2 <- is.na(weak2)
        if ((any(miss1) || any(miss2)) && !inherits(tryCatch(db <- CRAN_package_db()[, 
            c("Package", "Maintainer")], error = identity), "error")) {
            orphaned <- db[db$Maintainer == "ORPHANED", 1L]
            s2 <- intersect(strict[miss1], orphaned)
            w2 <- intersect(weak[miss2], orphaned)
        }
        else s2 <- w2 <- character()
        strict <- c(strict[!miss1 & strict2 == "ORPHANED"], s2)
        if (length(strict)) {
            strict0 <- sort(intersect(strict, strict0))
            strict1 <- sort(setdiff(strict, strict0))
            if (length(strict0)) 
                bad_depends$orphaned <- strict0
            if (length(strict1)) 
                bad_depends$orphaned1 <- strict1
        }
        weak <- c(weak[!miss2 & weak2 == "ORPHANED"], w2)
        if (length(weak)) 
            bad_depends$orphaned2 <- sort(weak)
    }
    class(bad_depends) <- "check_package_depends"
    bad_depends
}
