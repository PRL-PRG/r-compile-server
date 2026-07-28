#? stdlib
`lazyLoad` <- function (filebase, envir = parent.frame(), filter) 
{
    fun <- function(db) {
        vals <- db$vals
        vars <- db$vars
        expr <- quote(lazyLoadDBfetch(key, datafile, compressed, 
            envhook))
        .Internal(makeLazy(vars, vals, expr, db, envir))
    }
    lazyLoadDBexec(filebase, fun, filter)
}
