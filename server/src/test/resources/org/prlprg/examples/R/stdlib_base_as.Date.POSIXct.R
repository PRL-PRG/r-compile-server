#? stdlib
`as.Date.POSIXct` <- function (x, tz = "UTC", ...) 
{
    switch(tz, UTC = , GMT = , `Etc/UTC` = , `Etc/GMT` = , UTC0 = , 
        `UTC+0` = , `UTC-0` = , GMT0 = , `GMT+0` = , `GMT-0` = {
            z <- floor(unclass(x)/86400)
            attr(z, "tzone") <- NULL
            .Date(z)
        }, as.Date(as.POSIXlt(x, tz = tz)))
}
