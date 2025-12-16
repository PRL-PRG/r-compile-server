#? stdlib
`ptukey` <- function (q, nmeans, df, nranges = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_ptukey, q, nranges, nmeans, df, lower.tail, log.p)
