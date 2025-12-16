#? stdlib
`aspell_write_personal_dictionary_file` <- function (x, out, language = "en", program = NULL) 
{
    if (inherits(x, "aspell")) 
        x <- sort(unique(x$Original))
    program <- aspell_find_program(program)
    if (is.na(program)) 
        stop("No suitable spell check program found.")
    if (names(program) == "aspell") {
        header <- sprintf("personal_ws-1.1 %s %d UTF-8", language, 
            length(x))
        x <- enc2utf8(x)
    }
    else {
        header <- NULL
    }
    writeLines(c(header, x), out, useBytes = TRUE)
}
