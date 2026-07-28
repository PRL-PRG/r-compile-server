#? stdlib
`format.CRAN_package_reverse_dependencies_and_views` <- function (x, ...) 
{
    apply(x, 1L, function(e) {
        paste(formatDL(e[!is.na(e)], style = "list", indent = 2L), 
            collapse = "\n")
    })
}
