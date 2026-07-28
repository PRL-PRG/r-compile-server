#? stdlib
`nsl` <- function (hostname) 
.Call(C_nsl, hostname)

# Examples
if(.Platform$OS.type == "unix") # includes Mac
  print( nsl("www.r-project.org") )

