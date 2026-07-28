#? stdlib
`data.entry` <- function (..., Modes = NULL, Names = NULL) 
{
    tmp1 <- de(..., Modes = Modes, Names = Names)
    j <- 1L
    nn <- names(tmp1)
    for (i in nn) {
        assign(i, tmp1[[j]], envir = .GlobalEnv)
        j <- j + 1L
    }
    if (j == 1L) 
        warning("did not assign() anything")
    invisible(nn)
}
