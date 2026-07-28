#? stdlib
`setPackageName` <- function (pkg, env) 
assign(".packageName", pkg, envir = env)
