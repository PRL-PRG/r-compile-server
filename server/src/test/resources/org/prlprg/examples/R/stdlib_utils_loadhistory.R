#? stdlib
`loadhistory` <- function (file = ".Rhistory") 
invisible(.External2(C_loadhistory, file))
