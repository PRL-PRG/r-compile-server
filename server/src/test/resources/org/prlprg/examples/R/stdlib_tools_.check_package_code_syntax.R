#? stdlib
`.check_package_code_syntax` <- function (dir) 
{
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    else dir <- file_path_as_absolute(dir)
    dir_name <- basename(dir)
    dfile <- file.path(dirname(dir), "DESCRIPTION")
    enc <- if (file.exists(dfile)) 
        .read_description(dfile)["Encoding"]
    else NA
    oLC_ct <- Sys.getlocale("LC_CTYPE")
    on.exit(Sys.setlocale("LC_CTYPE", oLC_ct))
    if (!is.na(enc)) {
        if (.Platform$OS.type == "windows" && !l10n_info()[["UTF-8"]]) {
            switch(enc, latin2 = Sys.setlocale("LC_CTYPE", "polish"), 
                Sys.setlocale("LC_CTYPE", "C"))
        }
        else {
            loc <- Sys.getenv("R_ENCODING_LOCALES", NA_character_)
            if (!is.na(loc)) {
                loc <- strsplit(strsplit(loc, ":")[[1L]], "=")
                nm <- lapply(loc, `[[`, 1L)
                loc <- lapply(loc, `[[`, 2L)
                names(loc) <- nm
                if (!is.null(l <- loc[[enc]])) 
                  Sys.setlocale("LC_CTYPE", l)
                else Sys.setlocale("LC_CTYPE", "C")
            }
            else if (l10n_info()[["UTF-8"]]) {
            }
            else {
                switch(enc, latin1 = Sys.setlocale("LC_CTYPE", 
                  "en_US"), `utf-8` = , `UTF-8` = Sys.setlocale("LC_CTYPE", 
                  "en_US.UTF-8"), latin2 = Sys.setlocale("LC_CTYPE", 
                  "pl_PL"), latin9 = Sys.setlocale("LC_CTYPE", 
                  "fr_FR.iso885915@euro"), Sys.setlocale("LC_CTYPE", 
                  "C"))
            }
        }
    }
    collect_parse_woes <- function(f) {
        .error <- .warnings <- character()
        file <- file.path(dir, f)
        if (!is.na(enc) && (Sys.getlocale("LC_CTYPE") %notin% 
            c("C", "POSIX"))) {
            lines <- iconv(readLines(file, warn = FALSE), from = enc, 
                to = "", sub = "byte")
            withCallingHandlers(tryCatch(str2expression(lines), 
                error = function(e) .error <<- conditionMessage(e)), 
                warning = function(e) {
                  .warnings <<- c(.warnings, conditionMessage(e))
                  tryInvokeRestart("muffleWarning")
                })
        }
        else {
            withCallingHandlers(tryCatch(parse(file), error = function(e) .error <<- conditionMessage(e)), 
                warning = function(e) {
                  .warnings <<- c(.warnings, conditionMessage(e))
                  tryInvokeRestart("muffleWarning")
                })
        }
        if (length(.error) || length(.warnings)) 
            list(File = file.path(dir_name, f), Error = .error, 
                Warnings = .warnings)
        else NULL
    }
    out <- lapply(list_files_with_type(dir, "code", full.names = FALSE, 
        OS_subdirs = c("unix", "windows")), collect_parse_woes)
    structure(out[lengths(out) > 0L], class = "check_package_code_syntax")
}
