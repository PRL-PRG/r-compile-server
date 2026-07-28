#? stdlib
`droplevels` <- function (x, ...) 
UseMethod("droplevels")

# Examples
aq <- transform(airquality, Month = factor(Month, labels = month.abb[5:9]))
aq <- subset(aq, Month != "Jul")
table(           aq $Month)
table(droplevels(aq)$Month)

