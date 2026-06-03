#? stdlib
`.pkg2tex` <- function (pkgdir, outfile, internals = FALSE, asChapter = TRUE, 
    encoding = "unknown", outputEncoding = "UTF-8", extraDirs = NULL, 
    append = FALSE, silent = FALSE, pkglist = NULL) 
{
    path <- normalizePath(pkgdir)
    if (file.exists(file.path(path, "DESCRIPTION"))) 
        Sys.setenv(`_R_RD_MACROS_PACKAGE_DIR_` = path)
    else if ((basename(path) == "man") && file.exists(file.path(dirname(path), 
        "DESCRIPTION"))) 
        Sys.setenv(`_R_RD_MACROS_PACKAGE_DIR_` = dirname(path))
    re <- function(x) x[order(toupper(x), x)]
    options(warn = 1)
    if (missing(outfile)) 
        outfile <- paste0(basename(pkgdir), "-pkg.tex")
    hasFigures <- FALSE
    latexdir <- file.path(pkgdir, "latex")
    if (!dir.exists(latexdir)) {
        if (dir.exists(file.path(pkgdir, "help"))) {
            latexdir <- tempfile("ltx")
            dir.create(latexdir)
            if (!silent) 
                message("Converting parsed Rd's to LaTeX ", appendLF = FALSE, 
                  domain = NA)
            Rd <- Rd_db(basename(pkgdir), lib.loc = dirname(pkgdir))
            if (!length(Rd)) {
                if (is.character(outfile)) 
                  close(file(outfile, if (append) 
                    "at"
                  else "wt"))
                return(invisible(character()))
            }
            cnt <- 0L
            for (f in names(Rd)) {
                cnt <- cnt + 1L
                if (!silent && cnt%%10L == 0L) 
                  message(".", appendLF = FALSE, domain = NA)
                out <- sub("[Rr]d$", "tex", basename(f))
                outfilename <- file.path(latexdir, out)
                res <- Rd2latex(Rd[[f]], outfilename, outputEncoding = outputEncoding, 
                  defines = NULL, writeEncoding = FALSE)
                if (attr(res, "hasFigures")) {
                  lines <- readLines(outfilename)
                  graphicspath <- file.path(pkgdir, "help", "figures")
                  writeLines(c(.file_path_to_LaTeX_graphicspath(graphicspath), 
                    lines), outfilename)
                  hasFigures <- TRUE
                }
            }
            if (!silent) 
                message(domain = NA)
        }
        else {
            mandir <- file.path(pkgdir, "man")
            if (dir.exists(mandir)) {
                files <- c(Sys.glob(file.path(mandir, "*.Rd")), 
                  Sys.glob(file.path(mandir, "*.rd")))
                if (is.null(extraDirs)) 
                  extraDirs <- .Platform$OS.type
                for (e in extraDirs) files <- c(files, Sys.glob(file.path(mandir, 
                  e, "*.Rd")), Sys.glob(file.path(mandir, e, 
                  "*.rd")))
                if (!length(files)) 
                  stop("this package has a ", sQuote("man"), 
                    " directory but no .Rd files", domain = NA)
                macros <- loadPkgRdMacros(pkgdir)
                macros <- initialRdMacros(pkglist, macros)
            }
            else {
                files <- c(Sys.glob(file.path(pkgdir, "*.Rd")), 
                  Sys.glob(file.path(pkgdir, "*.rd")))
                if (!length(files)) 
                  stop("this package does not have either a ", 
                    sQuote("latex"), " or a (source) ", sQuote("man"), 
                    " directory", domain = NA)
                macros <- initialRdMacros(pkglist)
            }
            paths <- files
            built_file <- file.path(pkgdir, "build", "partial.rdb")
            if (file_test("-f", built_file)) {
                db <- readRDS(built_file)
                pos <- match(names(db), basename(paths), nomatch = 0L)
                files <- as.list(files)
                files[pos] <- db[pos > 0L]
            }
            built_file <- file.path(pkgdir, "build", "stage23.rdb")
            if (file_test("-f", built_file)) {
                use <- Sys.getenv("_RD2PDF_USE_BUILT_STAGE23_RD_DB_IF_AVAILABLE_", 
                  "FALSE")
                if (isTRUE(config_val_to_logical(use))) {
                  db <- readRDS(built_file)
                  pos <- match(names(db), basename(paths), nomatch = 0L)
                  files <- as.list(files)
                  files[pos] <- db[pos > 0L]
                }
            }
            latexdir <- tempfile("ltx")
            dir.create(latexdir)
            if (!silent) 
                message("Converting Rd files to LaTeX ", appendLF = FALSE, 
                  domain = NA)
            cnt <- 0L
            for (i in seq_along(paths)) {
                cnt <- cnt + 1L
                if (!silent && cnt%%10L == 0L) 
                  message(".", appendLF = FALSE, domain = NA)
                out <- sub("\\.[Rr]d$", ".tex", basename(paths[i]))
                outfilename <- file.path(latexdir, out)
                res <- Rd2latex(files[[i]], outfilename, stages = c("build", 
                  "install", "render"), encoding = encoding, 
                  outputEncoding = outputEncoding, writeEncoding = FALSE, 
                  macros = macros)
                if (attr(res, "hasFigures")) {
                  lines <- readLines(outfilename)
                  graphicspath <- file.path(dirname(paths[i]), 
                    "figures")
                  writeLines(c(.file_path_to_LaTeX_graphicspath(graphicspath), 
                    lines), outfilename)
                  hasFigures <- TRUE
                }
            }
            if (!silent) 
                message(domain = NA)
        }
    }
    files <- dir(latexdir, pattern = "\\.tex$", full.names = TRUE)
    if (!length(files)) 
        stop("no validly-named files in the ", sQuote("latex"), 
            " directory", domain = NA)
    if (is.character(outfile)) {
        outcon <- file(outfile, if (append) 
            "at"
        else "wt")
        on.exit(close(outcon))
    }
    else outcon <- outfile
    if (asChapter) 
        cat("\n\\chapter{The \\texttt{", basename(pkgdir), "} package}\n", 
            sep = "", file = outcon)
    topics <- rep.int("", length(files))
    names(topics) <- files
    for (f in files) {
        lines <- readLines(f)
        hd <- grep("^\\\\HeaderA", lines, value = TRUE, perl = TRUE, 
            useBytes = TRUE)
        if (!length(hd)) {
            warning("file ", sQuote(f), " lacks a header: skipping", 
                domain = NA)
            next
        }
        this <- sub("\\\\HeaderA\\{\\s*([^}]*)\\}.*", "\\1", 
            hd[1L], perl = TRUE)
        if (!internals && any(startsWith(lines, "\\keyword{internal}"))) 
            next
        topics[f] <- this
    }
    topics <- topics[nzchar(topics)]
    summ <- grep("-package$", topics, perl = TRUE)
    topics <- if (length(summ)) 
        c(topics[summ], re(topics[-summ]))
    else re(topics)
    for (f in names(topics)) writeLines(readLines(f), outcon)
    if (asChapter) 
        cat("\\clearpage\n", file = outcon)
    invisible(list(hasFigures = hasFigures))
}
