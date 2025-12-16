#? stdlib
`.Rd_get_example_code` <- function (x) 
{
    x <- .Rd_get_section(x, "examples")
    if (!length(x)) 
        return(character())
    x <- .Rd_drop_comments(x)
    recurse <- function(e) {
        if (!is.null(tag <- attr(e, "Rd_tag")) && tag %in% c("\\dontshow", 
            "\\testonly")) 
            attr(e, "Rd_tag") <- "Rd"
        if (is.list(e)) {
            structure(lapply(e[is.na(match(RdTags(e), "\\dontrun"))], 
                recurse), Rd_tag = attr(e, "Rd_tag"))
        }
        else e
    }
    .Rd_deparse(recurse(x), tag = FALSE)
}
