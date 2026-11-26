# `length` of an S4 object dispatches to its method, which the unboxed `length` calls.
setClass("Len5", representation(x = "numeric"))
setMethod("length", "Len5", function(x) 5L)
f <- function(x) length(x) + 1L
x <- new("Len5", x = 1)
for (i in 1:12) {
  r <- f(x)
}
r
