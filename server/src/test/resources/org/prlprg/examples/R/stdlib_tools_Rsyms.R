#? stdlib
`Rsyms` <- function (keep = c("F", "V")) 
{
    rsyms <- apidata$rsyms
    if (is.null(rsyms)) {
        ofiles <- c(file.path(R.home("bin"), "exec", "R"), dir(R.home("lib"), 
            full.names = TRUE), dir(R.home("modules"), full.names = TRUE))
        rsyms <- rbind_list(lapply(ofiles, ofile_syms, keep))
        apidata$rsyms <- rsyms
    }
    rsyms
}
