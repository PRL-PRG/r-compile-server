#? stdlib
`mat.or.vec` <- function (nr, nc) 
if (nc == 1L) numeric(nr) else matrix(0, nr, nc)

# Examples
mat.or.vec(3, 1)
mat.or.vec(3, 2)

