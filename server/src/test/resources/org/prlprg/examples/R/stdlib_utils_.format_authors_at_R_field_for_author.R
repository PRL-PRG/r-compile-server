#? stdlib
`.format_authors_at_R_field_for_author` <- function (x) 
{
    if (is.character(x)) 
        x <- .read_authors_at_R_field(x)
    header <- attr(x, "header")
    footer <- attr(x, "footer")
    x <- vapply(x, .format_person_for_plain_author_spec, "")
    x <- x[nzchar(x)]
    if (!length(x)) 
        return("")
    out <- paste(lapply(strwrap(x, indent = 0L, exdent = 4L, 
        simplify = FALSE), paste, collapse = "\n"), collapse = ",\n  ")
    if (!is.null(header)) {
        header <- paste(strwrap(header, indent = 0L, exdent = 2L), 
            collapse = "\n")
        out <- paste(header, out, sep = "\n  ")
    }
    if (!is.null(footer)) {
        footer <- paste(strwrap(footer, indent = 2L, exdent = 2L), 
            collapse = "\n")
        out <- paste(out, footer, sep = ".\n")
    }
    out
}
