#? stdlib
`helpCompletions` <- function (prefix = "", suffix) 
{
    if (prefix %in% c("?", "??")) 
        return(character(0))
    nc <- if (.CompletionEnv$settings[["help"]]) 
        matchAvailableTopics(prefix, suffix)
    else normalCompletions(suffix, check.mode = FALSE)
    if (length(nc)) 
        sprintf("%s?%s", prefix, nc)
    else character()
}
