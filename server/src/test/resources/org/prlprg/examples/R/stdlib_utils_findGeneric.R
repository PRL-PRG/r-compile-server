#? stdlib
`findGeneric` <- function (fname, envir, warnS4only = TRUE) 
{
    if (!exists(fname, mode = "function", envir = envir)) 
        return("")
    f <- get(fname, mode = "function", envir = envir)
    if (.isMethodsDispatchOn() && methods::is(f, "genericFunction")) {
        fMethsEnv <- methods::getMethodsForDispatch(f)
        meths <- as.list(fMethsEnv, all.names = TRUE)
        r <- meths[grep("^ANY\\b", names(meths))]
        if (any(ddm <- vapply(r, methods::is, logical(1L), "derivedDefaultMethod"))) 
            f <- r[ddm][[1]]@.Data
        else if (warnS4only) 
            warning(gettextf("'%s' is a formal generic function; S3 methods will not likely be found", 
                fname), domain = NA)
    }
    isUMEbrace <- function(e) {
        for (ee in as.list(e[-1L])) if (nzchar(res <- isUME(ee))) 
            return(res)
        ""
    }
    isUMEif <- function(e) {
        if (length(e) == 3L) 
            isUME(e[[3L]])
        else {
            if (nzchar(res <- isUME(e[[3L]]))) 
                res
            else if (nzchar(res <- isUME(e[[4L]]))) 
                res
            else ""
        }
    }
    isUME <- function(e) {
        if (is.call(e) && (is.name(e[[1L]]) || is.character(e[[1L]]))) {
            switch(as.character(e[[1L]]), UseMethod = as.character(e[[2L]]), 
                `{` = isUMEbrace(e), `if` = isUMEif(e), "")
        }
        else ""
    }
    isUME(body(f))
}
