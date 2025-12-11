#? returns(60.0)
#? [bc2c]isq
#? [bc2c]isqFor(3)
xs <- list(10, 20, 30)
s <- 0

for (i in seq_along(xs)) s <- s + xs[[i]]
s
