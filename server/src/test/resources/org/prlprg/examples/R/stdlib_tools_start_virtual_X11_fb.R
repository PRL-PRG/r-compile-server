#? stdlib
`start_virtual_X11_fb` <- function (options) 
{
    args <- scan(text = options, what = character(), quiet = TRUE)
    ind <- grepl("^:[[:digit:]]+$", args)
    if (any(ind)) {
        num <- args[ind][1L]
    }
    else {
        num <- paste0(":", Sys.getpid())
        options <- c(num, options)
    }
    dis <- Sys.getenv("DISPLAY", unset = NA_character_)
    tf <- tempfile()
    on.exit(unlink(tf))
    writeLines(c(paste(c(shQuote("Xvfb"), options, ">/dev/null 2>&1 &"), 
        collapse = " "), "echo ${!}"), tf)
    pid <- system2("sh", tf, stdout = TRUE)
    Sys.setenv(DISPLAY = num)
    attr(pid, "display") <- dis
    pid
}
