#? stdlib
`edit.vignette` <- function (name, ...) 
{
    if (is.character(src <- getRcode(name, strict = FALSE))) {
        f <- tempfile(name$Topic, fileext = ".R")
        file.copy(src, f)
        file.edit(file = f, ...)
    }
}
