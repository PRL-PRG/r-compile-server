#? stdlib
`.getGenericFromCacheTable` <- function (name, where, pkg = "", table) 
{
    if (exists(name, envir = table, inherits = FALSE)) {
        value <- get(name, envir = table)
        if (is.list(value)) {
            if (!nzchar(pkg)) {
                if (is.character(where)) 
                  pkg <- where
                else {
                  pkg <- attr(name, "package")
                  if (is.null(pkg)) 
                    pkg <- getPackageName(where, FALSE)
                  if (identical(pkg, ".GlobalEnv")) 
                    pkg <- ""
                }
            }
            pkgs <- names(value)
            i <- match(pkg, pkgs, 0L)
            if (i > 0L) 
                return(value[[i]])
            i <- match("methods", pkgs, 0L)
            if (i > 0L) 
                return(value[[i]])
            i <- match("base", pkgs, 0L)
            if (i > 0L) 
                return(value[[i]])
            else return(NULL)
        }
        else if (nzchar(pkg) && !identical(pkg, value@package)) 
            NULL
        else value
    }
    else NULL
}
