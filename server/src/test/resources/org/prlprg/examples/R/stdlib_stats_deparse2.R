#? stdlib
`deparse2` <- function (x) 
paste(deparse(x, width.cutoff = 500L, backtick = !is.symbol(x) && 
    is.language(x)), collapse = " ")
