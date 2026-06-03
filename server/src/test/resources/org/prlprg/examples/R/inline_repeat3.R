#? noEval
f <- function(x, y) repeat({ if (x) next() else y })

f(TRUE, print("hi"))
