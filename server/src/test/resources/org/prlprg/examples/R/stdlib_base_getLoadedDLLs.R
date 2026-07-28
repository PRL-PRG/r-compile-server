#? stdlib
`getLoadedDLLs` <- function () 
.Internal(getLoadedDLLs())

# Examples
getLoadedDLLs()

utils::tail(getLoadedDLLs(), 2) # the last 2 loaded ones, still a DLLInfoList

