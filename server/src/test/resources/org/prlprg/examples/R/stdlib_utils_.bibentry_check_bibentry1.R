#? stdlib
`.bibentry_check_bibentry1` <- function (x, force = FALSE) 
{
    fields <- names(x)
    if (!force && !.is_not_nonempty_text(x$crossref)) 
        return(NULL)
    bibtype <- attr(x, "bibtype")
    rfields <- strsplit(tools:::BibTeX_entry_field_db[[bibtype]], 
        "|", fixed = TRUE)
    if (length(rfields) > 0L) {
        ok <- vapply(rfields, function(f) any(f %in% fields), 
            NA)
        if (any(!ok)) 
            stop(sprintf(ngettext(sum(!ok), "A bibentry of bibtype %s has to specify the field: %s", 
                "A bibentry of bibtype %s has to specify the fields: %s"), 
                sQuote(bibtype), paste(rfields[!ok], collapse = ", ")), 
                domain = NA)
    }
}
