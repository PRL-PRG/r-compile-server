#? stdlib
`.mtableAddToTable` <- function (generic, mlist, table = new.env(TRUE, fenv), add = TRUE) 
{
    fenv <- environment(generic)
    signature <- generic@signature
    if (!exists(".SigLength", envir = fenv, inherits = FALSE)) 
        .setupMethodsTables(generic)
    n <- get(".SigLength", envir = fenv, inherits = FALSE)
    .storeMtable(table, rep("ANY", n), mlist, 1, add, fenv)
    nNow <- get(".SigLength", envir = fenv, inherits = FALSE)
    if (nNow > n) {
        length(signature) <- nNow
        .resetTable(table, nNow, signature)
    }
    table
}
