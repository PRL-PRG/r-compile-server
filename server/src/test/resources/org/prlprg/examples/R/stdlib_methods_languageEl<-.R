#? stdlib
`languageEl<-` <- function (object, which, value) 
{
    data <- as.list(object)
    n <- length(data)
    type <- typeof(object)
    if (type == "closure") {
        ev <- environment(object)
        if (is.character(which)) {
            if (is.na(match(which, names(data)))) {
                body <- data[[n]]
                data <- data[-n]
                data[[which]] <- value
                data[[n + 1]] <- body
            }
            else data[[which]] <- value
        }
        else {
            if (which < 1 || which > n) 
                stop("invalid index for function argument")
            data[[which]] <- value
        }
        object <- as.function(data)
        environment(object) <- ev
        object
    }
    else if (type == "language") {
        if (is.character(which)) 
            data[[which]] <- value
        else if (isGrammarSymbol(data[[1L]])) 
            data[[which + 1]] <- value
        else {
            if (identical(which, 1) && is.character(value)) 
                value <- as.symbol(value)
            data[[which]] <- value
        }
        as.call(data)
    }
    else {
        object[[which]] <- value
        object
    }
}
