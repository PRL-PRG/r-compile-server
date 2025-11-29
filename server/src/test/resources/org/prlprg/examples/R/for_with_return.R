check({
  f <- function() {
    for (i in 1:10) {
        return(i)
    }
  }

  f()
})

