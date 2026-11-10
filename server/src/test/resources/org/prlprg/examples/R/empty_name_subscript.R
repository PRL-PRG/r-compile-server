# GNU-R never matches the empty name: reading it is out of range, and assigning it appends.
f <- function(x, l) {
  names(x) <- c("a", "")
  names(l) <- c("a", "")
  a <- x
  a[""] <- 9
  b <- x
  b[[""]] <- 9
  m <- l
  m[[""]] <- 9
  list(x[""], l[[""]], a, b, m)
}

f(c(1, 2), list(1, 2))
