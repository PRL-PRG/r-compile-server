#? stdlib
`nullfile` <- function () 
if (.Platform$OS.type == "windows") "nul:" else "/dev/null"
