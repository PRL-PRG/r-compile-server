#? stdlib
`format.subdir_tests` <- function (x, ...) 
{
    .fmt <- function(i) {
        tag <- names(x)[i]
        c(sprintf("Subdirectory '%s' contains invalid file names:", 
            tag), .pretty_format(x[[i]]))
    }
    as.character(unlist(lapply(which(lengths(x) > 0L), .fmt)))
}
