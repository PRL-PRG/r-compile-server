#? stdlib
`yinch` <- function (y = 1, warn.log = TRUE) 
{
    if (warn.log && par("ylog")) 
        warning("y log scale:  yinch() is nonsense")
    y * diff(par("usr")[3:4])/par("pin")[2L]
}
