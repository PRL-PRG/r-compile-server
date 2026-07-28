#? stdlib
`timestamp` <- function (stamp = date(), prefix = "##------ ", suffix = " ------##", 
    quiet = FALSE) 
{
    stamp <- paste0(prefix, stamp, suffix)
    .External2(C_addhistory, stamp)
    if (!quiet) 
        cat(stamp, sep = "\n")
    invisible(stamp)
}
