#? stdlib
`.Rd_get_argument_names` <- function (x) 
{
    x <- .Rd_get_section(x, "arguments")
    if (!length(x)) 
        return(character())
    txt <- .Rd_get_item_tags(x)
    txt <- unlist(strsplit(txt, ", *"))
    txt <- gsub("\\\\l?dots", "...", txt)
    txt <- gsub("\\_", "_", txt, fixed = TRUE)
    trimws(txt)
}
