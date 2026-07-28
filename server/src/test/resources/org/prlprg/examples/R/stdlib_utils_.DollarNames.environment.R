#? stdlib
`.DollarNames.environment` <- function (x, pattern = "") 
{
    if (!.CompletionEnv$settings[["fuzzy"]]) 
        ls(x, all.names = TRUE, pattern = pattern)
    else findMatches(pattern, ls(x, all.names = TRUE))
}
