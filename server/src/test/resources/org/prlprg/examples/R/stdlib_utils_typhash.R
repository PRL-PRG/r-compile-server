#? stdlib
`typhash` <- function (h) 
.External(C_typhash_Ext, h)
