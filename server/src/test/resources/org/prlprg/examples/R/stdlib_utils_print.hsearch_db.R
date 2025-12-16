#? stdlib
`print.hsearch_db` <- function (x, ...) 
{
    writeLines(c("A help search database:", sprintf("Objects: %d, Aliases: %d, Keywords: %d, Concepts: %d", 
        NROW(x$Base), NROW(x$Aliases), NROW(x$Keywords), NROW(x$Concepts))))
    invisible(x)
}
