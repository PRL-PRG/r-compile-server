#? stdlib
`inRbuildignore` <- function (files, pkgdir) 
{
    exclude <- rep.int(FALSE, length(files))
    ignore <- get_exclude_patterns()
    ignore_file <- file.path(pkgdir, ".Rbuildignore")
    if (file.exists(ignore_file)) 
        ignore <- c(ignore, readLines(ignore_file, warn = FALSE))
    for (e in ignore[nzchar(ignore)]) exclude <- exclude | grepl(e, 
        files, perl = TRUE, ignore.case = TRUE)
    exclude
}
