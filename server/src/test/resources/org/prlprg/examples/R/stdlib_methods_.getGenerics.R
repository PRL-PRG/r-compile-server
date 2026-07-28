#? stdlib
`.getGenerics` <- function (where, trim = TRUE) 
{
    if (missing(where)) 
        where <- .envSearch(topenv(parent.frame()))
    else if (is.environment(where)) 
        where <- list(where)
    these <- unlist(lapply(where, objects, all.names = TRUE), 
        use.names = FALSE)
    these <- unique(these)
    these <- these[startsWith(these, ".__T__")]
    if (length(these) == 0L) 
        return(character())
    funNames <- gsub("^\\.__T__(.*):([^:]+)", "\\1", these)
    packageNames <- gsub("^\\.__T__(.*):([^:]+(.*))", "\\2", 
        these)
    attr(funNames, "package") <- packageNames
    if (isTRUE(trim)) 
        funNames
    else if (isFALSE(trim)) 
        these
    else gsub(".__T__", as.character(trim), these, fixed = TRUE)
}
