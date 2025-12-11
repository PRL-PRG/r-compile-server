#? returns(66.0)
a <- 1

f <- function(z) {
  c <- 2
  g <- function(y) {
    e <- 3
    h <- function(x) {
        a + c + e + x + y + z
    }
    h
  }
  g(20)
}
f(10)(30)
