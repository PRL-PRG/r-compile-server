#? stdlib
`is.hashtab` <- function (x) 
.External(C_ishashtab_Ext, x)
