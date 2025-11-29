check({
  n <- 1
  m <- 10
  s <- 0
  for (i in n:m) s <- s + i
  s
}, returns(55), direct.isq, direct.isqFor(10L))

check({
  xs <- list(10, 20, 30)
  s <- 0
  for (i in seq_along(xs)) s <- s + xs[[i]]
  s
}, returns(60), direct.isq, direct.isqFor(3L))

check({
  xs <- list(11, 21, 31)
  s <- 0
  for (i in seq_len(3)) s <- s + xs[[i]]
  s
}, returns(63), direct.isq, direct.isqFor(3L))

