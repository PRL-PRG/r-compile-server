#? stdlib
`maphash` <- function (h, FUN) 
invisible(.External(C_maphash_Ext, h, FUN))
