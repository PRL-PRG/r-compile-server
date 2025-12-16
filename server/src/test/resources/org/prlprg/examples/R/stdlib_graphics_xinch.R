#? stdlib
`xinch` <- function (x = 1, warn.log = TRUE) 
{
    if (warn.log && par("xlog")) 
        warning("x log scale:  xinch() is nonsense")
    x * diff(par("usr")[1L:2])/par("pin")[1L]
}
