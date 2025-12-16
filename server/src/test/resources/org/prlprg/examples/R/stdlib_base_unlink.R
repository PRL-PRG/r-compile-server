#? stdlib
`unlink` <- function (x, recursive = FALSE, force = FALSE, expand = TRUE) 
.Internal(unlink(as.character(x), recursive, force, expand))

# Examples
