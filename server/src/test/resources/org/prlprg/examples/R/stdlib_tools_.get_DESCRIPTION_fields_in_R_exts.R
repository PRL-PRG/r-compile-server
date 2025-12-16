#? stdlib
`.get_DESCRIPTION_fields_in_R_exts` <- function (texi = NULL) 
{
    if (is.null(texi)) 
        texi <- file.path(.R_top_srcdir_from_Rd(), "doc", "manual", 
            "R-exts.texi")
    lines <- readLines(texi)
    re <- "^@c DESCRIPTION field "
    sort(unique(sub(re, "", lines[grepl(re, lines)])))
}
