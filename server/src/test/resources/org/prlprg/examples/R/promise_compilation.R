#? [bc2c]compilePromises
f <- function(x) {
  print(x)
}

f({
  x <- 1
  x + 2
})
