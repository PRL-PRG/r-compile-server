#? stdlib
`.packages` <- function (all.available = FALSE, lib.loc = NULL) 
{
    if (is.null(lib.loc)) 
        lib.loc <- .libPaths()
    if (all.available) {
        ans <- character()
        for (lib in lib.loc[file.exists(lib.loc)]) {
            a <- list.files(lib, all.files = FALSE, full.names = FALSE)
            pfile <- file.path(lib, a, "Meta", "package.rds")
            ans <- c(ans, a[file.exists(pfile)])
        }
        return(unique(ans))
    }
    s <- search()
    invisible(.rmpkg(s[startsWith(s, "package:")]))
}
