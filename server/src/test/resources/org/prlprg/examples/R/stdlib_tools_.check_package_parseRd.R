#? stdlib
`.check_package_parseRd` <- function (dir, silent = FALSE, def_enc = FALSE, minlevel = -1) 
{
    if (file.exists(dfile <- file.path(dir, "DESCRIPTION"))) {
        enc <- read.dcf(dfile)[1L, ]["Encoding"]
        if (is.na(enc)) 
            enc <- "ASCII"
        else def_enc <- TRUE
    }
    else enc <- "ASCII"
    macros <- loadPkgRdMacros(dir)
    oenv <- Sys.getenv("_R_RD_MACROS_PACKAGE_DIR_", unset = NA)
    on.exit(if (!is.na(oenv)) Sys.setenv(`_R_RD_MACROS_PACKAGE_DIR_` = oenv) else Sys.unsetenv("_R_RD_MACROS_PACKAGE_DIR_"))
    Sys.setenv(`_R_RD_MACROS_PACKAGE_DIR_` = normalizePath(dir))
    pg <- list_files_with_type(file.path(dir, "man"), "docs", 
        full.names = TRUE, OS_subdirs = c("unix", "windows"))
    if (file.exists(nfile <- file.path(dir, "inst", "NEWS.Rd"))) 
        pg <- c(nfile, pg)
    bad <- character()
    for (f in pg) {
        tmp <- tryCatch(suppressMessages(if (f == nfile) 
            checkRd(f, encoding = "UTF-8", def_enc = TRUE, stages = "install")
        else checkRd(f, encoding = enc, def_enc = def_enc, macros = macros, 
            stages = c("build", "install", "render"))), error = identity)
        if (inherits(tmp, "error")) {
            bad <- c(bad, f)
            if (!silent) 
                message(geterrmessage())
        }
        else print(tmp, minlevel = minlevel)
    }
    if (length(bad)) 
        bad <- sQuote(sub(".*/", "", bad))
    if (length(bad) > 1L) 
        cat("problems found in ", paste(bad, collapse = ", "), 
            "\n", sep = "")
    else if (length(bad)) 
        cat("problem found in ", bad, "\n", sep = "")
    invisible()
}
