#? stdlib
`.check_package_code_startup_functions` <- function (dir) 
{
    bad_call_names <- unlist(.bad_call_names_in_startup_functions)
    .check_startup_function <- function(fcode, fname) {
        out <- list()
        nms <- names(fcode[[2L]])
        if (("..." %notin% nms) && ((length(nms) != 2L) || any(substr(nms, 
            1L, 3L) != c("lib", "pkg")))) 
            out$bad_arg_names <- nms
        calls <- .find_calls(fcode[[3L]], recursive = TRUE)
        if (!length(calls)) 
            return(out)
        cnames <- .call_names(calls)
        bcn <- bad_call_names
        if (fname == ".onAttach") 
            bcn <- c(bcn, "library.dynam")
        if (fname == ".onLoad") 
            bcn <- c(bcn, "packageStartupMessage")
        ind <- (cnames %in% bcn)
        if (any(ind)) {
            calls <- calls[ind]
            cnames <- cnames[ind]
            pos <- which(cnames == "library")
            if (length(pos)) {
                pos <- pos[vapply(calls[pos], function(e) any(names(e)[-1L] == 
                  "help"), NA)]
                if (length(pos)) {
                  calls <- calls[-pos]
                  cnames <- cnames[-pos]
                }
            }
            if (length(calls)) {
                out$bad_calls <- list(calls = calls, names = cnames)
            }
        }
        out
    }
    calls <- .find_calls_in_package_code(dir, .worker = .get_startup_function_calls_in_file)
    FL <- unlist(lapply(calls, `[[`, ".First.lib"))
    calls <- Filter(length, lapply(calls, function(e) Filter(length, 
        Map(.check_startup_function, e, names(e)))))
    if (length(FL)) 
        attr(calls, ".First.lib") <- TRUE
    class(calls) <- "check_package_code_startup_functions"
    calls
}
