#? stdlib
`difftime` <- function (time1, time2, tz, units = c("auto", "secs", "mins", 
    "hours", "days", "weeks")) 
{
    if (missing(tz)) {
        time1 <- as.POSIXct(time1)
        time2 <- as.POSIXct(time2)
    }
    else {
        time1 <- as.POSIXct(time1, tz = tz)
        time2 <- as.POSIXct(time2, tz = tz)
    }
    z <- unclass(time1) - unclass(time2)
    attr(z, "tzone") <- NULL
    units <- match.arg(units)
    if (units == "auto") 
        units <- if (all(is.na(z))) 
            "secs"
        else {
            zz <- min(abs(z), na.rm = TRUE)
            if (!is.finite(zz) || zz < 60) 
                "secs"
            else if (zz < 3600) 
                "mins"
            else if (zz < 86400) 
                "hours"
            else "days"
        }
    switch(units, secs = .difftime(z, units = "secs"), mins = .difftime(z/60, 
        units = "mins"), hours = .difftime(z/3600, units = "hours"), 
        days = .difftime(z/86400, units = "days"), weeks = .difftime(z/(7 * 
            86400), units = "weeks"))
}

# Examples\donttest{
(z <- Sys.time() - 3600)
Sys.time() - z                # just over 3600 seconds.

## time interval between release days of R 1.2.2 and 1.2.3.
ISOdate(2001, 4, 26) - ISOdate(2001, 2, 26)

as.difftime(c("0:3:20", "11:23:15"))
as.difftime(c("3:20", "23:15", "2:"), format = "%H:%M") # 3rd gives NA
(z <- as.difftime(c(0,30,60), units = "mins"))
as.numeric(z, units = "secs")
as.numeric(z, units = "hours")
format(z)
}
