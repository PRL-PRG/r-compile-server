#? stdlib
`.dquote_method_markup` <- function (txt, re) 
{
    out <- ""
    while ((ipos <- regexpr(re, txt)) > -1L) {
        epos <- ipos + attr(ipos, "match.length") - 1L
        str <- substring(txt, ipos, epos)
        str <- sub("\"", "\\\"", str, fixed = TRUE)
        str <- sub("\\", "\\\\", str, fixed = TRUE)
        out <- sprintf("%s%s\"%s\"", out, substring(txt, 1L, 
            ipos - 1L), str)
        txt <- substring(txt, epos + 1L)
    }
    paste0(out, txt)
}
