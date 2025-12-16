#? stdlib
`languageEl` <- function (object, which) 
{
    data <- as.list(object)
    if (is.character(which)) 
        data[[which]]
    else if (typeof(object) == "language") {
        if (isGrammarSymbol(data[[1L]])) 
            data[[which + 1]]
        else data[[which]]
    }
    else data[[which]]
}

# Examples
