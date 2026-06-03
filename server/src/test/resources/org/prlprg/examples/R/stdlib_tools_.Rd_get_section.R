#? stdlib
`.Rd_get_section` <- function (x, which, predefined = TRUE) 
{
    if (predefined) 
        x <- x[RdTags(x) == paste0("\\", which)]
    else {
        x <- x[RdTags(x) == "\\section"]
        if (length(x)) {
            ind <- sapply(x, function(e) .Rd_get_text(e[[1L]])) == 
                which
            x <- lapply(x[ind], `[[`, 2L)
        }
    }
    if (!length(x)) 
        x
    else structure(x[[1L]], class = "Rd")
}
