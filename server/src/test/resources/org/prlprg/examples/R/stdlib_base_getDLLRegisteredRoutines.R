#? stdlib
`getDLLRegisteredRoutines` <- function (dll, addNames = TRUE) 
UseMethod("getDLLRegisteredRoutines")

# Examples
dlls <- getLoadedDLLs()
getDLLRegisteredRoutines(dlls[["base"]])

getDLLRegisteredRoutines("stats")

