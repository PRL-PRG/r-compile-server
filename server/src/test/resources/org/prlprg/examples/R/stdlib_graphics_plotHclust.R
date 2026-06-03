#? stdlib
`plotHclust` <- function (n, merge, height, order, hang, labels, ...) 
{
    .External.graphics(C_dendwindow, n, merge, height, hang, 
        labels, ...)
    .External.graphics(C_dend, n, merge, height, order, hang, 
        labels, ...)
}
