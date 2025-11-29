check({
  result <- 0
  for (outer in 1:3) {
    inner_sum <- 0
    for (inner in 1:4) {
      if (inner == 1) {
        next()
      }
      if (inner == 4) {
        break()
      }
      inner_sum <- inner_sum + inner
    }
    if (outer == 3) {
      break()
    }
    result <- result + inner_sum
  }
  result
}, returns(10))

