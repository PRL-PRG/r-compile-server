#? stdlib
`path_and_libPath` <- function (...) 
{
    lP <- .libPaths()
    ep0 <- c(strsplit(env_path(...), .Platform$path.sep, fixed = TRUE)[[1L]], 
        lP[-length(lP)])
    ep0 <- ep0[dir.exists(ep0)]
    paste(unique(normalizePath(ep0)), collapse = .Platform$path.sep)
}
