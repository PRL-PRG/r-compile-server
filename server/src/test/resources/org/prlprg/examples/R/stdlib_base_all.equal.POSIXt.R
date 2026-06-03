#? stdlib
`all.equal.POSIXt` <- function (target, current, ..., tolerance = 0.001, scale, check.tzone = TRUE) 
{
    if (!inherits(target, "POSIXt")) 
        return("'target' is not a POSIXt")
    if (!inherits(current, "POSIXt")) 
        return("'current' is not a POSIXt")
    target <- as.POSIXct(target)
    current <- as.POSIXct(current)
    msg <- NULL
    if (check.tzone) {
        tz <- function(dt) {
            if (is.null(tz <- attr(dt, "tzone"))) 
                ""
            else tz[1L]
        }
        tzt <- tz(target)
        tzc <- tz(current)
        if (!isTRUE(tzt == tzc)) 
            msg <- sprintf("'tzone' attributes are inconsistent ('%s' and '%s')", 
                tzt, tzc)
    }
    attr(target, "tzone") <- attr(current, "tzone") <- NULL
    val <- all.equal.numeric(target, current, ..., tolerance = tolerance, 
        scale = 1)
    if (!isTRUE(val)) 
        msg <- c(msg, val)
    if (is.null(msg)) 
        TRUE
    else msg
}
