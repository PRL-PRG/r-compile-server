#? stdlib
`metaNameUndo` <- function (strings, prefix, searchForm = FALSE) 
{
    pattern <- methodsPackageMetaName(prefix, "")
    n <- nchar(pattern, "c")
    matched <- substr(strings, 1L, n) == pattern
    value <- substring(strings[matched], n + 1L)
    pkg <- sub("^[^:]*", "", value)
    if (searchForm) {
        global <- grep(".GlobalEnv", value)
        if (length(global)) {
            pkg[-global] <- paste0("package", pkg[-global])
            pkg[global] <- substring(pkg[global], 2L)
        }
    }
    else pkg <- substring(pkg, 2L)
    value <- sub(":.*", "", value)
    new("ObjectsWithPackage", value, package = pkg)
}
