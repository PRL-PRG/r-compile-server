#? stdlib
`sethash` <- function (h, key, value) 
invisible(.External(C_sethash_Ext, h, key, value))
