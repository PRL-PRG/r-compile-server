#? stdlib
`getVignetteEngine` <- function (filename, lines = readLines(filename, warn = FALSE)) 
{
    c(.get_vignette_metadata(lines, "Engine"), "utils::Sweave")[1L]
}
