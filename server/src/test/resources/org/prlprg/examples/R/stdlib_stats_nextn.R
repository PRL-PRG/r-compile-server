#? stdlib
`nextn` <- function (n, factors = c(2, 3, 5)) 
.Call(C_nextn, n, factors)

# Examples
nextn(1001) # 1024
table(nextn(599:630))
n <- 1:100 ; plot(n, nextn(n) - n, type = "o", lwd=2, cex=1/2)

