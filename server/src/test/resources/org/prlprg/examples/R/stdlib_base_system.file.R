#? stdlib
`system.file` <- function (..., package = "base", lib.loc = NULL, mustWork = FALSE) 
{
    if (nargs() == 0L) 
        return(file.path(.Library, "base"))
    if (length(package) != 1L) 
        stop("'package' must be of length 1")
    packagePath <- find.package(package, lib.loc, quiet = TRUE)
    ans <- if (length(packagePath)) {
        FILES <- file.path(packagePath, ...)
        present <- file.exists(FILES)
        if (any(present)) 
            FILES[present]
        else ""
    }
    else ""
    if (mustWork && identical(ans, "")) 
        stop("no file found")
    ans
}

# Examples
system.file()                  # The root of the 'base' package
system.file(package = "stats") # The root of package 'stats'
system.file("INDEX")
system.file("help", "AnIndex", package = "splines")

