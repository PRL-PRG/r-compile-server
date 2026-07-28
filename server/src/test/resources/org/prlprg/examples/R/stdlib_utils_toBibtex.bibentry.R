#? stdlib
`toBibtex.bibentry` <- function (object, escape = FALSE, ...) 
{
    format_author <- function(author) paste(vapply(author, function(p) {
        fnms <- p$family
        only_given_or_family <- (is.null(fnms) || is.null(p$given)) && 
            !(identical(fnms, "others") || identical(p$given, 
                "others"))
        fbrc <- if (length(fnms) > 1L || any(grepl("[[:space:]]", 
            fnms)) || only_given_or_family) 
            c("{", "}")
        else ""
        gbrc <- if (only_given_or_family) 
            c("{", "}")
        else ""
        format(p, include = c("given", "family"), braces = list(given = gbrc, 
            family = fbrc))
    }, ""), collapse = " and ")
    format_bibentry1 <- function(object) {
        object <- unclass(object)[[1L]]
        rval <- paste0("@", attr(object, "bibtype"), "{", attr(object, 
            "key"), ",")
        if ("author" %in% names(object)) 
            object$author <- format_author(object$author)
        if ("editor" %in% names(object)) 
            object$editor <- format_author(object$editor)
        rval <- c(rval, vapply(names(object), function(n) paste0("  ", 
            n, " = {", object[[n]], "},"), ""), "}", "")
        if (isTRUE(escape)) {
            rval <- enc2utf8(rval)
            ind <- (Encoding(rval) == "UTF-8")
            rval[ind] <- tools::encoded_text_to_latex(rval[ind], 
                "UTF-8")
        }
        return(rval)
    }
    if (length(object)) {
        object$.index <- NULL
        y <- head(unlist(lapply(object, format_bibentry1)), -1L)
    }
    else y <- character()
    class(y) <- "Bibtex"
    y
}
