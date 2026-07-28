#? stdlib
`testInstalledBasic` <- function (scope = c("basic", "devel", "both", "internet", "all"), 
    outDir = file.path(R.home(), "tests"), testSrcdir = getTestSrcdir(outDir)) 
{
    scope <- match.arg(scope)
    oLCcoll <- Sys.getlocale("LC_COLLATE")
    on.exit(Sys.setlocale("LC_COLLATE", oLCcoll))
    Sys.setlocale("LC_COLLATE", "C")
    tests1 <- c("eval-etc", "simple-true", "arith-true", "lm-tests", 
        "ok-errors", "method-dispatch", "array-subset", "p-r-random-tests", 
        "d-p-q-r-tst-2", "any-all", "structure", "d-p-q-r-tests")
    tests2 <- c("complex", "print-tests", "lapack", "datasets", 
        "datetime", "iec60559")
    tests3 <- c("reg-tests-1a", "reg-tests-1b", "reg-tests-1c", 
        "reg-tests-1d", "reg-tests-1e", "reg-tests-2", "reg-examples1", 
        "reg-examples2", "reg-packages", "reg-S4-examples", "classes-methods", 
        "datetime3", "p-qbeta-strict-tst", "reg-IO", "reg-IO2", 
        "reg-plot", "reg-S4", "reg-BLAS")
    useDiff <- nzchar(Sys.which("diff"))
    runone <- function(f, diffOK = FALSE, inC = TRUE) {
        f <- fR <- paste0(f, ".R")
        if (srcDiffers) 
            f <- file.path(testSrcdir, fR)
        if (.Platform$OS.type == "windows") {
            Sys.set2 <- function(...) {
                stopifnot(...length() == 1L, nzchar(nm <- ...names()))
                oVal <- Sys.getenv(nm)
                Sys.setenv(...)
                oVal
            }
            oRD <- Sys.set2(R_DEFAULT_PACKAGES = "")
            oLa <- Sys.set2(LANGUAGE = "C")
            oLC <- Sys.set2(LC_COLLATE = "C")
            oLT <- Sys.set2(LC_TIME = "C")
            oSR <- Sys.set2(SRCDIR = SRCDIR)
            on.exit(Sys.setenv(LANGUAGE = oLa, R_DEFAULT_PACKAGES = oRD, 
                LC_COLLATE = oLC, LC_TIME = oLT, SRCDIR = oSR))
            if (inC) {
                oenv <- Sys.getenv("LC_CTYPE", unset = NA)
                on.exit(if (is.na(oenv)) Sys.unsetenv("LC_CTYPE") else Sys.setenv(LC_CTYPE = oenv), 
                  add = TRUE)
                Sys.setenv(LC_CTYPE = "C")
            }
            mkCmd <- identity
        }
        else {
            extra <- if (inC) 
                paste(extra0, "LC_ALL=C")
            else extra0
            mkCmd <- function(cmd) paste(extra, cmd)
        }
        if (!file.exists(f)) {
            if (!file.exists(fin <- paste0(f, "in"))) 
                stop("file ", sQuote(f), " not found", domain = NA)
            f <- fR
            message("creating ", sQuote(f), domain = NA)
            cmd <- mkCmd(paste(shQuote(file.path(R.home("bin"), 
                "R")), "--vanilla --no-echo -f", fin))
            if (system(cmd)) 
                stop("creation of ", sQuote(f), " failed", domain = NA)
            cat("\n", file = f, append = TRUE)
            on.exit(unlink(f), add = TRUE)
        }
        message("  running code in ", sQuote(f), domain = NA)
        outfile <- sub("rout$", "Rout", paste0(fR, "out"))
        cmd <- paste(shQuote(file.path(R.home("bin"), "R")), 
            "CMD BATCH --vanilla --no-timing", shQuote(f), shQuote(outfile))
        res <- system(mkCmd(cmd))
        if (res) {
            file.rename(outfile, paste0(outfile, ".fail"))
            message("FAILED")
            return(1L)
        }
        savefile <- paste0(outfile, ".save")
        if (srcDiffers) 
            savefile <- file.path(testSrcdir, savefile)
        if (file.exists(savefile)) {
            message(gettextf("  comparing %s to %s ...", sQuote(outfile), 
                sQuote(savefile)), appendLF = FALSE, domain = NA)
            res <- Rdiff(outfile, savefile, useDiff)
            if (!res) 
                message(" OK")
            else if (!diffOK) 
                return(1L)
        }
        0L
    }
    owd <- setwd(outDir)
    on.exit(setwd(owd), add = TRUE)
    if (!.is.writeable(".")) 
        stop(gettextf("directory %s is not writeable ", sQuote(outDir)), 
            domain = NA)
    getTestSrcdir <- function(odir) {
        if (file.exists("eval-etc.R")) 
            return(odir)
        if (file.exists("Makefile")) {
            lns <- readLines("Makefile", 12L)
            srcdir <- sub(" +$", "", sub("^srcdir *= *", "", 
                grep("^srcdir", lns, value = TRUE)))
            if (dir.exists(srcdir)) 
                return(srcdir)
        }
        odir
    }
    comparePdf <- function(fnam) {
        ff <- paste0(fnam, ".pdf")
        fsv <- paste0(ff, ".save")
        if (srcDiffers) 
            fsv <- file.path(testSrcdir, fsv)
        message("  comparing '", ff, "' to '", fsv, "' ...", 
            appendLF = FALSE, domain = NA)
        res <- Rdiff(ff, fsv, TRUE)
        message(if (res != 0L) 
            "DIFFERED"
        else "OK")
    }
    srcDiffers <- (normalizePath(testSrcdir) != normalizePath(outDir))
    SRCDIR <- if (srcDiffers) 
        testSrcdir
    else "."
    extra0 <- paste("LANGUAGE=en", "LC_COLLATE=C", "LC_TIME=C", 
        "R_DEFAULT_PACKAGES=", paste0("SRCDIR=", SRCDIR))
    if (scope %in% c("basic", "both", "all")) {
        message("running strict specific tests", domain = NA)
        for (f in tests1) if (runone(f)) 
            return(1L)
        message("running sloppy specific tests", domain = NA)
        for (f in tests2) runone(f, TRUE)
        message("running regression tests", domain = NA)
        for (f in tests3) {
            if (runone(f)) 
                return(invisible(1L))
            if (f == "reg-plot") {
                comparePdf(f)
            }
        }
        runone("reg-encodings", inC = FALSE)
        runone("reg-translation", inC = FALSE)
        runone("reg-tests-3", TRUE)
        runone("reg-examples3", TRUE)
        message("running tests of plotting Latin-1", domain = NA)
        message("  expect failure or some differences if not in a Latin or UTF-8 locale", 
            domain = NA)
        if (runone("reg-plot-latin1", TRUE, inC = FALSE) == 0L) {
            comparePdf("reg-plot-latin1")
        }
    }
    if (scope %in% c("devel", "both", "all")) {
        message("running tests of date-time printing\n expect platform-specific differences", 
            domain = NA)
        runone("datetime2")
        runone("datetime4")
        runone("datetime5")
        message("running tests of consistency of as/is.*", domain = NA)
        runone("isas-tests")
        message("running tests of random deviate generation (should no longer ever fail)")
        runone("p-r-random-tests", TRUE)
        message("running miscellanous strict devel checks", domain = NA)
        if (runone("misc-devel")) 
            return(invisible(1L))
        message("running tests demos from base and stats", domain = NA)
        if (runone("demos")) 
            return(invisible(1L))
        if (runone("demos2")) 
            return(invisible(1L))
        message("running tests of primitives", domain = NA)
        if (runone("primitives")) 
            return(invisible(1L))
        message("running regexp regression tests", domain = NA)
        if (runone("utf8-regex", inC = FALSE)) 
            return(invisible(1L))
        if (runone("PCRE")) 
            return(invisible(1L))
        message("running tests on encodings & iconv() - first with C, then current locale", 
            domain = NA)
        if (runone("iconv")) 
            return(invisible(1L))
        if (runone("iconv", inC = FALSE)) 
            return(invisible(1L))
        message("running tests of CRAN tools", domain = NA)
        if (runone("CRANtools")) 
            return(invisible(1L))
        message("running tests to possibly trigger segfaults", 
            domain = NA)
        if (runone("no-segfault")) 
            return(invisible(1L))
    }
    if (scope %in% c("internet", "all")) {
        message("running tests of Internet functions", domain = NA)
        runone("internet")
        message("running more Internet and socket tests", domain = NA)
        runone("internet2")
        runone("libcurl")
    }
    invisible(0L)
}
