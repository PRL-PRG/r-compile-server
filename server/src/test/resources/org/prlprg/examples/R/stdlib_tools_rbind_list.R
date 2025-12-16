#? stdlib
`rbind_list` <- function (args) 
clear_rownames(do.call(rbind, args))
