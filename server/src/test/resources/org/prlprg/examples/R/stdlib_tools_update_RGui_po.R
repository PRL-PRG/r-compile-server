#? stdlib
`update_RGui_po` <- function (srcdir, pot_make = TRUE, mo_make = TRUE, mergeOpts = "") 
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
    setwd(srcdir)
    potfile <- "src/library/base/po/RGui.pot"
    if (pot_make) {
        cfiles <- c(file.path("src/gnuwin32", c("console.c", 
            "editor.c", "extra.c", "pager.c", "preferences.c", 
            "rui.c", "system.c")), file.path("src/extra/graphapp", 
            c("clipboard.c", "dialogs.c", "gmenus.c", "metafile.c", 
                "printer.c")), "src/library/utils/src/windows/dataentry.c", 
            "src/library/utils/src/windows/widgets.c", "src/library/grDevices/src/devWindows.c")
        ofile <- tempfile()
        cmd <- sprintf("xgettext --keyword --keyword=G_ --keyword=GN_ -o %s", 
            shQuote(ofile))
        cmd <- c(cmd, "--package-name=R", paste0("--package-version=", 
            getRversion()), "--add-comments=TRANSLATORS:", "--copyright-holder=\"The R Core Team\"", 
            "--msgid-bugs-address=\"bugs.r-project.org\"")
        cmd <- paste(c(cmd, cfiles), collapse = " ")
        if (system(cmd) != 0L) 
            stop("running xgettext failed", domain = NA)
        if (!same(potfile, ofile)) 
            file.copy(ofile, potfile, overwrite = TRUE)
    }
    pofiles <- dir("src/library/base/po", pattern = "^RGui-.*[.]po$", 
        full.names = TRUE)
    for (f in pofiles) {
        lang <- sub("^RGui-(.*)[.]po$", "\\1", basename(f))
        lang2 <- sub("[.]po", "", basename(f))
        message("  ", lang2, ":", appendLF = FALSE, domain = NA)
        cmd <- paste("msgmerge --update", mergeOpts, f, potfile)
        if (system(cmd) != 0L) {
            warning("running msgmerge failed", domain = NA)
            next
        }
        res <- checkPoFile(f, FALSE)
        if (nrow(res)) {
            print(res)
            next
        }
        if (!mo_make) 
            next
        dest <- file.path("src/library/translations/inst", lang, 
            "LC_MESSAGES")
        dir.create(dest, FALSE, TRUE)
        dest <- file.path(dest, "RGui.mo")
        if (file_test("-ot", f, dest)) 
            next
        cmd <- paste("msgfmt -c --statistics -o", dest, f)
        if (system(cmd) != 0L) 
            warning(sprintf("running msgfmt on %s failed", basename(f)), 
                domain = NA)
    }
    invisible()
}
