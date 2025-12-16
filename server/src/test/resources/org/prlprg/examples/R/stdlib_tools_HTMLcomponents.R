#? stdlib
`HTMLcomponents` <- function (title = "R", logo = FALSE, up = NULL, top = NULL, Rhome = "", 
    css = file.path(Rhome, "doc/html/R.css"), headerTitle = title, 
    outputEncoding = "UTF-8", dynamic = FALSE, prism = TRUE, 
    doTexMath = TRUE, texmath = "katex", KATEX_JS_STATIC = "https://cdn.jsdelivr.net/npm/katex@0.15.3/dist/katex.min.js", 
    KATEX_CSS_STATIC = "https://cdn.jsdelivr.net/npm/katex@0.15.3/dist/katex.min.css", 
    MATHJAX_JS_STATIC = "https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-chtml-full.js", 
    MATHJAX_CONFIG_STATIC = file.path(Rhome, "doc/html/mathjax-config.js"), 
    PRISM_JS_STATIC = c("https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/prism.min.js", 
        "https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/components/prism-r.min.js"), 
    PRISM_CSS_STATIC = "https://cdnjs.cloudflare.com/ajax/libs/prism/1.29.0/themes/prism.min.css") 
{
    header <- character(0)
    footer <- character(0)
    addh <- function(...) {
        header <<- c(header, ...)
    }
    addf <- function(...) {
        footer <<- c(footer, ...)
    }
    if (doTexMath && texmath == "katex") {
        KATEX_JS <- if (dynamic) 
            "/doc/html/katex/katex.js"
        else KATEX_JS_STATIC
        KATEX_CSS <- if (dynamic) 
            "/doc/html/katex/katex.css"
        else KATEX_CSS_STATIC
        KATEX_CONFIG <- if (dynamic) 
            "/doc/html/katex-config.js"
        else c("const macros = { \"\\\\R\": \"\\\\textsf{R}\", \"\\\\code\": \"\\\\texttt\"};", 
            "function processMathHTML() {", "    var l = document.getElementsByClassName('reqn');", 
            "    for (let e of l) { katex.render(e.textContent, e, { throwOnError: false, macros }); }", 
            "    return;", "}")
    }
    if (doTexMath && texmath == "mathjax") {
        MATHJAX_JS <- if (dynamic && requireNamespace("mathjaxr", 
            quietly = TRUE)) 
            "/library/mathjaxr/doc/mathjax/es5/tex-chtml-full.js"
        else MATHJAX_JS_STATIC
        MATHJAX_CONFIG <- if (dynamic) 
            "/doc/html/mathjax-config.js"
        else MATHJAX_CONFIG_STATIC
    }
    if (prism) {
        PRISM_JS <- if (dynamic) 
            "/doc/html/prism.js"
        else PRISM_JS_STATIC
        PRISM_CSS <- if (dynamic) 
            "/doc/html/prism.css"
        else PRISM_CSS_STATIC
    }
    addh("<!DOCTYPE html>", "<html>", "<head><title>")
    addh(htmlify(headerTitle))
    addh("</title>\n", "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=", 
        mime_canonical_encoding(outputEncoding), "\" />\n")
    addh("<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />\n")
    if (prism && length(PRISM_CSS) == 1L) 
        addh("<link href=\"", urlify(PRISM_CSS), "\" rel=\"stylesheet\" />\n")
    if (doTexMath) {
        if (texmath == "katex") {
            addh("<link rel=\"stylesheet\" href=\"", urlify(KATEX_CSS), 
                "\">\n", if (dynamic) 
                  paste0("<script type=\"text/javascript\" src=\"", 
                    urlify(KATEX_CONFIG), "\"></script>\n")
                else paste0("<script type=\"text/javascript\">\n", 
                  paste(KATEX_CONFIG, collapse = "\n"), "</script>\n"), 
                "<script defer src=\"", urlify(KATEX_JS), "\"\n    onload=\"processMathHTML();\"></script>\n")
        }
        else if (texmath == "mathjax") {
            addh("<script type=\"text/javascript\" src=\"", urlify(MATHJAX_CONFIG), 
                "\"></script>\n", "<script type=\"text/javascript\" async src=\"", 
                urlify(MATHJAX_JS), "\"></script>\n")
        }
    }
    addh(paste0("<link rel=\"stylesheet\" type=\"text/css\" href=\"", 
        css, "\" />\n"), "</head><body>", "<div class=\"container\">")
    addf("\n</div>\n")
    if (prism && length(PRISM_JS) > 0L) 
        for (u in PRISM_JS) addf("<script src=\"", urlify(u), 
            "\"></script>\n")
    addf("</body></html>\n")
    if (!nzchar(title)) {
        addh("<h1>", title)
        if (logo) 
            addh(paste0("<img class=\"toplogo\" src=\"", file.path(Rhome, 
                "doc/html/Rlogo.svg"), "\" alt=\"[R logo]\" />"))
        addh("</h1>", "<hr/>")
    }
    if (!is.null(up) || !is.null(top)) {
        addh("<div style=\"text-align: center;\">")
        if (!is.null(up)) 
            addh(paste0("<a href=\"", up, "\"><img class=\"arrow\" src=\"", 
                file.path(Rhome, "doc/html/left.jpg"), "\" alt=\"[Up]\" /></a>"))
        if (!is.null(top)) 
            addh(paste0("<a href=\"", top, "\"><img class=\"arrow\" src=\"", 
                file.path(Rhome, "doc/html/up.jpg"), "\" alt=\"[Top]\" /></a>"))
        addh("</div>")
    }
    return(list(header = header, footer = footer))
}
