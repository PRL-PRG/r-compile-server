#? stdlib
`NLSstAsymptotic` <- function (xy) 
UseMethod("NLSstAsymptotic")

# Examples
Lob.329 <- Loblolly[ Loblolly$Seed == "329", ]
print(NLSstAsymptotic(sortedXyData(expression(age),
                                   expression(height),
                                   Lob.329)), digits = 3)

