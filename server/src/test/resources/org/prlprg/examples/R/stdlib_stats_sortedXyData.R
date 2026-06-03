#? stdlib
`sortedXyData` <- function (x, y, data) 
UseMethod("sortedXyData")

# Examples
DNase.2 <- DNase[ DNase$Run == "2", ]
sortedXyData( expression(log(conc)), expression(density), DNase.2 )

