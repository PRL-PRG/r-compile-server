#? stdlib
`NLSstLfAsymptote` <- function (xy) 
UseMethod("NLSstLfAsymptote")

# Examples
DNase.2 <- DNase[ DNase$Run == "2", ]
DN.srt <- sortedXyData( expression(log(conc)), expression(density), DNase.2 )
NLSstLfAsymptote( DN.srt )

