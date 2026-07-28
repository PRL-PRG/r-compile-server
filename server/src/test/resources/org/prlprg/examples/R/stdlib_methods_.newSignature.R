#? stdlib
`.newSignature` <- function (classes, names) 
{
    n <- min(length(classes), length(names))
    i <- seq_len(n)
    pkgs <- lapply(classes[i], packageSlot)
    pkgs[vapply(pkgs, is.null, logical(1L))] <- "methods"
    .asS4(structure(as.character(classes)[i], class = .signatureClassName, 
        names = as.character(names)[i], package = as.character(pkgs)))
}
