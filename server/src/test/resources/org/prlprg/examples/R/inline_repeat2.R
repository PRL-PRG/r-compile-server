f <- function(x, y) repeat({ if (x) break() else y })

f(TRUE, print("hi"))
