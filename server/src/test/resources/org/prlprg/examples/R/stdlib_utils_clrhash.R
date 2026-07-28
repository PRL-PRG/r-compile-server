#? stdlib
`clrhash` <- function (h) 
invisible(.External(C_clrhash_Ext, h))
