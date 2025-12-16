#? stdlib
`packageSlot<-` <- function (object, value) 
{
    attr(object, "package") <- value
    object
}
