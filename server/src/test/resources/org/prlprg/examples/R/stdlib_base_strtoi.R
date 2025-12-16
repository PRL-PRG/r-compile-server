#? stdlib
`strtoi` <- function (x, base = 0L) 
.Internal(strtoi(as.character(x), as.integer(base)))

# Examples
strtoi(c("0xff", "077", "123"))
strtoi(c("ffff", "FFFF"), 16L)
strtoi(c("177", "377"), 8L)

