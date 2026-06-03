#? stdlib
`initMethodDispatch` <- function (where = topenv(parent.frame())) 
.Call(C_R_initMethodDispatch, as.environment(where))
