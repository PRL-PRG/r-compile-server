#? stdlib
`.assignLinebuffer` <- function (line) 
assign("linebuffer", line, envir = .CompletionEnv)
