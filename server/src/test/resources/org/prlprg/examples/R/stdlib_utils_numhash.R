#? stdlib
`numhash` <- function (h) 
.External(C_numhash_Ext, h)
