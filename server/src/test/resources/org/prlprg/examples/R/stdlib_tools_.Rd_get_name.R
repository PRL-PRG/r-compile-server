#? stdlib
`.Rd_get_name` <- function (x) 
{
    x <- .Rd_get_section(x, "name")
    if (length(x)) 
        trimws(.Rd_deparse(x, tag = FALSE))
    else character()
}
