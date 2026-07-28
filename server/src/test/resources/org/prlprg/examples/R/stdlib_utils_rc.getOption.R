#? stdlib
`rc.getOption` <- function (name) 
{
    get("options", envir = .CompletionEnv)[[name]]
}
