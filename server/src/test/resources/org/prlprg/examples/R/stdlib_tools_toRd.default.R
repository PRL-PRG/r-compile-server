#? stdlib
`toRd.default` <- function (obj, ...) 
{
    fsub <- function(from, to, x) gsub(from, to, x, fixed = TRUE)
    fsub("%", "\\%", fsub("}", "\\}", fsub("{", "\\{", fsub("\\", 
        "\\\\", as.character(obj)))))
}
