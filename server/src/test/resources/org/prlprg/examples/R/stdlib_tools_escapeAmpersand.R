#? stdlib
`escapeAmpersand` <- function (x) 
gsub("&", "&amp;", x, fixed = TRUE)
