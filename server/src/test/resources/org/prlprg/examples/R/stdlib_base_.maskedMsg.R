#? stdlib
`.maskedMsg` <- function (same, pkg, by) 
{
    objs <- strwrap(paste(same, collapse = ", "), indent = 4L, 
        exdent = 4L)
    txt <- if (by) {
        ngettext(length(same), "The following object is masked _by_ %s:", 
            "The following objects are masked _by_ %s:")
    }
    else {
        ngettext(length(same), "The following object is masked from %s:", 
            "The following objects are masked from %s:")
    }
    sprintf(paste0(txt, "\n\n%s\n"), pkg, paste(objs, collapse = "\n"))
}
