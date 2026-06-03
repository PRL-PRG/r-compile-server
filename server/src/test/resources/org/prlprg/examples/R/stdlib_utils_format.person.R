#? stdlib
`format.person` <- function (x, include = c("given", "family", "email", "role", 
    "comment"), braces = list(given = "", family = "", email = c("<", 
    ">"), role = c("[", "]"), comment = c("(", ")")), collapse = list(given = " ", 
    family = " ", email = ", ", role = ", ", comment = ", "), 
    ..., style = c("text", "R", "md")) 
{
    style <- match.arg(style)
    if (!length(x)) 
        return(if (style == "R") "person()" else character())
    if (style == "R") 
        return(.format_person_as_R_code(x))
    args <- c("given", "family", "email", "role", "comment")
    include <- vapply(include, match.arg, "", args)
    braces <- braces[args]
    collapse <- collapse[args]
    names(braces) <- names(collapse) <- args
    if (is.null(braces$given)) 
        braces$given <- ""
    if (is.null(braces$family)) 
        braces$family <- ""
    if (is.null(braces$email)) 
        braces$email <- c("<", ">")
    if (is.null(braces$role)) 
        braces$role <- c("[", "]")
    if (is.null(braces$comment)) 
        braces$comment <- c("(", ")")
    braces <- lapply(braces, rep_len, 2L)
    if (is.null(collapse$given)) 
        collapse$given <- " "
    if (is.null(collapse$family)) 
        collapse$family <- " "
    if (is.null(collapse$email)) 
        collapse$email <- ", "
    if (is.null(collapse$role)) 
        collapse$role <- ", "
    if (is.null(collapse$comment)) 
        collapse$comment <- ", "
    collapse <- lapply(collapse, rep_len, 1L)
    x <- lapply(unclass(x), `[`, include)
    braces <- braces[include]
    collapse <- collapse[include]
    if (any(include == "comment")) 
        x <- lapply(x, function(e) {
            e$comment <- .expand_ORCID_identifier(e$comment, 
                style)
            e
        })
    paste_collapse <- function(x, collapse) {
        if (is.na(collapse) || isFALSE(collapse)) {
            x[1L]
        }
        else {
            paste(x, collapse = collapse)
        }
    }
    format_person1 <- function(p) {
        rval <- lapply(seq_along(p), function(i) {
            if (is.null(p[[i]])) 
                NULL
            else paste0(braces[[i]][1L], paste_collapse(p[[i]], 
                collapse[[i]]), braces[[i]][2L])
        })
        paste(do.call(c, rval), collapse = " ")
    }
    vapply(x, format_person1, "")
}
