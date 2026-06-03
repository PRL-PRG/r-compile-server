#? stdlib
`.strip_backticks` <- function (x) 
gsub("`", "", x, fixed = TRUE)
