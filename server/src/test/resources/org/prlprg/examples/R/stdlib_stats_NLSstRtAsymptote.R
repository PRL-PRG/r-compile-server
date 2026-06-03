#? stdlib
`NLSstRtAsymptote` <- function (xy) 
UseMethod("NLSstRtAsymptote")

# Examples
DNase.2 <- DNase[ DNase$Run == "2", ]
DN.srt <- sortedXyData( expression(log(conc)), expression(density), DNase.2 )
NLSstRtAsymptote( DN.srt )

