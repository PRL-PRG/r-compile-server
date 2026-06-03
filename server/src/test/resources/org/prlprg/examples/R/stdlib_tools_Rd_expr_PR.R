#? stdlib
`Rd_expr_PR` <- function (x) 
{
    baseurl <- "https://bugs.R-project.org/show_bug.cgi?id"
    sprintf("\\href{%s=%s}{PR#%s}", baseurl, x, x)
}
