#? stdlib
`qtukey` <- function (p, nmeans, df, nranges = 1, lower.tail = TRUE, log.p = FALSE) 
.Call(C_qtukey, p, nranges, nmeans, df, lower.tail, log.p)
