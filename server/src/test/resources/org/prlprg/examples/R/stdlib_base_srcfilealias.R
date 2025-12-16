#? stdlib
`srcfilealias` <- function (filename, srcfile) 
{
    stopifnot(is.character(filename), length(filename) == 1L)
    e <- new.env(parent = emptyenv())
    e$filename <- filename
    e$original <- srcfile
    class(e) <- c("srcfilealias", "srcfile")
    return(e)
}
