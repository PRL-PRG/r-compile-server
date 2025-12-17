#? stdlib
`loadRdMacros` <- function (file, macros = TRUE) 
{
    if (is.logical(macros) && !macros) 
        stop("'macros' must be TRUE or must specify existing macros")
    Rd <- parse_Rd(file, fragment = TRUE, macros = macros, warningCalls = FALSE)
    for (entry in Rd) {
        bad <- TRUE
        if (is.list(entry)) 
            break
        tag <- attr(entry, "Rd_tag")
        switch(tag, TEXT = if (any(grepl("[^[:space:]]", entry, 
            perl = TRUE, useBytes = TRUE))) break else bad <- FALSE, 
            USERMACRO = , `\\newcommand` = , `\\renewcommand` = , 
            COMMENT = bad <- FALSE, break)
    }
    if (bad) 
        warning(gettextf("Macro file %s should only contain Rd macro definitions and comments", 
            file))
    attr(Rd, "macros")
}
