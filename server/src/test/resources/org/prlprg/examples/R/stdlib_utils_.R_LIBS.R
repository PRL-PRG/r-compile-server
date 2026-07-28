#? stdlib
`.R_LIBS` <- function (libp = .libPaths()) 
{
    libp <- libp[!libp %in% .Library]
    if (length(libp)) 
        paste(libp, collapse = .Platform$path.sep)
    else ""
}
