f <- function(x) {
  switch(x,
    'a' = 1L,
    'b' = 2L,
    'c' = 3L,
    0L)
}

f('b')
