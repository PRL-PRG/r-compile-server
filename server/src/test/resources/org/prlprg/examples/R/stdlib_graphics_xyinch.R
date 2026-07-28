#? stdlib
`xyinch` <- function (xy = 1, warn.log = TRUE) 
{
    if (warn.log && (par("xlog") || par("ylog"))) 
        warning("log scale:  xyinch() is nonsense")
    u <- par("usr")
    xy * c(u[2L] - u[1L], u[4L] - u[3L])/par("pin")
}
