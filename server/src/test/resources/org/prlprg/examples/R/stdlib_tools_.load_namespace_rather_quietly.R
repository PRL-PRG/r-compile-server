#? stdlib
`.load_namespace_rather_quietly` <- function (package) 
{
    .whandler <- function(e) {
        calls <- sys.calls()
        if (sum(.call_names(calls) == "loadNamespace") == 1L) 
            signalCondition(e)
        else tryInvokeRestart("muffleWarning")
    }
    expr <- substitute(loadNamespace(package), list(package = package))
    invisible(withCallingHandlers(suppressMessages(eval(expr)), 
        warning = .whandler))
}
