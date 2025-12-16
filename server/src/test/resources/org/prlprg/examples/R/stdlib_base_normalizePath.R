#? stdlib
`normalizePath` <- function (path, winslash = "\\", mustWork = NA) 
.Internal(normalizePath(path.expand(path), winslash, mustWork))

# Examples\dontdiff{
cat(normalizePath(c(R.home(), tempdir())), sep = "\n")
}
