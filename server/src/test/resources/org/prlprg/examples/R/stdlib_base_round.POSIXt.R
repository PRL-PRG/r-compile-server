#? stdlib
`round.POSIXt` <- function (x, units = c("secs", "mins", "hours", "days", "months", 
    "years")) 
{
    .round_x_to_l_or_u <- function(lx, ll, lu) {
        cu <- as.POSIXct(lu)
        lu <- as.POSIXlt(cu)
        tu <- unclass(cu)
        tx <- unclass(as.POSIXct(lx))
        tl <- unclass(as.POSIXct(ll))
        up <- ((tu - tx) <= (tx - tl))
        up <- !is.na(up) & up
        y <- ll
        y[up] <- lu[up]
        y
    }
    units <- if (is.numeric(units) && units == 0) 
        "secs"
    else match.arg(units)
    if (units == "months") {
        x <- as.POSIXlt(x)
        ll <- trunc.POSIXt(x, "months")
        lu <- ll
        lu$mon <- lu$mon + 1L
        .round_x_to_l_or_u(x, ll, lu)
    }
    else if (units == "years") {
        x <- as.POSIXlt(x)
        ll <- trunc.POSIXt(x, "years")
        lu <- ll
        lu$year <- lu$year + 1L
        .round_x_to_l_or_u(x, ll, lu)
    }
    else trunc.POSIXt(as.POSIXct(x) + switch(units, secs = 0.5, 
        mins = 30, hours = 1800, days = 43200), units = units)
}
