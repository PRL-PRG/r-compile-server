#? stdlib
`setDataPart` <- function (object, value, check = TRUE) 
{
    if (check || typeof(object) == "S4") {
        classDef <- getClass(class(object))
        slots <- getSlots(classDef)
        dataSlot <- .dataSlot(names(slots))
        if (length(dataSlot) == 1) 
            dataClass <- elNamed(slots, dataSlot)
        else if (check) 
            stop(gettextf("class %s does not have a data part (a .Data slot) defined", 
                dQuote(class(object))), domain = NA)
        else return(.mergeAttrs(value, object))
        value <- as(value, dataClass)
        if (typeof(object) == "S4") {
            if (is.null(value)) 
                value <- .pseudoNULL
            attr(object, dataSlot) <- value
            return(object)
        }
    }
    .mergeAttrs(value, object)
}
