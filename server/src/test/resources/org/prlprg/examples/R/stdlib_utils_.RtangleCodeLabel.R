#? stdlib
`.RtangleCodeLabel` <- function (chunk) 
{
    if (length(lnos <- grep("^#line ", chunk, value = TRUE))) {
        srclines <- attr(chunk, "srclines")
        lno <- if (length(srclines)) 
            paste(min(srclines), max(srclines), sep = "-")
        else srclines
        fn <- sub("[^\"]*\"([^\"]+).*", "\\1", lnos[1L])
        paste(fn, lno, sep = ":")
    }
    else "(missing #line/file info)"
}
