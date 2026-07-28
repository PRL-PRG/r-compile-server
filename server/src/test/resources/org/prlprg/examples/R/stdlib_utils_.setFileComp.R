#? stdlib
`.setFileComp` <- function (state) 
assign("fileName", state, envir = .CompletionEnv)
