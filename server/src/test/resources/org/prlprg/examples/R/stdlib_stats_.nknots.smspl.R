#? stdlib
`.nknots.smspl` <- function (n) 
{
    if (n < 50L) 
        n
    else trunc({
        a1 <- log2(50)
        a2 <- log2(100)
        a3 <- log2(140)
        a4 <- log2(200)
        if (n < 200L) 2^(a1 + (a2 - a1) * (n - 50)/150) else if (n < 
            800L) 2^(a2 + (a3 - a2) * (n - 200)/600) else if (n < 
            3200L) 2^(a3 + (a4 - a3) * (n - 800)/2400) else 200 + 
            (n - 3200)^0.2
    })
}
