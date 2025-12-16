#? stdlib
`sort.bibentry` <- function (x, decreasing = FALSE, .bibstyle = NULL, drop = FALSE, 
    ...) 
{
    x[order(tools::bibstyle(.bibstyle, .default = FALSE)$sortKeys(x), 
        decreasing = decreasing), drop = drop]
}
