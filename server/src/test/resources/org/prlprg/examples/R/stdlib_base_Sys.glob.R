#? stdlib
`Sys.glob` <- function (paths, dirmark = FALSE) 
.Internal(Sys.glob(path.expand(paths), dirmark))
