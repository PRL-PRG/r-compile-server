#? stdlib
`file.path` <- function (..., fsep = .Platform$file.sep) 
.Internal(file.path(list(...), fsep))

# Examples
