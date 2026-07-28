#? stdlib
`basename` <- function (path) 
.Internal(basename(path))

# Examples
basename(file.path("","p1","p2","p3", c("file1", "file2")))
dirname (file.path("","p1","p2","p3", "filename"))

