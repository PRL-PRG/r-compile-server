#? stdlib
`getHook` <- function (hookName) 
get0(hookName, envir = .userHooksEnv, inherits = FALSE, ifnotfound = list())
