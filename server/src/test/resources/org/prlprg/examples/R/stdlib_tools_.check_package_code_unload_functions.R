#? stdlib
`.check_package_code_unload_functions` <- function (dir) 
{
    bad_call_names <- "library.dynam.unload"
    .check_unload_function <- function(fcode, fname) {
        out <- list()
        nms <- names(fcode[[2L]])
        if ("..." %notin% nms && (length(nms) != 1L || !startsWith(nms, 
            "lib"))) 
            out$bad_arg_names <- nms
        calls <- .find_calls(fcode[[3L]], recursive = TRUE)
        if (!length(calls)) 
            return(out)
        cnames <- .call_names(calls)
        ind <- cnames %in% bad_call_names
        if (any(ind)) 
            out$bad_calls <- list(calls = calls[ind], names = cnames[ind])
        out
    }
    calls <- .find_calls_in_package_code(dir, .worker = .get_unload_function_calls_in_file)
    LL <- unlist(lapply(calls, `[[`, ".Last.lib"))
    calls <- Filter(length, lapply(calls, function(e) Filter(length, 
        Map(.check_unload_function, e, names(e)))))
    if (length(LL) && !inherits(tryCatch(nsInfo <- parseNamespaceFile(basename(dir), 
        dirname(dir)), error = identity), "error")) {
        code_objs <- ".Last.lib"
        OK <- intersect(code_objs, nsInfo$exports)
        for (p in nsInfo$exportPatterns) OK <- c(OK, grep(p, 
            code_objs, value = TRUE))
        if (!length(OK)) 
            attr(calls, ".Last.lib") <- TRUE
    }
    class(calls) <- "check_package_code_unload_functions"
    calls
}
