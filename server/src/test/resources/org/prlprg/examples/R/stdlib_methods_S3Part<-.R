#? stdlib
`S3Part<-` <- function (object, strictS3 = FALSE, needClass = .S3Class(object), 
    value) 
{
    S3Class <- .S3Class(value)
    def <- getClassDef(S3Class[[1L]])
    if (is.null(def) || !extends(def, needClass[[1L]])) 
        stop(gettextf("replacement value must extend class %s, got %s", 
            dQuote(needClass), dQuote(S3Class[[1L]])), domain = NA)
    slots <- slotNames(class(object))
    if (!strictS3) {
        fromValue <- names(attributes(value))
        slots <- slots[is.na(match(slots, fromValue))]
    }
    slots <- c("class", slots)
    for (slot in slots) attr(value, slot) <- attr(object, slot)
    if (extends(def, "oldClass")) 
        attr(value, ".S3Class") <- S3Class
    if (isS4(object)) 
        value <- .asS4(value)
    value
}
