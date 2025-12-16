#? stdlib
`remhash` <- function (h, key) 
invisible(.External(C_remhash_Ext, h, key))
