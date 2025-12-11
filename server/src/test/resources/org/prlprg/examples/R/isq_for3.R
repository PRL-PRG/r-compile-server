#? returns(63.0)
#? [bc2c]isq
#? [bc2c]isqFor(3)
xs <- list(11, 21, 31)
s <- 0

for (i in seq_len(3)) s <- s + xs[[i]]
s
