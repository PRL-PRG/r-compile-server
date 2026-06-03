#? stdlib
`packageEvent` <- function (pkgname, event = c("onLoad", "attach", "detach", "onUnload")) 
{
    event <- match.arg(event)
    pkgname <- strsplit(pkgname, "_", fixed = TRUE)[[1L]][1L]
    paste("UserHook", pkgname, event, sep = "::")
}
