#? stdlib
`Sys.readlink` <- function (paths) 
.Internal(Sys.readlink(paths))

# Examples
##' To check if files (incl. directories) are symbolic links:
is.symlink <- function(paths) isTRUE(nzchar(Sys.readlink(paths), keepNA=TRUE))
## will return all FALSE when the platform has no `readlink` system call.
is.symlink("/foo/bar")

