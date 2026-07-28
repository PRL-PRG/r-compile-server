#? stdlib
`.is_not_nonempty_text` <- function (x) 
is.null(x) || anyNA(x) || all(grepl("^[[:space:]]*$", x))
