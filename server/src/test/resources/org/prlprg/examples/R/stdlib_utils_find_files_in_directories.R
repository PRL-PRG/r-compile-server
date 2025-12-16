#? stdlib
`find_files_in_directories` <- function (basenames, dirnames) 
{
    dirnames <- dirnames[dir.exists(dirnames)]
    dirnames <- normalizePath(dirnames, "/")
    out <- character(length(basenames))
    pos <- seq_along(out)
    for (dir in dirnames) {
        paths <- file.path(dir, basenames[pos])
        ind <- file_test("-f", paths)
        out[pos[ind]] <- paths[ind]
        pos <- pos[!ind]
        if (!length(pos)) 
            break
    }
    out
}
