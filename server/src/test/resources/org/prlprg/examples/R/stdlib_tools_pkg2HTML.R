#? stdlib
`pkg2HTML` <- function (package, dir = NULL, lib.loc = NULL, outputEncoding = "UTF-8", 
    stylesheet = file.path(R.home("doc"), "html", "R-nav.css"), 
    hooks = list(pkg_href = function(pkg) sprintf("%s.html", 
        pkg)), texmath = getOption("help.htmlmath"), prism = TRUE, 
    out = NULL, toc_entry = c("title", "name"), ..., Rhtml = FALSE, 
    mathjax_config = file.path(R.home("doc"), "html", "mathjax-config.js"), 
    include_description = TRUE) 
{
    toc_entry <- match.arg(toc_entry)
    hcontent <- .convert_package_rdfiles(package = package, dir = dir, 
        lib.loc = lib.loc, outputEncoding = outputEncoding, Rhtml = Rhtml, 
        hooks = hooks, texmath = "katex", prism = prism, ...)
    descfile <- attr(hcontent, "descfile")
    pkgname <- read.dcf(descfile, fields = "Package")[1, 1]
    if (is.null(out)) {
        out <- if (is.null(hooks$pkg_href)) 
            ""
        else hooks$pkg_href(pkgname)
    }
    hcontent <- hcontent[order(vapply(hcontent, function(h) h$info$name, 
        ""))]
    if (length(hcontent) > 1 && length(wsumm <- which(vapply(hcontent, 
        function(h) isTRUE(h$info$pkgsummary), FALSE))) > 0L) {
        hcontent <- c(hcontent[wsumm], hcontent[-wsumm])
    }
    rdnames <- vapply(hcontent, function(h) h$info$name, "")
    rdtitles <- vapply(hcontent, function(h) h$info$title[[1L]], 
        "")
    use_mathjax <- any(vapply(hcontent, function(h) h$info$mathjaxr, 
        FALSE))
    if (missing(texmath) || is.null(texmath)) 
        texmath <- if (use_mathjax) 
            "mathjax"
        else "katex"
    toclines <- sprintf("<li><a href='#%s'>%s</a></li>", name2id(rdnames), 
        switch(toc_entry, title = rdtitles, name = rdnames))
    hfcomps <- HTMLcomponents(title = paste0("Help for package ", 
        pkgname), logo = FALSE, up = NULL, top = NULL, css = stylesheet, 
        outputEncoding = outputEncoding, dynamic = FALSE, prism = prism, 
        doTexMath = TRUE, texmath = if (use_mathjax) 
            "mathjax"
        else texmath, MATHJAX_CONFIG_STATIC = mathjax_config)
    writeHTML <- function(..., sep = "\n", append = TRUE) cat(..., 
        file = out, sep = sep, append = append)
    writeHTML(hfcomps$header, sep = "", append = FALSE)
    writeHTML("<nav class=\"package\" aria-label=\"Topic Navigation\">", 
        "<div class=\"dropdown-menu\">", sprintf("<h1>Package {%s}</h1>", 
            pkgname), "<h2>Contents</h2>", "<ul class=\"menu\">", 
        toclines, "</ul>", "</div>", "<hr>", "</nav>", "<main>")
    if (include_description) 
        writeHTML(.DESCRIPTION_to_HTML(descfile))
    lapply(hcontent, function(h) writeHTML("<hr>", h$outlines))
    writeHTML("</main>")
    writeHTML(hfcomps$footer, sep = "")
    invisible(out)
}

# Examples
\donttest{
pkg2HTML("tools", out = tempfile(fileext = ".html")) |> browseURL()
}

