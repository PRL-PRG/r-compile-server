#? stdlib
`format.bibentry` <- function (x, style = "text", .bibstyle = NULL, bibtex = length(x) <= 
    1, citMsg = missing(bibtex), sort = FALSE, macros = NULL, 
    ...) 
{
    style <- .bibentry_match_format_style(style)
    if (!length(x)) 
        return(if (style == "R") "bibentry()" else character())
    if (sort) 
        x <- sort(x, .bibstyle = .bibstyle)
    x$.index <- as.list(seq_along(x))
    format_via_Rd <- function(f) {
        out <- file()
        saveopt <- tools::Rd2txt_options(width = getOption("width"))
        on.exit({
            tools::Rd2txt_options(saveopt)
            close(out)
        })
        permissive <- Sys.getenv("_R_UTILS_FORMAT_BIBENTRY_VIA_RD_PERMISSIVE_", 
            "TRUE")
        permissive <- str2logical(permissive)
        if (is.null(macros)) 
            macros <- tools:::initialRdMacros()
        else if (is.character(macros)) 
            macros <- tools::loadRdMacros(macros, tools:::initialRdMacros())
        if (style == "md") {
            tmp <- tempfile()
            on.exit(unlink(tmp), add = TRUE)
            txt <- c("\\renewcommand{\\bold}{\\out{**#1**}}", 
                "\\renewcommand{\\href}{\\out{[#2](#1)}}", "\\renewcommand{\\doi}{\\out{[doi:#1](https://doi.org/#1)}}")
            writeLines(txt, tmp)
            macros <- tools::loadRdMacros(tmp, macros)
        }
        vapply(.bibentry_expand_crossrefs(x), function(y) {
            txt <- tools::toRd(y, style = .bibstyle)
            if (style == "html") 
                txt <- paste(txt, "\n")
            con <- textConnection(txt)
            on.exit(close(con))
            rd <- tools::parse_Rd(con, fragment = TRUE, permissive = permissive, 
                macros = macros)
            rd <- tools:::processRdSexprs(rd, "install", macros = attr(rd, 
                "macros"))
            f(rd, fragment = TRUE, out = out, outputEncoding = "UTF-8", 
                ...)
            paste(readLines(out, encoding = "UTF-8"), collapse = "\n")
        }, "")
    }
    format_as_citation <- function(x, msg) {
        m <- attr(x, "mheader")
        if (is.null(m) && is.null(unlist(x$header)) && !is.null(p <- attr(x, 
            "package"))) 
            m <- gettextf("To cite package %s in publications use:", 
                sQuote(p))
        i <- !is.null(m)
        c(paste(strwrap(m), collapse = "\n"), unlist(lapply(x, 
            function(y) {
                h <- y$header
                j <- !is.null(h)
                s <- y$textVersion
                if (is.null(s)) s <- format(y)
                paste(c(if (j) c(strwrap(h), ""), if (i || j) strwrap(s, 
                  prefix = "  ") else strwrap(s), if (bibtex) {
                  c(gettext("\nA BibTeX entry for LaTeX users is\n"), 
                    paste0("  ", unclass(toBibtex(y))))
                }, if (!is.null(y$footer)) c("", strwrap(y$footer))), 
                  collapse = "\n")
            })), paste(strwrap(c(attr(x, "mfooter"), if (!bibtex && 
            msg) {
            prt <- sys.nframe() > 4L && sys.call(-4L)[[1L]] == 
                quote(print.bibentry)
            c(if (!is.null(attr(x, "mfooter"))) "", paste0("To see these entries in BibTeX format, use '", 
                if (prt) "print" else "format", "(<citation>, bibtex=TRUE)', ", 
                if (prt) "'toBibtex(.)', or set 'options(citation.bibtex.max=999)'." else "or 'toBibtex(.)'."))
        })), collapse = "\n"))
    }
    out <- switch(style, text = format_via_Rd(tools::Rd2txt), 
        html = format_via_Rd(tools::Rd2HTML), latex = format_via_Rd(tools::Rd2latex), 
        Bibtex = {
            unlist(lapply(x, function(y) paste(toBibtex(y), collapse = "\n")))
        }, textVersion = {
            out <- lapply(unclass(x), attr, "textVersion")
            out[!lengths(out)] <- ""
            unlist(out)
        }, citation = format_as_citation(.bibentry(x), msg = citMsg), 
        R = .format_bibentry_as_R_code(x, ...), md = format_via_Rd(tools::Rd2txt))
    as.character(out)
}
