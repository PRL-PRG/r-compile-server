#? stdlib
`gethash` <- function (h, key, nomatch = NULL) 
.External(C_gethash_Ext, h, key, nomatch)
