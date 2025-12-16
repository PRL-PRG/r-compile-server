#? stdlib
`showExtraSlots` <- function (object, ignore) 
{
    if (is(ignore, "classRepresentation")) 
        ignore <- slotNames(ignore)
    else if (!is(ignore, "character")) 
        stop(gettextf("invalid 'ignore' argument; should be a class definition or a character vector, got an object of class %s", 
            dQuote(class(ignore))), domain = NA)
    slots <- slotNames(class(object))
    for (s in slots[is.na(match(slots, ignore))]) {
        cat("Slot ", s, ":\n", sep = "")
        show(slot(object, s))
    }
    .extraSlotsDone
}
