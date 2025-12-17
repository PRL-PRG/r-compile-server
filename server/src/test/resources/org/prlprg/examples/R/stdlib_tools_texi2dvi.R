#? stdlib
`texi2dvi` <- function (file, pdf = FALSE, clean = FALSE, quiet = TRUE, texi2dvi = getOption("texi2dvi"), 
    texinputs = NULL, index = TRUE) 
{
    if (clean) 
        pre_files <- list.files(all.files = TRUE)
    do_cleanup <- function(clean) if (clean) {
        out_file <- paste(basename(file_path_sans_ext(file)), 
            if (pdf) 
                "pdf"
            else "dvi", sep = ".")
        files <- setdiff(list.files(all.files = TRUE), c(".", 
            "..", out_file, pre_files))
        file.remove(files)
    }
    if (identical(texi2dvi, "emulation")) 
        texi2dvi <- ""
    else {
        if (is.null(texi2dvi) || !nzchar(texi2dvi) || texi2dvi == 
            "texi2dvi") {
            texi2dvi <- Sys.which("texi2dvi")
            if (.Platform$OS.type == "windows" && !nzchar(texi2dvi)) 
                texi2dvi <- Sys.which("texify")
        }
        else if (!nzchar(Sys.which(texi2dvi))) {
            warning("texi2dvi script/program not available, using emulation")
            texi2dvi <- ""
        }
    }
    envSep <- .Platform$path.sep
    texinputs0 <- texinputs
    Rtexmf <- file.path(R.home("share"), "texmf")
    Rtexinputs <- file.path(Rtexmf, "tex", "latex")
    texinputs <- paste(c(texinputs0, Rtexinputs, ""), collapse = envSep)
    if (.Platform$OS.type == "windows") 
        texinputs <- gsub("\\", "/", texinputs, fixed = TRUE)
    Rbibinputs <- file.path(Rtexmf, "bibtex", "bib")
    bibinputs <- paste(c(texinputs0, Rbibinputs, ""), collapse = envSep)
    Rbstinputs <- file.path(Rtexmf, "bibtex", "bst")
    bstinputs <- paste(c(texinputs0, Rbstinputs, ""), collapse = envSep)
    otexinputs <- Sys.getenv("TEXINPUTS", unset = NA_character_)
    if (is.na(otexinputs)) {
        on.exit(Sys.unsetenv("TEXINPUTS"))
        otexinputs <- "."
    }
    else on.exit(Sys.setenv(TEXINPUTS = otexinputs))
    Sys.setenv(TEXINPUTS = paste(otexinputs, texinputs, sep = envSep))
    obibinputs <- Sys.getenv("BIBINPUTS", unset = NA_character_)
    if (is.na(obibinputs)) {
        on.exit(Sys.unsetenv("BIBINPUTS"), add = TRUE)
        obibinputs <- "."
    }
    else on.exit(Sys.setenv(BIBINPUTS = obibinputs, add = TRUE))
    Sys.setenv(BIBINPUTS = paste(obibinputs, bibinputs, sep = envSep))
    obstinputs <- Sys.getenv("BSTINPUTS", unset = NA_character_)
    if (is.na(obstinputs)) {
        on.exit(Sys.unsetenv("BSTINPUTS"), add = TRUE)
        obstinputs <- "."
    }
    else on.exit(Sys.setenv(BSTINPUTS = obstinputs), add = TRUE)
    Sys.setenv(BSTINPUTS = paste(obstinputs, bstinputs, sep = envSep))
    if (index && nzchar(texi2dvi) && .Platform$OS.type != "windows") {
        Sys.setenv(TEXINDY = "false")
        on.exit(Sys.unsetenv("TEXINDY"), add = TRUE)
        opt_pdf <- if (pdf) 
            "--pdf"
        else ""
        opt_quiet <- if (quiet) 
            "--quiet"
        else ""
        opt_extra <- "--max-iterations=20"
        out <- .system_with_capture(texi2dvi, "--help")
        if (length(grep("--no-line-error", out$stdout))) 
            opt_extra <- "--no-line-error"
        env0 <- "LC_COLLATE=C"
        if (grepl(" ", Sys.getenv("TMPDIR"))) 
            env0 <- paste(env0, "TMPDIR=/tmp")
        out <- .system_with_capture(texi2dvi, c(opt_pdf, opt_quiet, 
            opt_extra, shQuote(file)), env = env0)
        log <- paste0(file_path_sans_ext(file), ".log")
        if (out$status && file_test("-f", log) && any(grepl("(Rerun to get|biblatex.*\\(re\\)run)", 
            readLines(log, warn = FALSE), useBytes = TRUE))) {
            out <- .system_with_capture(texi2dvi, c(opt_pdf, 
                opt_quiet, opt_extra, shQuote(file)), env = env0)
        }
        errors <- character()
        log <- paste0(file_path_sans_ext(file), ".log")
        if (file_test("-f", log)) {
            lines <- .get_LaTeX_errors_from_log_file(log)
            if (length(lines)) 
                errors <- paste0("LaTeX errors:\n", paste(lines, 
                  collapse = "\n"))
        }
        log <- paste0(file_path_sans_ext(file), ".blg")
        if (file_test("-f", log)) {
            lines <- .get_BibTeX_errors_from_blg_file(log)
            if (length(lines)) 
                errors <- paste0("BibTeX errors:\n", paste(lines, 
                  collapse = "\n"))
        }
        msg <- ""
        if (out$status) {
            msg <- gettextf("Running 'texi2dvi' on '%s' failed.", 
                file)
            if (length(errors)) 
                msg <- paste(msg, errors, sep = "\n")
            else if (length(out$stderr)) 
                msg <- paste(msg, "Messages:", paste(out$stderr, 
                  collapse = "\n"), sep = "\n")
            if (!quiet) 
                msg <- paste(msg, "Output:", paste(out$stdout, 
                  collapse = "\n"), sep = "\n")
        }
        do_cleanup(clean)
        if (nzchar(msg)) 
            stop(msg, domain = NA)
        else if (!quiet) 
            message(paste(paste(out$stderr, collapse = "\n"), 
                paste(out$stdout, collapse = "\n"), sep = "\n"))
    }
    else if (index && nzchar(texi2dvi)) {
        extra <- ""
        ver <- system(paste(shQuote(texi2dvi), "--version"), 
            intern = TRUE)
        if (length(grep("MiKTeX", ver[1L]))) {
            texinputs <- c(texinputs0, Rtexinputs, Rbstinputs)
            texinputs <- gsub("\\", "/", texinputs, fixed = TRUE)
            paths <- paste("-I", shQuote(texinputs))
            extra <- "--max-iterations=20"
            extra <- paste(extra, paste(paths, collapse = " "))
        }
        base <- basename(file_path_sans_ext(file))
        system(paste(shQuote(texi2dvi), if (quiet) 
            "--quiet"
        else "", if (pdf) 
            "--pdf"
        else "", shQuote(file), extra), intern = TRUE, ignore.stderr = TRUE)
        msg <- ""
        logfile <- paste0(base, ".log")
        if (file_test("-f", logfile)) {
            lines <- .get_LaTeX_errors_from_log_file(logfile)
            if (length(lines)) 
                msg <- paste(msg, "LaTeX errors:", paste(lines, 
                  collapse = "\n"), sep = "\n")
        }
        logfile <- paste0(base, ".blg")
        if (file_test("-f", logfile)) {
            lines <- .get_BibTeX_errors_from_blg_file(logfile)
            if (length(lines)) 
                msg <- paste(msg, "BibTeX errors:", paste(lines, 
                  collapse = "\n"), sep = "\n")
        }
        do_cleanup(clean)
        if (nzchar(msg)) {
            msg <- paste(gettextf("running 'texi2dvi' on '%s' failed", 
                file), msg, "", sep = "\n")
            stop(msg, call. = FALSE, domain = NA)
        }
    }
    else {
        texfile <- shQuote(file)
        base <- basename(file_path_sans_ext(file))
        idxfile <- paste0(base, ".idx")
        latex <- if (pdf) 
            Sys.getenv("PDFLATEX", "pdflatex")
        else Sys.getenv("LATEX", "latex")
        if (!nzchar(Sys.which(latex))) 
            stop(if (pdf) 
                "pdflatex"
            else "latex", " is not available", domain = NA)
        sys2 <- if (quiet) 
            function(...) system2(..., stdout = FALSE, stderr = FALSE)
        else system2
        bibtex <- Sys.getenv("BIBTEX", "bibtex")
        makeindex <- Sys.getenv("MAKEINDEX", "makeindex")
        ltxargs <- c("-interaction=nonstopmode", texfile)
        if (sys2(latex, ltxargs)) {
            lines <- .get_LaTeX_errors_from_log_file(paste0(base, 
                ".log"))
            errors <- if (length(lines)) 
                paste0("LaTeX errors:\n", paste(lines, collapse = "\n"))
            else character()
            stop(paste(gettextf("unable to run %s on '%s'", latex, 
                file), errors, sep = "\n"), domain = NA)
        }
        nmiss <- length(grep("Warning:.*Citation.*undefined", 
            readLines(paste0(base, ".log")), useBytes = TRUE))
        for (iter in 1L:10L) {
            if (nmiss) 
                sys2(bibtex, shQuote(base))
            nmiss_prev <- nmiss
            if (index && file.exists(idxfile)) {
                if (sys2(makeindex, shQuote(idxfile))) 
                  stop(gettextf("unable to run '%s' on '%s'", 
                    makeindex, idxfile), domain = NA)
            }
            if (sys2(latex, ltxargs)) {
                lines <- .get_LaTeX_errors_from_log_file(paste0(base, 
                  ".log"))
                errors <- if (length(lines)) 
                  paste0("LaTeX errors:\n", paste(lines, collapse = "\n"))
                else character()
                stop(paste(gettextf("unable to run %s on '%s'", 
                  latex, file), errors, sep = "\n"), domain = NA)
            }
            Log <- readLines(paste0(base, ".log"))
            nmiss <- length(grep("Warning:.*Citation.*undefined", 
                Log, useBytes = TRUE))
            if (nmiss == nmiss_prev && !any(grepl("(Rerun to get|biblatex.*\\(re\\)run)", 
                Log, useBytes = TRUE))) 
                break
        }
        do_cleanup(clean)
    }
    invisible(NULL)
}
