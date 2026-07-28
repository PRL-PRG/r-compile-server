#? stdlib
`.xpdSignature` <- function (obj, sig, nadd) 
{
    if (is(obj, "MethodDefinition")) {
        obj@defined <- sig
        obj@target <- sig
    }
    else if (is.environment(obj)) {
        for (what in names(obj)) {
            objw <- get(what, envir = obj)
            if (is(objw, "MethodDefinition")) {
                sigw <- objw@defined
                pkgw <- packageSlot(sigw)
                if (length(pkgw) < length(sigw)) 
                  pkgw <- c(pkgw, rep("", length(sigw) - length(pkgw)))
                sigw <- .simpleSignature(c(sigw, rep("ANY", nadd)), 
                  names = names(sig), packages = c(pkgw, rep("methods", 
                    nadd)))
                objw@defined <- objw@target <- sigw
                remove(list = what, envir = obj)
                var <- .pkgMethodLabel(objw)
                if (nzchar(var)) 
                  obj[[var]] <- objw
            }
        }
    }
    obj
}
