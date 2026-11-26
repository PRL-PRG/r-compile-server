# Boxing the unboxed string `NA` gives a character vector, not a bare `CHARSXP`.
f <- function(s, i) s[i]
s <- c("a", "b", NA)
for (k in 1:20) for (i in 1:2) f(s, i)
x <- f(s, 3L)
list(x, typeof(x), is.na(x))
