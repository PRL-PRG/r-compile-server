check({
  f <- function() {
      g <- function(x) {
          y <- x
          return(1L)
      }
      g(return(42L))
      return(2L)
  }
  f()
}, returns(42L))

