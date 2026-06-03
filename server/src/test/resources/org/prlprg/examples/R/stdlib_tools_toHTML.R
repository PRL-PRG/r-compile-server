#? stdlib
`toHTML` <- function (x, ...) 
UseMethod("toHTML")

# Examples
cat(toHTML(demo(package = "base")), sep = "\n")

