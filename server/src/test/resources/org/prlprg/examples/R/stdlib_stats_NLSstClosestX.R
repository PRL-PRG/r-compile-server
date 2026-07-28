#? stdlib
`NLSstClosestX` <- function (xy, yval) 
UseMethod("NLSstClosestX")

# Examples
DNase.2 <- DNase[ DNase$Run == "2", ]
DN.srt <- sortedXyData(expression(log(conc)), expression(density), DNase.2)
NLSstClosestX(DN.srt, 1.0)

