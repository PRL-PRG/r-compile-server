#? stdlib
`.code2html_payload_console` <- function (type, topic, package, enhancedHTML = TRUE, Rhome = "") 
{
    snippet <- sprintf("%s(%s, package = \"%s\")", type, topic, 
        package)
    msg <- c(gettextf("<p><code class='language-R'>%s</code> was run in the console.</p>", 
        snippet), if (enhancedHTML) gettext("<p>To view output in the browser, the <a href='https://CRAN.R-project.org/package=knitr'>knitr</a> package must be installed.</p>") else gettext("<p>To view output in the browser, the <a href='https://CRAN.R-project.org/package=knitr'>knitr</a> package must be installed and the environment variable <code>_R_HELP_ENABLE_ENHANCED_HTML_</code> must be set to TRUE.</p>"))
    list(payload = paste(c(HTMLheader("R example", Rhome = Rhome, 
        logo = FALSE, up = NULL, top = NULL), msg, "\n</div></body></html>"), 
        collapse = "\n"))
}
