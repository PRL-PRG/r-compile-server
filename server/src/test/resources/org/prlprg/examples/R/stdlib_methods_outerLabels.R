#? stdlib
`outerLabels` <- function (labels, new) 
{
    n <- length(labels)
    m <- length(new)
    paste(labels[rep.int(1L:n, rep.int(m, n))], new[rep.int(1L:m, 
        n)], sep = "#")
}
