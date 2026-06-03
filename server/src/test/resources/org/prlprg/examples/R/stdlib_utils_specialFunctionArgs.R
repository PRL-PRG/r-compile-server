#? stdlib
`specialFunctionArgs` <- function (fun, text) 
{
    switch(EXPR = fun, library = , require = {
        if (.CompletionEnv$settings[["ipck"]]) {
            findMatches(sprintf("^%s", makeRegexpSafe(text)), 
                rownames(installed.packages()))
        } else character()
    }, data = {
        if (.CompletionEnv$settings[["data"]]) {
            findMatches(sprintf("^%s", makeRegexpSafe(text)), 
                data()$results[, "Item"])
        } else character()
    }, character())
}
