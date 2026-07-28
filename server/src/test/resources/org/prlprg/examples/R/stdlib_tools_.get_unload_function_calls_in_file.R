#? stdlib
`.get_unload_function_calls_in_file` <- function (file, encoding = NA) 
{
    exprs <- .parse_code_file(file, encoding)
    calls <- list()
    for (e in exprs) {
        if ((length(e) > 2L) && (is.name(x <- e[[1L]])) && (as.character(x) %in% 
            c("<-", "=")) && (length(y <- as.character(e[[2L]])) == 
            1L) && (y %in% c(".Last.lib", ".onDetach")) && (is.call(z <- e[[3L]])) && 
            (length(w <- as.character(z[[1L]])) == 1L) && (w == 
            "function")) {
            new <- list(z)
            names(new) <- as.character(y)
            calls <- c(calls, new)
        }
    }
    calls
}
