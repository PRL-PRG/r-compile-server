#? stdlib
`.matchSigLength` <- function (sig, fdef, fenv, reset = FALSE) 
{
    nargs <- .getGenericSigLength(fdef, fenv, TRUE)
    n <- length(sig)
    pkgs <- packageSlot(sig)
    if (n < nargs) {
        more <- nargs - n
        pkgs <- c(pkgs, rep("methods", more))
        sig <- c(as.character(sig), rep("ANY", more))
    }
    else if (n > nargs) {
        if (all(sig[(nargs + 1):n] == "ANY")) {
            length(sig) <- nargs
            if (!is.null(pkgs)) 
                length(pkgs) <- nargs
        }
        else {
            while (sig[[n]] == "ANY") n <- n - 1
            if (reset) 
                .resetSigLength(fdef, n)
            length(sig) <- n
            if (!is.null(pkgs)) 
                length(pkgs) <- n
        }
    }
    packageSlot(sig) <- pkgs
    sig
}
