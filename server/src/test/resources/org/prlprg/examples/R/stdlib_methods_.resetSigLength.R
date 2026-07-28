#? stdlib
`.resetSigLength` <- function (fdef, n) 
{
    fenv <- environment(fdef)
    assign(".SigLength", n, envir = fenv)
    mtable <- .getMethodsTable(fdef, fenv, check = FALSE)
    signames <- fdef@signature
    length(signames) <- n
    .resetTable(mtable, n, signames)
    .resetInheritedMethods(fenv, mtable)
}
