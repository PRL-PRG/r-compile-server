#? stdlib
`path.expand` <- function (path) 
.Internal(path.expand(path))

# Examples
path.expand("~/foo")

