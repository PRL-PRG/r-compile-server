#? stdlib
`.bibentry` <- function (x = list(), mheader = NULL, mfooter = NULL) 
{
    class(x) <- "bibentry"
    if (!.is_not_nonempty_text(mheader)) 
        attr(x, "mheader") <- paste(mheader, collapse = "\n")
    if (!.is_not_nonempty_text(mfooter)) 
        attr(x, "mfooter") <- paste(mfooter, collapse = "\n")
    x
}
