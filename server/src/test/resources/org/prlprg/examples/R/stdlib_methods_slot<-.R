#? stdlib
`slot<-` <- function (object, name, check = TRUE, value) 
{
    if (check) 
        value <- checkSlotAssignment(object, name, value)
    .Call(C_R_set_slot, object, name, value)
}
