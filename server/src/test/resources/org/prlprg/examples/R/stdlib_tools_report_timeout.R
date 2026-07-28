#? stdlib
`report_timeout` <- function (tlim) 
{
    tlim <- trunc(tlim)
    if (tlim >= 3600) 
        warning(gettextf("elapsed-time limit of %g %s reached for sub-process", 
            round(tlim/3600, 1L), "hours"), domain = NA, call. = FALSE)
    else if (tlim >= 60) 
        warning(gettextf("elapsed-time limit of %g %s reached for sub-process", 
            round(tlim/60, 1L), "minutes"), domain = NA, call. = FALSE)
    else warning(gettextf("elapsed-time limit of %g %s reached for sub-process", 
        tlim, "seconds"), domain = NA, call. = FALSE)
}
