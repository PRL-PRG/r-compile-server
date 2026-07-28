#? stdlib
`.find_tidy_cmd` <- function (Tidy = Sys.getenv("R_TIDYCMD", "tidy")) 
{
    msg <- ""
    OK <- nzchar(Sys.which(Tidy))
    if (OK) {
        ver <- system2(Tidy, "--version", stdout = TRUE)
        mat <- regexec("^HTML Tidy .* (\\d+\\.\\d+\\.\\d+)$", 
            ver)
        ver <- regmatches(ver, mat)[[1L]][2L]
        OK <- !is.na(ver)
        if (OK) {
            req <- "5.0.0"
            OK <- numeric_version(ver) >= req
            if (!OK) 
                msg <- sprintf("'%s' is too old: need version %s, found %s", 
                  Tidy, req, ver)
        }
        else msg <- sprintf("'%s' doesn't look like recent enough HTML Tidy", 
            Tidy)
    }
    else msg <- sprintf("no command '%s' found", Tidy)
    if (nzchar(msg)) {
        Tidy <- ""
        attr(Tidy, "msg") <- msg
    }
    Tidy
}
