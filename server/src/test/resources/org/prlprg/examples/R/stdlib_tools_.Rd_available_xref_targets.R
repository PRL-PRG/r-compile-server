#? stdlib
`.Rd_available_xref_targets` <- function (aliases) 
{
    unique(c(unlist(aliases, use.names = FALSE), sub("\\.[Rr]d", 
        "", basename(names(aliases)))))
}
