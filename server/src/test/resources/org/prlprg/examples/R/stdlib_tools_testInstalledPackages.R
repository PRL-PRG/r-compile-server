#? stdlib
`testInstalledPackages` <- function (outDir = ".", errorsAreFatal = TRUE, scope = c("both", 
    "base", "recommended"), types = c("examples", "tests", "vignettes"), 
    srcdir = NULL, Ropts = "", ...) 
{
    if (!.is.writeable(outDir)) 
        stop("directory ", sQuote(outDir), " is not writeable ", 
            domain = NA)
    ow <- options(warn = 1)
    on.exit(ow)
    scope <- match.arg(scope)
    status <- 0L
    pkgs <- character()
    known_packages <- .get_standard_package_names()
    if (scope %in% c("both", "base")) 
        pkgs <- known_packages$base
    if (scope %in% c("both", "recommended")) 
        pkgs <- c(pkgs, known_packages$recommended)
    mc.cores <- as.integer(Sys.getenv("TEST_MC_CORES", "1"))
    if (.Platform$OS.type != "windows" && !is.na(mc.cores) && 
        mc.cores > 1L) {
        do_one <- function(pkg) {
            if (is.null(srcdir) && pkg %in% known_packages$base) 
                srcdir <- R.home("tests/Examples")
            testInstalledPackage(pkg, .Library, outDir, types, 
                srcdir, Ropts, ...)
        }
        res <- parallel::mclapply(pkgs, do_one, mc.cores = mc.cores, 
            mc.preschedule = FALSE)
        res <- unlist(res) != 0L
        if (any(res)) {
            for (i in which(res)) warning(gettextf("testing '%s' failed", 
                pkgs[i]), domain = NA, call. = FALSE, immediate. = TRUE)
            if (errorsAreFatal) 
                stop(sprintf(ngettext(sum(res), "%d of the package tests failed", 
                  "%d of the package tests failed", domain = "R-tools"), 
                  sum(res)), domain = NA, call. = FALSE)
        }
    }
    else {
        for (pkg in pkgs) {
            if (is.null(srcdir) && pkg %in% known_packages$base) 
                srcdir <- R.home("tests/Examples")
            res <- testInstalledPackage(pkg, .Library, outDir, 
                types, srcdir, Ropts, ...)
            if (res) {
                status <- 1L
                msg <- gettextf("testing '%s' failed", pkg)
                if (errorsAreFatal) 
                  stop(msg, domain = NA, call. = FALSE)
                else warning(msg, domain = NA, call. = FALSE, 
                  immediate. = TRUE)
            }
        }
    }
    invisible(status)
}
