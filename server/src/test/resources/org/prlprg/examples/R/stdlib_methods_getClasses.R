#? stdlib
`getClasses` <- function (where = .externalCallerEnv(), inherits = missing(where)) 
{
    pat <- paste0("^", classMetaName(""))
    if (!is.environment(where)) 
        where <- as.environment(where)
    if (inherits) {
        evList <- .parentEnvList(where)
        clNames <- character()
        for (ev in evList) clNames <- c(clNames, grep(pat, names(ev), 
            value = TRUE))
        clNames <- unique(clNames)
    }
    else clNames <- grep(pat, names(where), value = TRUE)
    substring(clNames, nchar(pat, "c"))
}
