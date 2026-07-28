#? stdlib
`double` <- function (length = 0L) 
.Internal(vector("double", length))

# Examples
is.double(1)
all(double(3) == 0)

