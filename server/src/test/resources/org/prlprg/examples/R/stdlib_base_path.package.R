#? stdlib
`path.package` <- function (package = NULL, quiet = FALSE) 
{
    if (is.null(package)) 
        package <- .packages()
    if (length(package) == 0L) 
        return(character())
    s <- search()
    searchpaths <- lapply(seq_along(s), function(i) attr(as.environment(i), 
        "path"))
    searchpaths[[length(s)]] <- system.file()
    pkgs <- paste0("package:", package)
    pos <- match(pkgs, s)
    if (any(m <- is.na(pos))) {
        if (!quiet) {
            if (all(m)) 
                stop("none of the packages are loaded")
            else warning(sprintf(ngettext(as.integer(sum(m)), 
                "package %s is not loaded", "packages %s are not loaded"), 
                paste(package[m], collapse = ", ")), domain = NA)
        }
        pos <- pos[!m]
    }
    unlist(searchpaths[pos], use.names = FALSE)
}
