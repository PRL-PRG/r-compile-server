#? stdlib
`.package_vignettes_via_call_to_R` <- function (dir, ..., libpaths = .libPaths()) 
{
    fun <- function(dir, ..., libpaths) {
        .libPaths(libpaths)
        pkgVignettes(dir = dir, ...)
    }
    R(fun, list(dir, ..., libpaths = libpaths), "--vanilla")
}
