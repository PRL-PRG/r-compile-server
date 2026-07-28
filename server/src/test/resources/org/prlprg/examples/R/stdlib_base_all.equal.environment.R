#? stdlib
`all.equal.environment` <- function (target, current, all.names = TRUE, evaluate = TRUE, 
    ...) 
{
    if (!is.environment(target)) 
        return("'target' is not an environment")
    if (!is.environment(current)) 
        return("'current' is not an environment")
    if (identical(target, current)) 
        return(TRUE)
    ae.run <- dynGet("__all.eq.E__", NULL)
    if (is.null(ae.run)) 
        "__all.eq.E__" <- environment()
    else {
        do1 <- function(em) {
            if (identical(target, em$target) && identical(current, 
                em$current)) 
                TRUE
            else if (!is.null(em$mm)) 
                do1(em$mm)
            else {
                e <- new.env(parent = emptyenv())
                e$target <- target
                e$current <- current
                em$mm <- e
                FALSE
            }
        }
        if (do1(ae.run)) 
            return(TRUE)
    }
    if (evaluate) {
        Lt <- as.list.environment(target, all.names = all.names, 
            sorted = TRUE)
        Lc <- as.list.environment(current, all.names = all.names, 
            sorted = TRUE)
        if (identical(Lt, Lc)) 
            TRUE
        else all.equal.list(Lt, Lc, ...)
    }
    else {
        if (!identical(nt <- sort(names(target)), nc <- sort(names(current)))) 
            paste("names of environments differ:", all.equal(nt, 
                nc, ...), collapse = " ")
        else "environments contain objects of the same names, but are not identical"
    }
}
