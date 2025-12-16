#? stdlib
`.makeCallString` <- function (def, name = substitute(def), args = formalArgs(def)) 
{
    if (is.character(def)) {
        if (missing(name)) 
            name <- def
        def <- getFunction(def)
    }
    if (is.function(def)) 
        paste0(name, "(", paste(args, collapse = ", "), ")")
    else ""
}
