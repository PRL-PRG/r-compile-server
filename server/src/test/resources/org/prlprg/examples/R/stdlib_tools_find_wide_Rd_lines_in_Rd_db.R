#? stdlib
`find_wide_Rd_lines_in_Rd_db` <- function (x, limit = NULL, installed = FALSE) 
{
    y <- lapply(x, find_wide_Rd_lines_in_Rd_object, limit, installed)
    Filter(length, y)
}
