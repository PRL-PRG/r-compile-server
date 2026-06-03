#? stdlib
`dyn.load` <- function (x, local = TRUE, now = TRUE, ...) 
.Internal(dyn.load(x, as.logical(local), as.logical(now), ""))

# Examples
## expect all of these to be false in R >= 3.0.0 as these can only be
## used via registered symbols.
is.loaded("supsmu") # Fortran entry point in stats
is.loaded("supsmu", "stats", "Fortran")
is.loaded("PDF", type = "External") # pdf() device in grDevices

