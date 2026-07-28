#? stdlib
`setCacheOnAssign` <- function (env, onOff = cacheOnAssign(env)) 
env$.cacheOnAssign <- if (onOff) TRUE else FALSE
