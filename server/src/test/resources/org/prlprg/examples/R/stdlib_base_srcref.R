#? stdlib
`srcref` <- function (srcfile, lloc) 
{
    stopifnot(inherits(srcfile, "srcfile"), length(lloc) %in% 
        c(4L, 6L, 8L))
    if (length(lloc) == 4L) 
        lloc <- c(lloc, lloc[c(2L, 4L)])
    if (length(lloc) == 6L) 
        lloc <- c(lloc, lloc[c(1L, 3L)])
    structure(as.integer(lloc), srcfile = srcfile, class = "srcref")
}
