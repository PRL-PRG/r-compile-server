#? stdlib
`trunc.Date` <- function (x, units = c("secs", "mins", "hours", "days", "months", 
    "years"), ...) 
{
    units <- match.arg(units)
    if (units == "months" || units == "years") 
        as.Date(trunc.POSIXt(x, units, ...))
    else round(x - 0.4999999)
}
