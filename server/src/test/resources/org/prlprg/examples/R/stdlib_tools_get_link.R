#? stdlib
`get_link` <- function (arg, tag, Rdfile) 
{
    if (!all(RdTags(arg) == "TEXT")) 
        stopRd(arg, Rdfile, "Bad \\link text")
    option <- attr(arg, "Rd_option")
    topic <- dest <- paste(unlist(arg), collapse = "")
    targetfile <- NULL
    pkg <- NULL
    if (!is.null(option)) {
        if (!identical(attr(option, "Rd_tag"), "TEXT")) 
            stopRd(option, Rdfile, "Bad \\link option -- must be text")
        if (grepl("^=", option, perl = TRUE, useBytes = TRUE)) 
            dest <- psub1("^=", "", option)
        else if (grepl(":", option, perl = TRUE, useBytes = TRUE)) {
            targetfile <- psub1("^[^:]*:", "", option)
            pkg <- psub1(":.*", "", option)
        }
        else {
            targetfile <- dest
            pkg <- as.character(option)
        }
    }
    if (tag == "\\linkS4class") 
        dest <- paste0(dest, "-class")
    list(topic = topic, dest = dest, pkg = pkg, targetfile = targetfile)
}
