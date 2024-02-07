arithmetic <- function(n) n + 1
calls <- function(a, b, c) f(a+b, length(b), c)
conditions <- function(n) if (n > 0) n else if (n < 0) -n else 0