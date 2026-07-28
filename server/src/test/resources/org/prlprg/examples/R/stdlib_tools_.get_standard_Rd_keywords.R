#? stdlib
`.get_standard_Rd_keywords` <- function () 
{
    lines <- readLines(file.path(R.home("doc"), "KEYWORDS.db"))
    lines <- grep("^.*\\|([^:]*):.*", lines, value = TRUE)
    lines <- sub("^.*\\|([^:]*):.*", "\\1", lines)
    lines
}
