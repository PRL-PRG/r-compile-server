#? stdlib
`help.start` <- function (update = FALSE, gui = "irrelevant", browser = getOption("browser"), 
    remote = NULL) 
{
    WINDOWS <- .Platform$OS.type == "windows"
    if (!WINDOWS) {
        if (!is.function(browser) && (length(browser) != 1L || 
            !is.character(browser) || !nzchar(browser))) 
            stop("invalid browser name, check options(\"browser\").")
    }
    home <- if (is.null(remote)) {
        port <- tools::startDynamicHelp(NA)
        if (port > 0L) {
            if (update) 
                make.packages.html(temp = TRUE)
            paste0("http://127.0.0.1:", port)
        }
        else stop("help.start() requires the HTTP server to be running", 
            call. = FALSE)
    }
    else remote
    url <- paste0(home, "/doc/html/index.html")
    if (WINDOWS) {
        cat(gettextf("If nothing happens, you should open\n%s yourself\n", 
            sQuote(url)))
    }
    else if (is.character(browser)) {
        writeLines(strwrap(gettextf("If the browser launched by '%s' is already running, it is *not* restarted, and you must switch to its window.", 
            browser), exdent = 4L))
        writeLines(gettext("Otherwise, be patient ..."))
    }
    browseURL(url, browser = browser)
    invisible()
}

# Examples\donttest{
help.start()

## the 'remote' arg can be tested by
help.start(remote = paste0("file://", R.home()))
}
