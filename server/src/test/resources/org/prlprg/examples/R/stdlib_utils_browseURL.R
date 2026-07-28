#? stdlib
`browseURL` <- function (url, browser = getOption("browser"), encodeIfNeeded = FALSE) 
{
    WINDOWS <- .Platform$OS.type == "windows"
    if (!is.character(url) || length(url) != 1L || !nzchar(url)) 
        stop(gettextf("'%s' must be a non-empty character string", 
            "url"), domain = NA)
    if (identical(browser, "false")) 
        return(invisible())
    if (WINDOWS && is.null(browser)) 
        return(shell.exec(url))
    if (is.function(browser)) 
        return(invisible(browser(if (encodeIfNeeded) URLencode(url) else url)))
    if (!is.character(browser) || length(browser) != 1L || !nzchar(browser)) 
        stop(gettextf("'%s' must be a non-empty character string", 
            "browser"), domain = NA)
    if (WINDOWS) {
        return(system(paste0("\"", browser, "\" ", if (encodeIfNeeded) URLencode(url) else url), 
            wait = FALSE))
    }
    if (.Platform$GUI == "AQUA" || length(grep("^(localhost|):", 
        Sys.getenv("DISPLAY")))) 
        isLocal <- TRUE
    else isLocal <- FALSE
    .shQuote <- function(string) paste0("\"", gsub("$", "\\$", 
        string, fixed = TRUE), "\"")
    quotedUrl <- .shQuote(if (encodeIfNeeded) 
        URLencode(url)
    else url)
    remoteCmd <- if (isLocal) 
        switch(basename(browser), `gnome-moz-remote` = , open = quotedUrl, 
            galeon = paste("-x", quotedUrl), kfmclient = paste("openURL", 
                quotedUrl), mozilla = , opera = {
                paste0("-remote \"openURL(", gsub("([,)$])", 
                  "%\\1", url), ")\"")
            }, quotedUrl)
    else quotedUrl
    system(paste(browser, remoteCmd, "> /dev/null 2>&1 ||", browser, 
        quotedUrl, "&"))
}

# Examples

