#? stdlib
`.format_calls_in_file` <- function (calls, f) 
{
    c(gettextf("File %s:", sQuote(f)), paste0("  ", unlist(lapply(calls, 
        function(e) paste(deparse(e), collapse = "\n")))))
}
