#? stdlib
`.DESCRIPTION_to_latex` <- function (descfile, outfile, version = "Unknown", writeEncoding = TRUE) 
{
    mytrfm <- .gsub_with_transformed_matches
    mygsub <- function(pattern, replacement, x) .Internal(gsub(pattern, 
        replacement, x, FALSE, FALSE, FALSE, FALSE))
    mypsub <- function(pattern, replacement, x) .Internal(gsub(pattern, 
        replacement, x, FALSE, TRUE, FALSE, FALSE))
    myfsub <- function(pattern, replacement, x) .Internal(gsub(pattern, 
        replacement, x, FALSE, FALSE, TRUE, FALSE))
    texify <- function(x, one = TRUE, two = FALSE) {
        if (two) 
            x <- myfsub("\\", "\\textbackslash", x)
        if (one) {
            x <- mypsub("([#$%&_])", "\\\\\\1", x)
            x <- myfsub("^", "\\textasciicircum", x)
            x <- myfsub("~", "\\textasciitilde", x)
        }
        if (two) {
            x <- mypsub("([{}])", "\\\\\\1", x)
            x <- myfsub("\\textbackslash", "\\textbackslash{}", 
                x)
        }
        if (one) {
            x <- myfsub("\\textasciicircum", "\\textasciicircum{}", 
                x)
            x <- myfsub("\\textasciitilde", "\\textasciitilde{}", 
                x)
        }
        x
    }
    mytrim <- function(x) {
        y <- unlist(strsplit(x, "\n", fixed = TRUE))
        lines2trim <- setdiff(which(nzchar(y)), 1L)
        if (!length(lines2trim)) 
            x
        else paste(replace(y, lines2trim, .trim_common_leading_whitespace(y[lines2trim])), 
            collapse = "\n")
    }
    desc <- enc2utf8(.read_description(descfile))
    desc <- desc[nzchar(desc)]
    if (is.character(outfile)) {
        out <- file(outfile, "a")
        on.exit(close(out))
    }
    else out <- outfile
    fields <- names(desc)
    fields <- fields %w/o% c("Package", "Packaged", "Built")
    if (writeEncoding && !is.na(desc["Encoding"])) {
        cat("\\inputencoding{utf8}\n", file = out)
    }
    tit <- desc["Title"]
    tit <- paste0(desc["Package"], ": ", texify(mygsub("[[:space:]]+", 
        " ", tit), two = TRUE))
    tit <- paste0("\\ifthenelse{\\boolean{Rd@use@hyper}}", "{\\hypersetup{pdftitle = {", 
        tit, "}}}{}")
    writeLines(tit, con = out, useBytes = TRUE)
    if (!is.na(aar <- desc["Authors@R"])) {
        aar <- tryCatch(utils:::.read_authors_at_R_field(aar), 
            error = identity)
        if (!inherits(aar, "error")) {
            aar <- Filter(utils:::.person_has_author_role, aar)
            aut <- format(aar, include = c("given", "family"))
            aut <- paste(aut[nzchar(aut)], collapse = "; ")
            aut <- texify(mygsub("[[:space:]]+", " ", aut), two = TRUE)
            if (nzchar(aut)) {
                aut <- paste0("\\ifthenelse{\\boolean{Rd@use@hyper}}", 
                  "{\\hypersetup{pdfauthor = {", aut, "}}}{}")
                writeLines(aut, con = out, useBytes = TRUE)
            }
        }
    }
    cat("\\begin{description}", "\\raggedright{}", sep = "\n", 
        file = out)
    for (f in fields) {
        if (f == "Authors@R") 
            next
        text <- desc[f]
        if (f %in% c("Author", "Description")) 
            text <- mytrim(text)
        text <- mygsub("\"([^\"]*)\"", "\\`\\`\\1''", text)
        text <- texify(text, one = FALSE, two = TRUE)
        text <- myfsub("@VERSION@", version, text)
        if (f %in% c("Author", "Maintainer", "Contact")) 
            text <- mytrfm("<([^@ ]+)@([^> ]+)>", "}\\\\email{%s@%s}\\\\AsIs{", 
                text, list(texify, texify), c(1L, 2L))
        if (f %in% c("URL", "BugReports", "Additional_repositories")) 
            text <- mygsub("(http://|ftp://|https://)([^[:space:],]+)", 
                "}\\\\url{\\1\\2}\\\\AsIs{", text)
        if (f %in% c("Author", "Description")) {
            text <- mygsub("<(http://|ftp://|https://)([^[:space:],>]+)>", 
                "<}\\\\url{\\1\\2}\\\\AsIs{>", text)
        }
        if (f == "Description") {
            text <- mytrfm("<(DOI:|doi:)([[:space:]]*)([^[:space:]]+)>", 
                "<}\\\\Rhref{https://doi.org/%s}{\\1%s}\\\\AsIs{>", 
                text, list(identity, texify), c(3L, 3L))
            text <- mygsub("<(arXiv|arxiv):([[:alnum:]/.-]+)([[:space:]]*\\[[^]]+\\])?>", 
                "<}\\\\Rhref{https://doi.org/10.48550/arXiv.\\2}{doi:10.48550/arXiv.\\2}\\\\AsIs{>", 
                text)
        }
        text <- paste0("\\AsIs{", text, "}")
        writeLines(paste0("\\item[", texify(f, TRUE, TRUE), "]", 
            text), con = out, useBytes = TRUE)
    }
    cat("\\end{description}\n", file = out)
}
