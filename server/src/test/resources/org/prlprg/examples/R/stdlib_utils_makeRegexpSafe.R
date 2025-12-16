#? stdlib
`makeRegexpSafe` <- function (s) 
{
    s <- gsub("\\", "\\\\", s, fixed = TRUE)
    s <- gsub("(", "\\(", s, fixed = TRUE)
    s <- gsub("*", "\\*", s, fixed = TRUE)
    s <- gsub("+", "\\+", s, fixed = TRUE)
    s <- gsub("?", "\\?", s, fixed = TRUE)
    s <- gsub("[", "\\[", s, fixed = TRUE)
    s <- gsub("{", "\\{", s, fixed = TRUE)
    s <- gsub(".", "\\.", s, fixed = TRUE)
    s <- gsub("^", "\\^", s, fixed = TRUE)
    s
}
