check({ x <- 1 })
check({ y <<- 2 })
check({
  a::b <- 1
  a:::b <- 3
  a:::b <<- 3
})
