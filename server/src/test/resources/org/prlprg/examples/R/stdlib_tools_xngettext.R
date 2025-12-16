#? stdlib
`xngettext` <- function (dir, verbose = FALSE) 
{
    dir <- file_path_as_absolute(dir)
    dir <- file.path(dir, "R")
    exts <- .make_file_exts("code")
    R_files <- list_files_with_exts(dir, exts)
    for (d in c("unix", "windows", "aqua")) {
        OSdir <- file.path(dir, d)
        if (dir.exists(OSdir)) 
            R_files <- c(R_files, list_files_with_exts(OSdir, 
                exts))
    }
    out <- vector("list", length = length(R_files))
    names(out) <- R_files
    find_strings <- function(e) {
        if (is.call(e) && is.name(e[[1L]]) && as.character(e[[1L]]) %in% 
            "ngettext") {
            e <- match.call(ngettext, e)
            domain <- e[["domain"]]
            suppress <- !is.null(domain) && !is.name(domain) && 
                is.na(domain)
            if (!suppress && is.character(e[["msg1"]]) && is.character(e[["msg2"]])) 
                strings <<- c(strings, list(c(msg1 = e[["msg1"]], 
                  msg2 = e[["msg2"]])))
        }
        else if (is.recursive(e)) 
            for (i in seq_along(e)) Recall(e[[i]])
    }
    for (f in R_files) {
        if (verbose) 
            message(gettextf("parsing '%s'", f), domain = NA)
        strings <- list()
        for (e in parse(file = f)) find_strings(e)
        out[[f]] <- structure(strings, class = "xngettext")
    }
    out[lengths(out) > 0L]
}
