#? stdlib
`.parse_usage_as_much_as_possible` <- function (x) 
{
    if (!length(x)) 
        return(expression())
    x <- .Rd_drop_nodes_with_tags(x, c("COMMENT", "\\special"))
    attr(x, "Rd_tag") <- "Rd"
    txt <- as.character.Rd(x)
    txt[txt %in% c("\\dots", "\\ldots")] <- "..."
    txt <- paste(txt, collapse = "")
    txt <- .dquote_method_markup(txt, .S3_method_markup_regexp)
    txt <- .dquote_method_markup(txt, .S4_method_markup_regexp)
    txt <- gsub("(^|[^\\])\\\\($|[^abfnrtuUvx0-9'\"\\])", "\\1<unescaped bksl>\\2", 
        txt)
    txt <- gsub("(^|[^\\])\\\\($|[^abfnrtuUvx0-9'\"\\])", "\\1<unescaped bksl>\\2", 
        txt)
    .parse_text_as_much_as_possible(txt)
}
