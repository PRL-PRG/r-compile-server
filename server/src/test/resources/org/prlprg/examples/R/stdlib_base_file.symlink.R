#? stdlib
`file.symlink` <- function (from, to) 
{
    if (!(length(from))) 
        stop("no files to link from")
    if (!(nt <- length(to))) 
        stop("no files/directory to link to")
    if (nt == 1 && file.exists(to) && file.info(to, extra_cols = FALSE)$isdir) 
        to <- file.path(to, basename(from))
    .Internal(file.symlink(from, to))
}
