#? stdlib
`.get_standard_Rd_keywords_with_descriptions` <- function () 
{
    lines <- readLines(file.path(R.home("doc"), "KEYWORDS.db"))
    lines <- grep("^.*\\|([^:]*):.*", lines, value = TRUE)
    lines <- sub("[[:space:]]*#.*", "", lines)
    list(Keywords = sub("^.*\\|([^:]*):.*", "\\1", lines), Descriptions = sub(".*:[[:space:]]*", 
        "", lines))
}
