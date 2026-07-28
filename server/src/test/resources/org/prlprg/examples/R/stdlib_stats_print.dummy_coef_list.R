#? stdlib
`print.dummy_coef_list` <- function (x, ...) 
{
    for (strata in names(x)) print.dummy_coef(x[[strata]], ..., 
        title = paste("\n     Error:", strata))
    invisible(x)
}
