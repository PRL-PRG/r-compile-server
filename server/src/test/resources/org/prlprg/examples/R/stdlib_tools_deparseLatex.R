#? stdlib
`deparseLatex` <- function (x, dropBraces = FALSE) 
{
    specials <- c("\\", "#", "$", "%", "&", "~", "_", "^", "{", 
        "}")
    result <- character()
    lastTag <- "TEXT"
    expectArg <- FALSE
    for (i in seq_along(x)) {
        a <- x[[i]]
        tag <- attr(a, "latex_tag")
        if (is.null(tag)) 
            tag <- "NULL"
        result <- c(result, switch(tag, VERB = , MACRO = , COMMENT = a, 
            TEXT = c(if (lastTag == "MACRO" && expectArg && grepl("^[[:alpha:]]", 
                a)) " ", a), BLOCK = if (dropBraces && !expectArg) Recall(a) else c("{", 
                Recall(a), "}"), ENVIRONMENT = c("\\begin{", 
                a[[1L]], "}", Recall(a[[2L]]), "\\end{", a[[1L]], 
                "}"), MATH = c("$", Recall(a), "$"), DISPLAYMATH = c("$$", 
                Recall(a), "$$"), `NULL` = stop("Internal error, no tag", 
                domain = NA)))
        lastTag <- tag
        expectArg <- if (tag == "MACRO") 
            a %notin% paste0("\\", c(specials, "(", ")"))
        else expectArg && tag %in% c("BLOCK", "COMMENT")
    }
    paste(result, collapse = "")
}
