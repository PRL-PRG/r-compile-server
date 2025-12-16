#? stdlib
`.code2html_payload_browser` <- function (type, codelines, topic, package, Rhome = "", header.info = NULL, 
    env = NULL) 
{
    if (type == "example" && package != "base") 
        library(package, character.only = TRUE)
    header.lines <- if (is.null(header.info)) 
        character(0)
    else {
        header.info$Aliases <- strsplit(header.info$Aliases, 
            "[[:space:]]+")[[1]]
        header.info$Keywords <- if (is.null(header.info$Keywords)) 
            character(0)
        else strsplit(header.info$Keywords, "[[:space:]]+")[[1]]
        with(header.info, {
            c(sprintf("<h2>%s</h2>", Title), sprintf("<p>Aliases: %s</p>", 
                paste(sprintf("<a href='../help/%s'>%s</a>", 
                  vapply(Aliases, urlify, "", reserved = TRUE), 
                  vapply(Aliases, shtmlify, "")), collapse = " ")), 
                sprintf("<p>Keywords: %s</p>", paste(sprintf("<a href='/doc/html/Search?category=%s'>%s</a>", 
                  Keywords, Keywords), collapse = " ")))
        })
    }
    pkgversion <- utils::packageDescription(package, fields = "Version")
    footer.lines <- sprintf("<hr /><div style=\"text-align: center;\">[Package <em>%s</em> version %s <a href=\"../html/00Index.html\">Index</a>]</div>", 
        package, pkgversion)
    rhtml <- c(HTMLheader(title = sprintf("%s '%s::%s'", switch(type, 
        demo = "Demo for", example = "Examples for"), package, 
        topic), Rhome = Rhome, logo = FALSE, up = NULL, top = NULL), 
        header.lines, "\n\n<!--begin.rcode\n", codelines, "\nend.rcode-->\n\n", 
        footer.lines, "</div></body></html>")
    figdir <- tempfile(pattern = package, fileext = topic)
    on.exit(unlink(figdir, recursive = TRUE), add = TRUE)
    old_opts_knit <- knitr::opts_knit$get()
    old_opts_chunk <- knitr::opts_chunk$get()
    on.exit(knitr::opts_knit$restore(old_opts_knit), add = TRUE)
    on.exit(knitr::opts_chunk$restore(old_opts_chunk), add = TRUE)
    knitr::opts_knit$set(upload.fun = function(x) paste0("data:", 
        mime_type(x), ";base64,", xfun::base64_encode(x)), unnamed.chunk.label = sprintf("%s-%s-%s", 
        type, package, topic))
    knitr::opts_chunk$set(comment = "", warning = TRUE, message = TRUE, 
        error = TRUE, fig.path = file.path(figdir, "fig-"), fig.width = 9, 
        fig.height = 7, dpi = 96)
    out <- knitr::knit(text = rhtml, quiet = TRUE, envir = env %||% 
        new.env(parent = .GlobalEnv))
    list(payload = paste(out, collapse = "\n"))
}
