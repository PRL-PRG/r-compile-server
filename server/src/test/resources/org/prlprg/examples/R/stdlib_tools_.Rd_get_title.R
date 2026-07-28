#? stdlib
`.Rd_get_title` <- function (x) 
{
    title <- .Rd_get_section(x, "title")
    result <- character()
    if (length(title)) {
        result <- .Rd_get_text(title)
        result <- result[nzchar(result)]
    }
    paste(result, collapse = " ")
}
