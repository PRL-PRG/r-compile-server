towers <- function(n, from_peg, to_peg, using_peg) {
  if (n == 1) {
    return(1)
  }

  moves <- towers(n - 1, from_peg, using_peg, to_peg)
  moves <- moves + 1
  moves <- moves + towers(n - 1, using_peg, to_peg, from_peg)

  return(moves)
}

#? benchmark: towers(20, 1, 2, 3)

# warmup
for (i in 1:12) {
  towers(5, 1, 2, 3)
}
