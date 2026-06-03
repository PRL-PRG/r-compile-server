#? returns(TRUE)

# Basic list assignment
x1 <- x2 <- list(a = 1)
x1$b <- 2
eval(quote(x2$b <- 2))

# Method dispatch
obj <- structure(list(val = 1), class = "myobj")
`$<-.myobj` <- function(x, name, value) {
  x[[paste0("modified_", name)]] <- value
  x
}
obj1 <- obj2 <- obj
obj1$test <- 10
eval(quote(obj2$test <- 10))

# Copy-on-write
original <- list(a = 1)
x3 <- x4 <- original
x3$b <- 2
eval(quote(x4$b <- 2))

identical(x1, x2) &&
  identical(obj1, obj2) &&
  !identical(x3, original) &&
  !identical(x4, original) &&
  identical(x3, x4)
