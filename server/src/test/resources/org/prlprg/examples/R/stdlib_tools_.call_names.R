#? stdlib
`.call_names` <- function (x) 
vapply(x, function(e) deparse1(e[[1L]]), "")
