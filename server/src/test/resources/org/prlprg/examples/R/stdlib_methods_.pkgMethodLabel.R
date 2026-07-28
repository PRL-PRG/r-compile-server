#? stdlib
`.pkgMethodLabel` <- function (method) 
{
    sig <- method@target
    pkgs <- packageSlot(sig)
    if ((length(pkgs) < length(as.character(sig))) || any(!nzchar(pkgs))) 
        stop("package slot missing from signature for generic ", 
            sQuote(method@generic), "\n", "and classes ", paste(sig, 
                collapse = ", "), "\n", "cannot use with duplicate class names (the package may need to be re-installed)", 
            call. = FALSE, domain = NA)
    paste(pkgs, collapse = "#")
}
