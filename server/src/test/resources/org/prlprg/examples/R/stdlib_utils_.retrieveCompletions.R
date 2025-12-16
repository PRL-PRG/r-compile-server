#? stdlib
`.retrieveCompletions` <- function () 
unique(get("comps", envir = .CompletionEnv))
