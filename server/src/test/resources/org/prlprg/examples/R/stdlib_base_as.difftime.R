#? stdlib
`as.difftime` <- function (tim, format = "%X", units = "auto", tz = "UTC") 
{
    if (inherits(tim, "difftime")) 
        return(tim)
    if (is.character(tim)) {
        difftime(strptime(tim, format = format), strptime("0:0:0", 
            format = "%X"), units = units, tz = tz)
    }
    else {
        if (!is.numeric(tim)) 
            stop("'tim' is not character or numeric")
        nms <- names(tim)
        tim <- as.double(tim)
        names(tim) <- nms
        if (units == "auto") 
            stop("need explicit units for numeric conversion")
        if (!(units %in% c("secs", "mins", "hours", "days", "weeks"))) 
            stop("invalid units specified")
        .difftime(tim, units = units)
    }
}
