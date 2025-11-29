# sequence is INT
check({
  s <- 0
  for (i in 1:10) s <- s + i
  s
}, returns(55))

# sequence is REAL
check({
  s <- 0
  for (i in seq(0,1,.1)) s <- s + i
  s
})

# sequence is LGL
check({
  s <- 0L
  for (i in c(T,F,T)) s <- s + i
  s
}, returns(2L))

# sequence is STR
check({
  x <- ""
  for (i in letters)  x <- paste0(x, i)
  x
})

# sequence is CPL
check({
  s <- 0
  for (i in c(0+1i,1+2i))  s <- s + i
  s
})

# sequence is VEC
check({
  s <- 0
  for (i in list(1,2,3))  s <- s + i
  s
})

# sequence is RAW
check({
  s <- 0
  for (i in as.raw(c(1,2,3)))  s <- s + as.integer(i)
  s
})

