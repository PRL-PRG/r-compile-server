#? stdlib
`find_missing_required_BibTeX_fields` <- function (entry, fields) 
{
    pos <- match(tolower(entry), tolower(names(BibTeX_entry_field_db)))
    if (is.na(pos)) {
        return(NA_character_)
    }
    rfields <- BibTeX_entry_field_db[[pos]]
    if (!length(rfields)) 
        return(character())
    fields <- tolower(fields)
    ok <- vapply(strsplit(rfields, "|", fixed = TRUE), function(f) any(f %in% 
        fields), NA)
    rfields[!ok]
}
