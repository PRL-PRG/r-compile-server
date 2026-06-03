#? stdlib
`print.dendrogram` <- function (x, digits = getOption("digits"), ...) 
{
    cat("'dendrogram' ")
    if (is.leaf(x)) 
        cat("leaf '", format(attr(x, "label"), digits = digits), 
            "'", sep = "")
    else cat("with", length(x), "branches and", attr(x, "members"), 
        "members total")
    cat(", at height", format(attr(x, "height"), digits = digits), 
        "\n")
    invisible(x)
}
