#? stdlib
`ccE` <- function (lines, include = R.home("include"), clean = TRUE) 
{
    if (Sys.which("cc") == "") 
        stop("'cc' is not on the path")
    tfile <- tempfile(fileext = ".h")
    on.exit(unlink(tfile))
    writeLines(lines, tfile)
    cmd <- sprintf("cc -E -I%s %s", include, tfile)
    val <- system(cmd, intern = TRUE)
    if (clean) 
        ccEclean(val, tfile)
    else val
}
