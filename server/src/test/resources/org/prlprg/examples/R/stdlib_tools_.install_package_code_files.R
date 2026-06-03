#? stdlib
`.install_package_code_files` <- function (dir, outDir) 
{
    if (!dir.exists(dir)) 
        stop(gettextf("directory '%s' does not exist", dir), 
            domain = NA)
    dir <- file_path_as_absolute(dir)
    curLocale <- Sys.getlocale("LC_COLLATE")
    on.exit(Sys.setlocale("LC_COLLATE", curLocale), add = TRUE)
    lccollate <- "C"
    if (Sys.setlocale("LC_COLLATE", lccollate) != lccollate) {
        warning("cannot turn off locale-specific sorting via LC_COLLATE")
    }
    db <- .read_description(file.path(dir, "DESCRIPTION"))
    codeDir <- file.path(dir, "R")
    if (!dir.exists(codeDir)) 
        return(invisible())
    codeFiles <- list_files_with_type(codeDir, "code", full.names = FALSE)
    collationField <- c(paste0("Collate.", .OStype()), "Collate")
    if (any(i <- collationField %in% names(db))) {
        collationField <- collationField[i][1L]
        codeFilesInCspec <- .read_collate_field(db[collationField])
        badFiles <- unique(codeFilesInCspec[duplicated(codeFilesInCspec)])
        if (length(badFiles)) {
            out <- gettextf("\nduplicated files in '%s' field:", 
                collationField)
            out <- paste(out, paste0("  ", badFiles, collapse = "\n"), 
                sep = "\n")
            stop(out, domain = NA)
        }
        badFiles <- setdiff(codeFilesInCspec, codeFiles)
        if (length(badFiles)) {
            out <- gettextf("\nfiles in '%s' field missing from '%s':", 
                collationField, codeDir)
            out <- paste(out, paste0("  ", badFiles, collapse = "\n"), 
                sep = "\n")
            stop(out, domain = NA)
        }
        badFiles <- setdiff(codeFiles, codeFilesInCspec)
        if (length(badFiles)) {
            out <- gettextf("\nfiles in '%s' missing from '%s' field:", 
                codeDir, collationField)
            out <- paste(out, paste0("  ", badFiles, collapse = "\n"), 
                sep = "\n")
            stop(out, domain = NA)
        }
        codeFiles <- codeFilesInCspec
    }
    codeFiles <- file.path(codeDir, codeFiles)
    if (!dir.exists(outDir) && !dir.create(outDir)) 
        stop(gettextf("cannot open directory '%s'", outDir), 
            domain = NA)
    outCodeDir <- file.path(outDir, "R")
    if (!dir.exists(outCodeDir) && !dir.create(outCodeDir)) 
        stop(gettextf("cannot open directory '%s'", outCodeDir), 
            domain = NA)
    outFile <- file.path(outCodeDir, db["Package"])
    if (!file.create(outFile)) 
        stop(gettextf("unable to create '%s'", outFile), domain = NA)
    writeLines(paste0(".packageName <- \"", db["Package"], "\""), 
        outFile)
    enc <- as.vector(db["Encoding"])
    need_enc <- !is.na(enc)
    testParse <- function(...) {
        op <- options(showErrorCalls = FALSE)
        on.exit(options(op))
        parse(...)
        invisible()
    }
    if (need_enc && (Sys.getlocale("LC_CTYPE") %notin% c("C", 
        "POSIX"))) {
        con <- file(outFile, "a")
        on.exit(close(con))
        badfiles <- c()
        for (f in codeFiles) {
            lines <- readLines(f, warn = FALSE)
            if (enc == "UTF-8") {
                valid <- validUTF8(lines)
                if (any(!valid)) {
                  warning(sprintf("file %s is invalid UTF-8", 
                    sQuote(basename(f))), domain = NA, call. = FALSE)
                  badfiles <- c(badfiles, basename(f))
                }
            }
            tmp <- iconv(lines, from = enc, to = "")
            bad <- which(is.na(tmp))
            if (length(bad)) 
                tmp <- iconv(lines, from = enc, to = "", sub = "byte")
            comm <- grep("^[^#'\"]*#", lines[bad], invert = TRUE, 
                useBytes = TRUE)
            bad2 <- bad[comm]
            if (length(bad2)) {
                warning(sprintf(ngettext(length(bad2), "unable to re-encode %s line %s", 
                  "unable to re-encode %s lines %s"), sQuote(basename(f)), 
                  paste(bad2, collapse = ", ")), domain = NA, 
                  call. = FALSE)
            }
            line1 <- paste0("#line 1 \"", f, "\"")
            testParse(text = c(line1, tmp))
            writeLines(line1, con)
            writeLines(tmp, con)
        }
        if (length(badfiles)) {
            validate <- config_val_to_logical(Sys.getenv("_R_CHECK_VALIDATE_UTF8_", 
                "FALSE"))
            if (validate) 
                stop("invalidly encoded .R file(s)", domain = NA, 
                  call. = FALSE)
            else warning("invalidly encoded .R file(s)", domain = NA, 
                call. = FALSE)
        }
        close(con)
        on.exit()
    }
    else {
        lapply(codeFiles, testParse)
        if (!all(.file_append_ensuring_LFs(outFile, codeFiles))) 
            stop("unable to write code files")
    }
    invisible()
}
