check({
  f <- function(x) {
    print(x)
  }

  f({
    x <- 1
    x + 2
  })
}, direct.compilePromises)

