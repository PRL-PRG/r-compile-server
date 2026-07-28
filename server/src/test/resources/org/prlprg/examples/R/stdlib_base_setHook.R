#? stdlib
`setHook` <- function (hookName, value, action = c("append", "prepend", "replace")) 
{
    action <- match.arg(action)
    old <- getHook(hookName)
    new <- switch(action, append = c(old, value), prepend = c(value, 
        old), replace = if (is.null(value) || is.list(value)) value else list(value))
    if (length(new)) 
        assign(hookName, new, envir = .userHooksEnv, inherits = FALSE)
    else if (exists(hookName, envir = .userHooksEnv, inherits = FALSE)) 
        remove(list = hookName, envir = .userHooksEnv, inherits = FALSE)
    invisible()
}
