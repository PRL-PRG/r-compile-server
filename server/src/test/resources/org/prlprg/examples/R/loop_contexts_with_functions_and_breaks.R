helper <- function(val) {
  if (val == 3) return(TRUE)
  return(FALSE)
}

x <- 0
for (i in 1:5) {
  if (helper(i)) {
    break()
  }
  x <- x + i
}
x
