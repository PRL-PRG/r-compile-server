#? stdlib
`tag2id` <- function (tag, name = NULL, tagid = section2id[tag]) 
{
    section2id <- c(`\\description` = "_sec_description", `\\usage` = "_sec_usage", 
        `\\arguments` = "_sec_arguments", `\\format` = "_sec_format", 
        `\\details` = "_sec_details", `\\note` = "_sec_note", 
        `\\section` = "_sec_section", `\\author` = "_sec_author", 
        `\\references` = "_sec_references", `\\source` = "_sec_source", 
        `\\seealso` = "_sec_seealso", `\\examples` = "_sec_examples", 
        `\\value` = "_sec_value")
    if (anyNA(tagid)) 
        return(NULL)
    id <- if (is.null(name)) 
        tagid
    else paste(name2id(name), tolower(tagid), sep = "_:_")
    string2id(gsub("[[:space:]]+", "-", id))
}
