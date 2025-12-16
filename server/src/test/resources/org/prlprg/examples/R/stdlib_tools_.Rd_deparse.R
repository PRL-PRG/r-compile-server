#? stdlib
`.Rd_deparse` <- function (x, tag = TRUE) 
{
    if (!tag) 
        attr(x, "Rd_tag") <- "Rd"
    paste(as.character.Rd(x), collapse = "")
}
