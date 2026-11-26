h <- function(fn, y) { fn(y); cat("body\n") }
for (i in 1:12) h(on.exit, cat("exit\n"))
h(on.exit, cat("exit\n"))
