#? stdlib
`.dataSlot` <- function (slotNames) 
{
    dataSlot <- c(".Data", ".xData")
    dataSlot <- dataSlot[match(dataSlot, slotNames, 0) > 0]
    if (length(dataSlot) > 1) 
        stop("class cannot have both an ordinary and hidden data type")
    dataSlot
}
