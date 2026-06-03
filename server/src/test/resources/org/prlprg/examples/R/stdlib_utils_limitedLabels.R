#? stdlib
`limitedLabels` <- function (value, maxwidth = getOption("width") - 5L) 
{
    srcrefs <- sapply(value, function(v) if (!is.null(srcref <- attr(v, 
        "srcref"))) {
        srcfile <- attr(srcref, "srcfile")
        paste0(basename(srcfile$filename), "#", srcref[1L], ": ")
    }
    else "")
    value <- paste0(srcrefs, as.character(value))
    if (is.null(maxwidth) || maxwidth < 40L) 
        maxwidth <- 40L
    maxwidth <- min(maxwidth, 1000L)
    strtrim(value, maxwidth)
}
