#? stdlib
`.notSingleString` <- function (what) 
{
    if (identical(what, "")) 
        "non-empty string; got \"\""
    else if (is.character(what)) 
        paste("single string; got a character vector of length", 
            length(what))
    else gettextf("single string; got an object of class %s", 
        dQuote(class(what)[[1L]]))
}
