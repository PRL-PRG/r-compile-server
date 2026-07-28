#? stdlib
`savehistory` <- function (file = ".Rhistory") 
invisible(.External2(C_savehistory, file))

# Examples
