#? stdlib
`showDefault` <- function (object, oldMethods = TRUE) 
{
    clDef <- getClass(cl <- class(object), .Force = TRUE)
    if (!missing(oldMethods)) 
        .Deprecated(msg = "the 'oldMethods' argument is deprecated, as it has been unused since R 1.7.0")
    if (!is.null(clDef) && isS4(object) && is.na(match(clDef@className, 
        .BasicClasses))) {
        cat("An object of class ", classLabel(cl), "\n", sep = "")
        slots <- slotNames(clDef)
        dataSlot <- .dataSlot(slots)
        if (length(dataSlot) > 0) {
            show(slot(object, dataSlot))
            slots <- slots[is.na(match(slots, dataSlot))]
        }
        else if (length(slots) == 0L) 
            show(unclass(object))
        for (what in slots) {
            if (what == ".Data") 
                next
            cat("Slot ", deparse(what), ":\n", sep = "")
            print(slot(object, what))
            cat("\n")
        }
    }
    else print(object, useS4 = FALSE)
    invisible()
}
