#? stdlib
`.get_dois_from_Rd` <- function (x) 
{
    dois <- character()
    recurse <- function(e) {
        if (identical(attr(e, "Rd_tag"), "USERMACRO") && identical(attr(e, 
            "macro"), "\\doi")) 
            dois <<- c(dois, e[2L])
        else if (is.list(e)) 
            lapply(e, recurse)
    }
    if (getDynamicFlags(x)["\\Sexpr"]) 
        lapply(x, recurse)
    dois
}
