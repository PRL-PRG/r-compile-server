#? stdlib
`getVignetteEncoding` <- function (file, ...) 
{
    lines <- readLines(file, warn = FALSE)
    .getVignetteEncoding(lines, ...)
}
