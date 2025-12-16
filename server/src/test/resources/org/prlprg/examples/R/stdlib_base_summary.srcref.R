#? stdlib
`summary.srcref` <- function (object, useSource = FALSE, ...) 
{
    cat(as.character(object, useSource = useSource), sep = "\n")
    invisible(object)
}
