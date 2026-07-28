#? stdlib
`getDataPart` <- function (object, NULL.for.none = FALSE) 
{
    if (typeof(object) == "S4") {
        value <- attr(object, ".Data")
        if (is.null(value)) {
            value <- attr(object, ".xData")
            if (is.null(value) && !NULL.for.none) 
                stop("Data part is undefined for general S4 object")
        }
        return(if (identical(value, .pseudoNULL)) NULL else value)
    }
    temp <- getClass(class(object))@slots
    if (length(temp) == 0L) 
        return(object)
    if (is.na(match(".Data", names(temp)))) {
        if (NULL.for.none) 
            return(NULL)
        else stop(gettextf("no '.Data' slot defined for class %s", 
            dQuote(class(object))), domain = NA)
    }
    dataPart <- temp[[".Data"]]
    switch(dataPart, numeric = , vector = , integer = , character = , 
        logical = , complex = , list = attributes(object) <- NULL, 
        matrix = , array = {
            value <- object
            attributes(value) <- NULL
            attr(value, "dim") <- attr(object, "dim")
            attr(value, "dimnames") <- attr(object, "dimnames")
            object <- value
        }, ts = {
            value <- object
            attributes(value) <- NULL
            attr(value, "ts") <- attr(object, "ts")
            object <- value
        }, if (is.na(match(dataPart, .BasicClasses))) {
            attrVals <- attributes(object)
            attrs <- names(attrVals)
            attrs <- attrs[is.na(match(attrs, c("class", names(temp))))]
            attributes(object) <- attrVals[attrs]
        } else attributes(object) <- NULL)
    object
}
