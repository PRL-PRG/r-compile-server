#? stdlib
`.Rdfiles2tex` <- function (files, outfile, encoding = "unknown", outputEncoding = "UTF-8", 
    append = FALSE, extraDirs = NULL, internals = FALSE, silent = FALSE, 
    pkglist = NULL) 
{
    if (dir.exists(files)) {
        .pkg2tex(files, outfile, internals = internals, asChapter = FALSE, 
            encoding = encoding, outputEncoding = outputEncoding, 
            extraDirs = extraDirs, append = append, silent = silent, 
            pkglist = pkglist)
    }
    else {
        files <- strsplit(files, "[[:space:]]+")[[1L]]
        if (!silent) 
            message("Converting Rd files to LaTeX ...")
        if (is.character(outfile)) {
            outfile <- file(outfile, if (append) 
                "at"
            else "wt")
            on.exit(close(outfile))
        }
        hasFigures <- FALSE
        macros <- initialRdMacros(pkglist = pkglist)
        for (f in files) {
            if (!silent) 
                cat("  ", basename(f), "\n", sep = "")
            rd <- parse_Rd(f, encoding = encoding, macros = macros)
            if (!internals && any(.Rd_get_metadata(rd, "keyword") == 
                "internal")) 
                next
            lines <- character()
            con <- textConnection("lines", "w", local = TRUE)
            res <- Rd2latex(rd, con, outputEncoding = outputEncoding, 
                writeEncoding = FALSE, stages = c("build", "install", 
                  "render"))
            close(con)
            if (attr(res, "hasFigures")) {
                graphicspath <- file.path(dirname(f), "figures")
                lines <- c(.file_path_to_LaTeX_graphicspath(graphicspath), 
                  lines)
                hasFigures <- TRUE
            }
            writeLines(lines, outfile)
        }
        list(hasFigures = hasFigures)
    }
}
