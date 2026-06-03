#? stdlib
`fetchRdDB` <- function (filebase, key = NULL) 
{
    fun <- function(db) {
        vals <- db$vals
        vars <- db$vars
        datafile <- db$datafile
        compressed <- db$compressed
        envhook <- db$envhook
        fetch <- function(key) lazyLoadDBfetch(vals[key][[1L]], 
            datafile, compressed, envhook)
        if (length(key)) {
            if (key %notin% vars) 
                stop(gettextf("No help on %s found in RdDB %s", 
                  sQuote(key), sQuote(filebase)), domain = NA)
            fetch(key)
        }
        else {
            res <- lapply(vars, fetch)
            names(res) <- vars
            res
        }
    }
    res <- lazyLoadDBexec(filebase, fun)
    if (length(key)) 
        res
    else invisible(res)
}
