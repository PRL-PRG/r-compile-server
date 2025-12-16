#? stdlib
`Sys.glob` <- function (paths, dirmark = FALSE) 
.Internal(Sys.glob(path.expand(paths), dirmark))

# Examples
\donttest{
Sys.glob(file.path(R.home(), "library", "*", "R", "*.rdx"))
}
