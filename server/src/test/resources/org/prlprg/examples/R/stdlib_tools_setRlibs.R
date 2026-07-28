#? stdlib
`setRlibs` <- function (lib0 = "", pkgdir = ".", suggests = FALSE, libdir = NULL, 
    self = FALSE, self2 = TRUE, quote = FALSE, LinkingTo = FALSE, 
    tests = FALSE) 
{
    WINDOWS <- .Platform$OS.type == "windows"
    useJunctions <- WINDOWS && !nzchar(Sys.getenv("R_WIN_NO_JUNCTIONS"))
    flink <- function(from, to) {
        if (WINDOWS) {
            if (useJunctions) {
                Sys.junction(from, to)
                if (file.exists(file.path(to, basename(from), 
                  "DESCRIPTION"))) 
                  return()
                unlink(file.path(to, basename(from)), recursive = TRUE)
            }
            res <- file.copy(from, to, recursive = TRUE)
        }
        else res <- file.symlink(from, to)
        if (!res) 
            stop(gettextf("cannot link from %s", from), domain = NA)
    }
    pi <- .split_description(.read_description(file.path(pkgdir, 
        "DESCRIPTION")))
    thispkg <- unname(pi$DESCRIPTION["Package"])
    tmplib <- tempfile("RLIBS_")
    dir.create(tmplib)
    test_recommended <- config_val_to_logical(Sys.getenv("_R_CHECK_NO_RECOMMENDED_", 
        "FALSE"))
    if (test_recommended) {
        recommended <- .get_standard_package_names()$recommended
        exceptions <- "codetools"
        if (thispkg %in% c("MASS", "Rcpp")) 
            exceptions <- c(exceptions, "Matrix", "lattice")
        if (thispkg %in% c("Modalclust", "aroma.core", "iWebPlots", 
            "openair", "oce", "pcalg", "tileHMM")) 
            exceptions <- c(exceptions, "KernSmooth")
        recommended <- recommended %w/o% exceptions
        for (pkg in recommended) {
            if (pkg == thispkg) 
                next
            dir.create(pd <- file.path(tmplib, pkg))
            f <- file.path(.Library, pkg, "DESCRIPTION")
            if (file.exists(f)) 
                file.copy(f, pd)
            close(file(file.path(pd, "dummy_for_check"), "w"))
        }
    }
    unlink_dummies <- function(pkgs) {
        pd <- file.path(tmplib, pkgs)
        unlink(pd[file.exists(file.path(pd, "dummy_for_check"))], 
            TRUE)
    }
    sug <- if (suggests) 
        names(pi$Suggests)
    else {
        VB <- unname(pi$DESCRIPTION["VignetteBuilder"])
        sug <- if (is.na(VB)) 
            character()
        else {
            VB <- unlist(strsplit(VB, ","))
            sug <- unique(gsub("[[:space:]]", "", VB))
            sug
        }
        if (tests) 
            c(sug, intersect(names(pi$Suggests), c("RUnit", "testthat", 
                "tinytest")))
        else sug
    }
    deps <- unique(c(names(pi$Depends), names(pi$Imports), if (LinkingTo) names(pi$LinkingTo), 
        sug))
    if (length(libdir) && self2) 
        flink(file.path(libdir, thispkg), tmplib)
    lp <- .libPaths()
    poss <- c(lp[length(lp)], .Library)
    already <- thispkg
    more <- unique(deps %w/o% already)
    while (length(more)) {
        m0 <- more
        more <- character()
        for (pkg in m0) {
            if (test_recommended) {
                if (pkg %in% recommended) 
                  unlink(file.path(tmplib, pkg), TRUE)
                if (pkg == "mgcv") 
                  unlink_dummies(c("Matrix", "lattice", "nlme") %w/o% 
                    thispkg)
                if (pkg == "Matrix") 
                  unlink_dummies("lattice" %w/o% thispkg)
                if (pkg == "class") 
                  unlink_dummies("MASS" %w/o% thispkg)
                if (pkg == "nlme") 
                  unlink_dummies("lattice" %w/o% thispkg)
            }
            where <- find.package(pkg, quiet = TRUE)
            if (length(where)) {
                if (dirname(where) %notin% poss) 
                  flink(where, tmplib)
                else if (!test_recommended) 
                  next
                pi <- readRDS(file.path(where, "Meta", "package.rds"))
                more <- c(more, names(pi$Depends), names(pi$Imports), 
                  names(pi$LinkingTo))
            }
        }
        already <- c(already, m0)
        more <- unique(more %w/o% already)
    }
    if (self) 
        flink(normalizePath(pkgdir), tmplib)
    rlibs <- tmplib
    if (nzchar(lib0)) 
        rlibs <- c(lib0, rlibs)
    rlibs <- paste(rlibs, collapse = .Platform$path.sep)
    if (quote) 
        rlibs <- shQuote(rlibs)
    c(paste0("R_LIBS=", rlibs), if (WINDOWS) "R_ENVIRON_USER='no_such_file'" else "R_ENVIRON_USER=''", 
        "R_LIBS_USER='NULL'", "R_LIBS_SITE='NULL'")
}
