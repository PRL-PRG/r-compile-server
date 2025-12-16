#? stdlib
`.fixPackageSlot` <- function (def, sig) 
{
    pkgs <- attr(sig, "package")
    if (is.null(pkgs)) 
        pkgs <- character(length(sig))
    fixme <- !nzchar(pkgs)
    if (any(fixme)) {
        for (i in seq_along(pkgs)[fixme]) pkgs[[i]] <- getClass(sig[[i]], 
            .Force = TRUE)@package
        attr(sig, "package") <- pkgs
        def@target <- sig
        sig <- def@defined
        pkgs <- attr(sig, "package")
        if (is.null(pkgs)) 
            pkgs <- character(length(sig))
        fixme <- !nzchar(pkgs)
        if (any(fixme)) {
            for (i in seq_along(pkgs)[fixme]) pkgs[[i]] <- getClass(sig[[i]], 
                .Force = TRUE)@package
            attr(sig, "package") <- pkgs
            def@defined <- sig
        }
    }
    def
}
