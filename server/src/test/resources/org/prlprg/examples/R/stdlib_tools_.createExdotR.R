#? stdlib
`.createExdotR` <- function (pkg, pkgdir, silent = FALSE, use_gct = FALSE, addTiming = FALSE, 
    ..., commentDontrun = TRUE, commentDonttest = TRUE, installed = TRUE) 
{
    Rfile <- paste0(pkg, "-Ex.R")
    db <- if (installed) 
        Rd_db(basename(pkgdir), lib.loc = dirname(pkgdir))
    else Rd_db(dir = pkgdir)
    if (!length(db)) {
        message("no parsed files found")
        return(invisible(NULL))
    }
    if (!silent) 
        message("  Extracting from parsed Rd's ", appendLF = FALSE, 
            domain = NA)
    files <- names(db)
    if (pkg == "grDevices") 
        files <- files[!grepl("^(unix|windows)/", files)]
    filedir <- tempfile()
    dir.create(filedir)
    on.exit(unlink(filedir, recursive = TRUE))
    cnt <- 0L
    for (f in files) {
        nm <- sub("\\.[Rr]d$", "", basename(f))
        Rd2ex(db[[f]], file.path(filedir, paste0(nm, ".R")), 
            defines = NULL, commentDontrun = commentDontrun, 
            commentDonttest = commentDonttest)
        cnt <- cnt + 1L
        if (!silent && cnt%%10L == 0L) 
            message(".", appendLF = FALSE, domain = NA)
    }
    if (!silent) 
        message()
    nof <- length(Sys.glob(file.path(filedir, "*.R")))
    if (!nof) 
        return(invisible(NULL))
    massageExamples(pkg, filedir, Rfile, use_gct, addTiming, 
        commentDonttest = commentDonttest, ...)
    invisible(Rfile)
}
