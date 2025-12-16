#? stdlib
`detachPackages` <- function (pkgs, verbose = TRUE) 
{
    pkgs <- pkgs[pkgs %in% search()]
    if (!length(pkgs)) 
        return()
    if (verbose) {
        msg <- paste("detaching", paste(sQuote(pkgs), collapse = ", "))
        cat("", strwrap(msg, exdent = 2L), "", sep = "\n")
    }
    isPkg <- startsWith(pkgs, "package:")
    for (item in pkgs[!isPkg]) {
        pos <- match(item, search())
        if (!is.na(pos)) 
            .detach(pos)
    }
    pkgs <- pkgs[isPkg]
    if (!length(pkgs)) 
        return()
    deps <- lapply(pkgs, function(x) if (exists(".Depends", x, 
        inherits = FALSE)) 
        get(".Depends", x)
    else character())
    names(deps) <- pkgs
    unload <- nzchar(Sys.getenv("_R_CHECK_UNLOAD_NAMESPACES_"))
    exclusions <- c("grid", "tcltk")
    exclusions <- paste0("package:", exclusions)
    while (length(deps)) {
        unl <- unlist(deps)
        for (i in seq_along(deps)) {
            this <- names(deps)[i]
            if (.rmpkg(this) %in% unl) 
                next
            else break
        }
        try(detach(this, character.only = TRUE, unload = unload && 
            (this %notin% exclusions), force = TRUE))
        deps <- deps[-i]
    }
}
