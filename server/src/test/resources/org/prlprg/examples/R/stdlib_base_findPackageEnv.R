#? stdlib
`findPackageEnv` <- function (info) 
{
    if (info %in% search()) 
        return(as.environment(info))
    message(gettextf("Attempting to load the environment %s", 
        sQuote(info)), domain = NA)
    if (require(substr(info, 9L, 1000L), character.only = TRUE, 
        quietly = TRUE)) 
        return(as.environment(info))
    message("Specified environment not found: using '.GlobalEnv' instead")
    .GlobalEnv
}
