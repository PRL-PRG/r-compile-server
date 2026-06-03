#? stdlib
`testInstalledPackage` <- function (pkg, lib.loc = NULL, outDir = ".", types = c("examples", 
    "tests", "vignettes"), srcdir = NULL, Ropts = "", ...) 
{
    types <- match.arg(types, c("examples", "tests", "vignettes"), 
        several.ok = TRUE)
    pkgdir <- find.package(pkg, lib.loc)
    owd <- setwd(outDir)
    on.exit(setwd(owd))
    strict <- as.logical(Sys.getenv("R_STRICT_PACKAGE_CHECK", 
        "FALSE"))
    useDiff <- nzchar(Sys.which("diff"))
    if ("examples" %in% types) {
        message(gettextf("Testing examples for package %s", sQuote(pkg)), 
            domain = NA)
        Rfile <- .createExdotR(pkg, pkgdir, silent = TRUE, ...)
        if (length(Rfile)) {
            outfile <- paste0(pkg, "-Ex.Rout")
            failfile <- paste0(outfile, ".fail")
            savefile <- paste0(outfile, ".prev")
            if (file.exists(outfile)) 
                file.rename(outfile, savefile)
            unlink(failfile)
            cmd <- paste(shQuote(file.path(R.home("bin"), "R")), 
                "CMD BATCH --vanilla --no-timing", Ropts, shQuote(Rfile), 
                shQuote(failfile))
            if (.Platform$OS.type == "windows") 
                Sys.setenv(R_LIBS = "")
            else cmd <- paste("R_LIBS=", cmd)
            res <- system(cmd)
            if (res) {
                message(gettextf("Error: running examples in %s failed", 
                  sQuote(Rfile)), domain = NA)
                return(invisible(1L))
            }
            else file.rename(failfile, outfile)
            savefile <- paste0(outfile, ".save")
            if (!is.null(srcdir)) 
                savefile <- file.path(srcdir, savefile)
            else {
                tfile <- file.path(pkgdir, "tests", "Examples", 
                  savefile)
                if (!file.exists(savefile) && file.exists(tfile)) 
                  savefile <- tfile
            }
            if (file.exists(savefile)) {
                if (file.exists(savefile)) {
                  message(gettextf("  comparing %s to %s ...", 
                    sQuote(outfile), sQuote(basename(savefile))), 
                    appendLF = FALSE, domain = NA)
                  cmd <- sprintf("invisible(tools::Rdiff('%s','%s',%s,TRUE))", 
                    outfile, savefile, as.character(useDiff))
                  out <- R_runR(cmd, "--vanilla --no-echo")
                  if (length(out)) {
                    if (strict) 
                      message(" ERROR")
                    else message(" NOTE")
                    writeLines(paste0("  ", out))
                    if (strict) 
                      stop("  ", "results differ from reference results")
                  }
                  else {
                    message(" OK")
                  }
                }
            }
            else {
                prevfile <- paste0(outfile, ".prev")
                if (file.exists(prevfile)) {
                  message(gettextf("  comparing %s to %s ...", 
                    sQuote(outfile), sQuote(basename(prevfile))), 
                    appendLF = FALSE, domain = NA)
                  cmd <- sprintf("invisible(tools::Rdiff('%s','%s',%s,TRUE))", 
                    outfile, prevfile, as.character(useDiff))
                  out <- R_runR(cmd, "--vanilla --no-echo")
                  if (length(out)) {
                    message(" NOTE")
                    writeLines(paste0("  ", out))
                  }
                  else {
                    message(" OK")
                  }
                }
            }
        }
        else warning(gettextf("no examples found for package %s", 
            sQuote(pkg)), call. = FALSE, domain = NA)
    }
    if ("tests" %in% types && dir.exists(d <- file.path(pkgdir, 
        "tests"))) {
        this <- paste0(pkg, "-tests")
        unlink(this, recursive = TRUE)
        dir.create(this)
        file.copy(Sys.glob(file.path(d, "*")), this, recursive = TRUE)
        setwd(this)
        message(gettextf("Running specific tests for package %s", 
            sQuote(pkg)), domain = NA)
        Rfiles <- dir(".", pattern = "\\.[rR]$")
        for (f in Rfiles) {
            message(gettextf("  Running %s", sQuote(f)), domain = NA)
            outfile <- sub("rout$", "Rout", paste0(f, "out"))
            cmd <- paste(shQuote(file.path(R.home("bin"), "R")), 
                "CMD BATCH --vanilla --no-timing", Ropts, shQuote(f), 
                shQuote(outfile))
            cmd <- if (.Platform$OS.type == "windows") 
                paste(cmd, "LANGUAGE=C")
            else paste("LANGUAGE=C", cmd)
            res <- system(cmd)
            if (res) {
                file.rename(outfile, paste0(outfile, ".fail"))
                message(gettextf("Error: running the tests in %s failed", 
                  sQuote(f)), domain = NA)
                return(invisible(1L))
            }
            savefile <- paste0(outfile, ".save")
            if (file.exists(savefile)) {
                message(gettextf("  comparing %s to %s ...", 
                  sQuote(outfile), sQuote(savefile)), appendLF = FALSE, 
                  domain = NA)
                res <- Rdiff(outfile, savefile, useDiff)
                if (!res) 
                  message(" OK")
            }
        }
        setwd(owd)
    }
    if ("vignettes" %in% types && dir.exists(file.path(pkgdir, 
        "doc"))) {
        message(gettextf("Running vignettes for package %s", 
            sQuote(pkg)), domain = NA)
        out <- format(checkVignettes(pkg, lib.loc = lib.loc, 
            latex = FALSE, weave = TRUE))
        if (length(out)) {
            writeLines(out)
            return(invisible(1L))
        }
    }
    invisible(0L)
}
