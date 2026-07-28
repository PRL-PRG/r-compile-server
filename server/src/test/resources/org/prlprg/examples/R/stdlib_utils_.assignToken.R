#? stdlib
`.assignToken` <- function (text) 
assign("token", text, envir = .CompletionEnv)
