#? stdlib
`.asSparse` <- function (m) 
{
    if (!suppressPackageStartupMessages(requireNamespace("Matrix"))) 
        stop(gettextf("%s needs package 'Matrix' correctly installed", 
            "contr*(.., sparse=TRUE)"), domain = NA)
    methods::as(m, "sparseMatrix")
}
