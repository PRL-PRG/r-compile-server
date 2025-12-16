#? stdlib
`.objectSlotNames` <- function (object) 
{
    value <- names(attributes(object))
    if (is.null(value)) 
        character()
    else value[-match("class", value, 0L)]
}
