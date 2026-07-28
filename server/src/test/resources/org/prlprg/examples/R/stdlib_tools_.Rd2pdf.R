#? stdlib
`.Rd2pdf` <- function (pkgdir, outfile, title, silent = FALSE, description = TRUE, 
    only_meta = FALSE, enc = "unknown", outputEncoding = "UTF-8", 
    files_or_dir, OSdir, internals = FALSE, index = TRUE, pkglist = NULL) 
{
    out <- file(outfile, "wt")
    if (!nzchar(enc)) 
        enc <- "unknown"
    desc <- NULL
    if (file.exists(f <- file.path(pkgdir, "DESCRIPTION"))) {
        desc <- read.dcf(f)[1, ]
        if (enc == "unknown") {
            pkg_enc <- desc["Encoding"]
            if (!is.na(pkg_enc)) {
                enc <- pkg_enc
            }
        }
    }
    writeLines("\\nonstopmode{}", out)
    cat("\\documentclass[", Sys.getenv("R_PAPERSIZE"), "paper]{book}\n", 
        "\\usepackage[", Sys.getenv("R_RD4PDF", "times,inconsolata,hyper"), 
        "]{Rd}\n", sep = "", file = out)
    if (index) 
        writeLines("\\usepackage{makeidx}", out)
    inputenc <- Sys.getenv("RD2PDF_INPUTENC", "inputenc")
    latex_outputEncoding <- latex_canonical_encoding(outputEncoding)
    asUTF8 <- latex_outputEncoding == "utf8"
    setEncoding <- if (asUTF8 && inputenc == "inputenc") {
        paste0("\\makeatletter\\@ifl@t@r\\fmtversion{2018/04/01}{}{", 
            "\\usepackage[utf8]{inputenc}}", "\\makeatother")
    }
    else paste0("\\usepackage[", if (asUTF8) 
        "utf8"
    else paste0(c(if (description) "utf8", latex_outputEncoding), 
        collapse = ","), "]{", inputenc, "} % @SET ENCODING@")
    useGraphicx <- "% \\usepackage{graphicx} % @USE GRAPHICX@"
    writeLines(c(setEncoding, if (inputenc == "inputenx" && asUTF8) {
        "\\IfFileExists{ix-utf8enc.dfu}{\\input{ix-utf8enc.dfu}}{}"
    }, if (nzchar(Sys.getenv("_R_CYRILLIC_TEX_")) && asUTF8) {
        "\\IfFileExists{t2aenc.def}{\\usepackage[T2A]{fontenc}}{}"
    }, useGraphicx, if (index) "\\makeindex{}", "\\begin{document}"), 
        out)
    if (!nzchar(title)) {
        if (is.character(desc)) 
            title <- paste0("Package `", desc["Package"], "'")
        else if (file.exists(f <- file.path(pkgdir, "DESCRIPTION.in"))) {
            desc <- read.dcf(f)[1, ]
            title <- paste0("Package `", desc["Package"], "'")
        }
        else {
            if (dir.exists(pkgdir)) {
                subj <- paste0("all in \\file{", pkgdir, "}")
            }
            else {
                files <- strsplit(files_or_dir, "[[:space:]]+")[[1L]]
                subj1 <- if (length(files) > 1L) 
                  " etc."
                else ""
                subj <- paste0("\\file{", pkgdir, "}", subj1)
            }
            subj <- gsub("([_$])", "\\\\\\1", subj)
            title <- paste("\\R{} documentation}} \\par\\bigskip{{\\Large of", 
                subj)
        }
    }
    cat("\\chapter*{}\n", "\\begin{center}\n", "{\\textbf{\\huge ", 
        title, "}}\n", "\\par\\bigskip{\\large \\today}\n", "\\end{center}\n", 
        sep = "", file = out)
    if (description) {
        if (file.exists(f <- file.path(pkgdir, "DESCRIPTION"))) 
            .DESCRIPTION_to_latex(f, out, writeEncoding = !asUTF8)
        else if (file.exists(f <- file.path(pkgdir, "DESCRIPTION.in"))) {
            version <- readLines(file.path(pkgdir, "../../../VERSION"))
            .DESCRIPTION_to_latex(file.path(pkgdir, "DESCRIPTION.in"), 
                out, version, writeEncoding = !asUTF8)
        }
    }
    hasFigures <- FALSE
    if (file.exists(file.path(pkgdir, "DESCRIPTION")) && !(dir.exists(file.path(pkgdir, 
        "man")) || dir.exists(file.path(pkgdir, "help")) || dir.exists(file.path(pkgdir, 
        "latex")))) 
        only_meta <- TRUE
    if (!only_meta) {
        if (dir.exists(files_or_dir)) 
            writeLines(c("\\Rdcontents{Contents}", if (!asUTF8) paste0("\\inputencoding{", 
                latex_outputEncoding, "}")), out)
        res <- .Rdfiles2tex(files_or_dir, out, encoding = enc, 
            outputEncoding = outputEncoding, append = TRUE, extraDirs = OSdir, 
            internals = internals, silent = silent, pkglist = pkglist)
        if (length(res)) {
            hasFigures <- res$hasFigures
        }
    }
    if (index) 
        writeLines("\\printindex{}", out)
    writeLines("\\end{document}", out)
    close(out)
    if (hasFigures) {
        lines <- readLines(outfile)
        lines[lines == useGraphicx] <- "\\usepackage{graphicx}\\setkeys{Gin}{width=0.7\\textwidth}"
        writeLines(lines, outfile)
    }
    invisible(NULL)
}
