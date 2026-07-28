#? stdlib
`.format_authors_at_R_field_for_maintainer` <- function (x) 
{
    if (is.character(x)) 
        x <- .read_authors_at_R_field(x)
    x <- Filter(function(e) (!is.null(e$given) || !is.null(e$family)) && 
        !is.null(e$email) && ("cre" %in% e$role), x)
    if (length(x) != 1L) 
        return("")
    display <- format(x, include = c("given", "family"))
    address <- format(x, include = c("email"), collapse = list(email = FALSE))
    if (any(ind <- grepl(",", display))) {
        display[ind] <- sprintf("\"%s\"", gsub("\"", "\\\"", 
            display[ind], fixed = TRUE))
    }
    paste(display, address)
}
