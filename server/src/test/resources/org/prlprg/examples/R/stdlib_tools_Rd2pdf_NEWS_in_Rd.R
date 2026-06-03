#? stdlib
`Rd2pdf_NEWS_in_Rd` <- function (f, pdf_file) 
{
    if (endsWith(f, ".rds")) 
        f <- readRDS(f)
    f2 <- tempfile()
    f3 <- if (grepl(" ", Sys.getenv("TMPDIR"))) 
        file.path("/tmp", "NEWS.tex")
    else file.path(tempdir(), "NEWS.tex")
    out <- file(f3, "w")
    Rd2latex(f, f2, stages = c("install", "render"), outputEncoding = "UTF-8", 
        writeEncoding = FALSE, macros = file.path(R.home("share"), 
            "Rd", "macros", "system.Rd"))
    cat("\\documentclass[", Sys.getenv("R_PAPERSIZE"), "paper]{book}\n", 
        "\\usepackage[hyper]{Rd}\n", "\\usepackage[utf8]{inputenc}\n", 
        "\\usepackage{graphicx}\n", "\\setkeys{Gin}{width=0.7\\textwidth}\n", 
        .file_path_to_LaTeX_graphicspath(file.path(R.home("doc"), 
            "html")), "\n", "\\hypersetup{pdfpagemode=None,pdfstartview=FitH}\n", 
        "\\begin{document}\n", "\\chapter*{}\\sloppy\n", "\\begin{center}\n\\huge\n", 
        "NEWS for ", R.version$version.string, "\n", "\\end{center}\n", 
        sep = "", file = out)
    writeLines(readLines(f2), out)
    writeLines("\\end{document}", out)
    close(out)
    od <- setwd(dirname(f3))
    on.exit(setwd(od))
    texi2pdf("NEWS.tex", quiet = TRUE, texi2dvi = "emulation")
    setwd(od)
    on.exit()
    invisible(file.copy(file.path(dirname(f3), "NEWS.pdf"), pdf_file, 
        overwrite = TRUE))
}
