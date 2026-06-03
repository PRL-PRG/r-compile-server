#? stdlib
`.Rd_get_metadata` <- function (x, kind) 
{
    x <- x[RdTags(x) == sprintf("\\%s", kind)]
    if (!length(x)) 
        character()
    else unique(trimws(vapply(x, paste, "", collapse = "\n")))
}
