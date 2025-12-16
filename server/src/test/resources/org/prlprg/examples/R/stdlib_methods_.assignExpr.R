#? stdlib
`.assignExpr` <- function (e) 
{
    value <- list()
    value[[codetools::getAssignedVar(e)]] <- deparse(e, nlines = 1L)
    value
}
