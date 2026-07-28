#? stdlib
`useMTable` <- function (onOff = NA) 
.Call(C_R_set_method_dispatch, as.logical(onOff))
