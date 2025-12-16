#? stdlib
`ISOdatetime` <- function (year, month, day, hour, min, sec, tz = "") 
{
    if (min(lengths(list(year, month, day, hour, min, sec), use.names = FALSE)) == 
        0L) 
        .POSIXct(numeric(), tz = tz)
    else {
        x <- paste(year, month, day, hour, min, sec, sep = "-")
        as.POSIXct(strptime(x, "%Y-%m-%d-%H-%M-%OS", tz = tz), 
            tz = tz)
    }
}

# Examples
