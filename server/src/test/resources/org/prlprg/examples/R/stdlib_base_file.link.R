#? stdlib
`file.link` <- function (from, to) 
{
    if (!(length(from))) 
        stop("no files to link from")
    if (!length(to)) 
        stop("no files to link to")
    .Internal(file.link(from, to))
}
