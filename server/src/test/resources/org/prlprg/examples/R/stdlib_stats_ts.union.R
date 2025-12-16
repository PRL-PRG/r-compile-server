#? stdlib
`ts.union` <- function (..., dframe = FALSE) 
.cbind.ts(list(...), .makeNamesTs(...), dframe = dframe, union = TRUE)

# Examples
ts.union(mdeaths, fdeaths)
cbind(mdeaths, fdeaths) # same as the previous line
ts.intersect(window(mdeaths, 1976), window(fdeaths, 1974, 1978))

sales1 <- ts.union(BJsales, lead = BJsales.lead)
ts.intersect(sales1, lead3 = lag(BJsales.lead, -3))

