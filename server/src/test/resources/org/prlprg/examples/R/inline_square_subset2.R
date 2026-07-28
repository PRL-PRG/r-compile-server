x <- matrix(1:9, nrow = 3)
y <- matrix(c(1, 0, 1, 0, 1, 0, 1, 0, 1), nrow = 3)
z <- matrix(c(2, 0, 2, 0, 2, 0, 2, 0, 2), nrow = 3)

x[y == 1, z == 2]
x[[y == 1, z == 2]]
