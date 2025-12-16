#? stdlib
`print.check_demo_index` <- function (x, ...) 
{
    if (length(bad <- x$missing_from_index)) {
        writeLines(c("Demos with missing or empty index information:", 
            paste0("  ", bad)))
    }
    if (length(bad <- x$missing_from_demos)) {
        writeLines(c("Demo index entries without corresponding demo:", 
            paste0("  ", bad)))
    }
    invisible(x)
}
