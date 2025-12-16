#? stdlib
`..getNamespace` <- function (name, where) 
{
    .Internal(getRegisteredNamespace(name)) %||% tryCatch(loadNamespace(name), 
        error = function(e) {
            tr <- Sys.getenv("_R_NO_REPORT_MISSING_NAMESPACES_")
            if (tr == "false" || (where != "<unknown>" && !nzchar(tr))) {
                warning(gettextf("namespace %s is not available and has been replaced\nby .GlobalEnv when processing object %s", 
                  sQuote(name)[1L], sQuote(where)), domain = NA, 
                  call. = FALSE, immediate. = TRUE)
                if (nzchar(Sys.getenv("_R_CALLS_MISSING_NAMESPACES_"))) 
                  print(sys.calls())
            }
            .GlobalEnv
        })
}
