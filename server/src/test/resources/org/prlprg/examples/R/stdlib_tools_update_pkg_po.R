#? stdlib
`update_pkg_po` <- function (pkgdir, pkg = NULL, version = NULL, pot_make = TRUE, 
    mo_make = TRUE, verbose = getOption("verbose"), mergeOpts = "", 
    copyright, bugs) 
{
    same <- function(a, b) {
        tmpa <- readLines(a)
        tmpb <- readLines(b)
        tmpa <- filtergrep("^\"POT-Creation-Date:", tmpa)
        tmpb <- filtergrep("^\"POT-Creation-Date:", tmpb)
        identical(tmpa, tmpb)
    }
    pwd <- getwd()
    coll <- Sys.getlocale("LC_COLLATE")
    on.exit({
        Sys.setlocale("LC_COLLATE", coll)
        setwd(pwd)
    })
    Sys.setlocale("LC_COLLATE", "C")
    setwd(pkgdir)
    dir.create("po", FALSE)
    files <- dir("po")
    desc <- "DESCRIPTION"
    if (file.exists(desc)) {
        desc <- read.dcf(desc, fields = c("Package", "Version"))
        name <- desc[1L]
        if (is.null(pkg)) 
            pkg <- name
        if (is.null(version)) 
            version <- desc[2L]
        if (missing(copyright)) 
            copyright <- NULL
        if (missing(bugs)) 
            bugs <- NULL
        stem <- file.path("inst", "po")
    }
    else {
        pkg <- basename(pkgdir)
        name <- "R"
        version <- as.character(getRversion())
        copyright <- "The R Core Team"
        bugs <- "bugs.r-project.org"
        stem <- file.path("..", "translations", "inst")
    }
    is_base <- (pkg == "base")
    have_src <- paste0(pkg, ".pot") %in% files
    mergeCmd <- paste("msgmerge", if (is.character(mergeOpts)) 
        paste("--update", mergeOpts))
    if (pot_make) {
        ofile <- tempfile()
        if (verbose) 
            cat("Creating pot: .. ")
        xgettext2pot(".", ofile, name, version, bugs)
        potfile <- file.path("po", paste0("R-", pkg, ".pot"))
        if (file.exists(potfile) && same(potfile, ofile)) {
            if (verbose) 
                cat("the same() as previous: not copying.\n")
        }
        else {
            if (verbose) 
                cat("copying to potfile", potfile, "\n")
            file.copy(ofile, potfile, overwrite = TRUE)
        }
    }
    else {
        if (!file.exists(potfile <- file.path("po", paste0("R-", 
            pkg, ".pot")))) 
            stop(gettextf("file '%s' does not exist", potfile), 
                domain = NA)
    }
    pofiles <- dir("po", pattern = "R-.*[.]po$", full.names = TRUE)
    pofiles <- pofiles[pofiles != "po/R-en@quot.po"]
    for (f in pofiles) {
        lang <- sub("^R-(.*)[.]po$", "\\1", basename(f))
        cmd <- paste(mergeCmd, f, shQuote(potfile))
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        else message("  R-", lang, ":", appendLF = FALSE, domain = NA)
        if (system(cmd) != 0L) {
            warning("running msgmerge on ", sQuote(f), " failed", 
                domain = NA)
            next
        }
        res <- checkPoFile(f, TRUE)
        if (nrow(res)) {
            print(res)
            message("not installing", domain = NA)
            next
        }
        if (!mo_make) 
            next
        dest <- file.path(stem, lang, "LC_MESSAGES")
        dir.create(dest, FALSE, TRUE)
        dest <- file.path(dest, sprintf("R-%s.mo", pkg))
        cmd <- paste("msgfmt -c --statistics -o", shQuote(dest), 
            shQuote(f))
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        if (system(cmd) != 0L) 
            warning(sprintf("running msgfmt on %s failed", basename(f)), 
                domain = NA, immediate. = TRUE)
    }
    if (l10n_info()[["UTF-8"]] && mo_make) {
        lang <- "en@quot"
        message("  R-", lang, ":", domain = NA)
        f <- tempfile()
        en_quote(potfile, f)
        dest <- file.path(stem, lang, "LC_MESSAGES")
        dir.create(dest, FALSE, TRUE)
        dest <- file.path(dest, sprintf("R-%s.mo", pkg))
        cmd <- paste("msgfmt -c --statistics -o", shQuote(dest), 
            shQuote(f))
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        if (system(cmd) != 0L) 
            warning(sprintf("running msgfmt on %s failed", basename(f)), 
                domain = NA, immediate. = TRUE)
    }
    if (!(is_base || have_src)) 
        return(invisible())
    if (pot_make) {
        ofile <- tempfile()
        if (!is_base) {
            dom <- pkg
            od <- setwd("src")
            exts <- "[.](c|cc|cpp|m|mm)$"
            cfiles <- dir(".", pattern = exts)
            for (subdir in c("windows", "cairo")) {
                if (dir.exists(subdir)) 
                  cfiles <- c(cfiles, dir(subdir, pattern = exts, 
                    full.names = TRUE))
            }
        }
        else {
            dom <- "R"
            od <- setwd("../../..")
            cfiles <- filtergrep("^#", readLines("po/POTFILES"))
        }
        cmd <- sprintf("xgettext --keyword=_ --keyword=N_ -o %s", 
            shQuote(ofile))
        cmd <- c(cmd, paste0("--package-name=", name), paste0("--package-version=", 
            version), "--add-comments=TRANSLATORS:", if (!is.null(copyright)) sprintf("--copyright-holder=\"%s\"", 
            copyright), if (!is.null(bugs)) sprintf("--msgid-bugs-address=\"%s\"", 
            bugs), if (is_base) "-C")
        cmd <- paste(c(cmd, cfiles), collapse = " ")
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        if (system(cmd) != 0L) 
            stop("running xgettext failed", domain = NA)
        setwd(od)
        potfile <- file.path("po", paste0(dom, ".pot"))
        if (!same(potfile, ofile)) 
            file.copy(ofile, potfile, overwrite = TRUE)
    }
    else {
        dom <- if (is_base) 
            "R"
        else pkg
        if (!file.exists(potfile <- file.path("po", paste0(dom, 
            ".pot")))) 
            stop(gettextf("file '%s' does not exist", potfile), 
                domain = NA)
    }
    pofiles <- dir("po", pattern = "^[^R].*[.]po$", full.names = TRUE)
    pofiles <- pofiles[pofiles != "po/en@quot.po"]
    for (f in pofiles) {
        lang <- sub("[.]po", "", basename(f))
        cmd <- paste(mergeCmd, shQuote(f), shQuote(potfile))
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        else message("  ", lang, ":", appendLF = FALSE, domain = NA)
        if (system(cmd) != 0L) {
            warning("running msgmerge on ", f, " failed", domain = NA)
            next
        }
        res <- checkPoFile(f, TRUE)
        if (nrow(res)) {
            print(res)
            message("not installing", domain = NA)
            next
        }
        if (!mo_make) 
            next
        dest <- file.path(stem, lang, "LC_MESSAGES")
        dir.create(dest, FALSE, TRUE)
        dest <- file.path(dest, sprintf("%s.mo", dom))
        cmd <- paste("msgfmt -c --statistics -o", shQuote(dest), 
            shQuote(f))
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        if (system(cmd) != 0L) 
            warning(sprintf("running msgfmt on %s failed", basename(f)), 
                domain = NA)
    }
    if (l10n_info()[["UTF-8"]] && mo_make) {
        lang <- "en@quot"
        message("  ", lang, ":", domain = NA)
        f <- tempfile()
        en_quote(potfile, f)
        dest <- file.path(stem, lang, "LC_MESSAGES")
        dir.create(dest, FALSE, TRUE)
        dest <- file.path(dest, sprintf("%s.mo", dom))
        cmd <- paste("msgfmt -c --statistics -o", shQuote(dest), 
            shQuote(f))
        if (verbose) 
            cat("Running cmd", cmd, ":\n")
        if (system(cmd) != 0L) 
            warning(sprintf("running msgfmt on %s failed", basename(f)), 
                domain = NA)
    }
    invisible()
}

# Examples
