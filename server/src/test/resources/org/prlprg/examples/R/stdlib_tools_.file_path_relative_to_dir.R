#? stdlib
`.file_path_relative_to_dir` <- function (x, dir, add = FALSE) 
{
    if (any(ind <- startsWith(x, dir))) {
        x[ind] <- if (add) 
            file.path(basename(dir), substring(x[ind], nchar(dir) + 
                2L))
        else substring(x[ind], nchar(dir) + 2L)
    }
    x
}
