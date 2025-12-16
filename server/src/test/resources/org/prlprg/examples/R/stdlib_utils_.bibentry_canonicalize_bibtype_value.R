#? stdlib
`.bibentry_canonicalize_bibtype_value` <- function (value) 
{
    stopifnot(all(lengths(value) == 1L))
    BibTeX_names <- names(tools:::BibTeX_entry_field_db)
    value <- unlist(value)
    pos <- match(tolower(value), tolower(BibTeX_names))
    if (anyNA(pos)) 
        stop(gettextf("%s has to be one of %s", sQuote("bibtype"), 
            paste(BibTeX_names, collapse = ", ")), domain = NA)
    as.list(BibTeX_names[pos])
}
