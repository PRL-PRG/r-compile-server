#? stdlib
`functionArgs` <- function (fun, text, S3methods = .CompletionEnv$settings[["S3"]], 
    S4methods = FALSE, keep.dots = .CompletionEnv$settings[["dots"]], 
    add.args = rc.getOption("funarg.suffix")) 
{
    if (length(fun) < 1L || any(fun == "")) 
        return(character())
    specialFunArgs <- specialFunctionArgs(fun, text)
    if (S3methods && exists(fun, mode = "function")) 
        fun <- c(fun, tryCatch(methods(fun), warning = function(w) {
        }, error = function(e) {
        }))
    if (S4methods) 
        warning("cannot handle S4 methods yet")
    allArgs <- unique(unlist(lapply(fun, argNames)))
    ans <- findMatches(sprintf("^%s", makeRegexpSafe(text)), 
        allArgs)
    whereDots <- ans == "..."
    if (any(whereDots)) 
        ans <- ans[!whereDots]
    if (length(ans) && !is.null(add.args)) 
        ans <- sprintf("%s%s", ans, add.args)
    if (keep.dots && any(whereDots)) 
        ans <- c(ans, "...")
    c(specialFunArgs, ans)
}
