#? stdlib
`.Rd_format_title` <- function (x) 
{
    x <- gsub("(``|'')", "\"", x)
    x <- gsub("`", "'", x, fixed = TRUE)
    x <- gsub("([[:alnum:]])--([[:alnum:]])", "\\1-\\2", x)
    x <- gsub("\\&", "&", x, fixed = TRUE)
    x <- gsub("---", "--", x, fixed = TRUE)
    trimws(x)
}
