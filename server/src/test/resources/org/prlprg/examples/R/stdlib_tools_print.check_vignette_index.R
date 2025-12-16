#? stdlib
`print.check_vignette_index` <- function (x, ...) 
{
    if (length(x)) {
        writeLines(c("Vignettes with missing or empty \\VignetteIndexEntry:", 
            paste0("  ", basename(unclass(x)))))
    }
    invisible(x)
}
