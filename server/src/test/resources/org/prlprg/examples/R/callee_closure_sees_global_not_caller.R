# A callee looks up names in its closure environment, not in the caller's frame, even if it's
# inlined. `f1` and `f2` read `x` in a closure that the callee creates, `f3` calls `h` there, and `f4`
# binds `x` only after the closure is created. The super-store of `setz`, which `f5` calls from a
# closure, skips the closure's frame and `f5`'s.
x <- 100
z <- 100
h <- function() 100
mk <- function() function() x
mk2 <- function() { y <- 2; function() x + y }
mkh <- function() function() h()
setz <- function() { z <<- 5; 0 }
f1 <- function() { x <- 1; g <- function() x; k <- mk(); k() + g() }
f2 <- function() { x <- 1; g <- function() x; k <- mk2(); k() + g() }
f3 <- function() { h <- function() 1; k <- mkh(); k() + h() }
f4 <- function(c) { k <- mk(); if (c) x <- 1; k() }
f5 <- function() { z <- 1; g <- function() setz(); g(); z }
for (i in 1:12) { f1(); f2(); f3(); f4(TRUE); f4(FALSE); z <- 100; f5() }
z <- 100
c(f1(), f2(), f3(), f4(TRUE), f4(FALSE), f5(), z)
