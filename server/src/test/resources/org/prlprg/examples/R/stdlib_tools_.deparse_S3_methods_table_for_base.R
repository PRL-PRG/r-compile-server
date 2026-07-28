#? stdlib
`.deparse_S3_methods_table_for_base` <- function () 
{
    if (!identical("C", Sys.getlocale("LC_COLLATE"))) 
        warning("*not* using 'C' for LC_COLLATE locale")
    mdb <- .make_S3_methods_table_for_base()
    n <- nrow(mdb)
    c(sprintf("%s\"%s\", \"%s\"%s", c("matrix(c(", rep.int("         ", 
        n - 1L)), mdb[, 1L], mdb[, 2L], c(rep.int(",", n - 1L), 
        "),")), "       ncol = 2L, byrow = TRUE,", "       dimnames = list(NULL, c(\"generic\", \"class\")))")
}
