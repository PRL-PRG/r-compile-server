#? stdlib
`matchDefaults` <- function (method, generic) 
{
    changes <- FALSE
    margs <- formals(method)
    gargs <- formals(generic)
    for (arg in names(margs)) {
        marg <- margs[[arg]]
        garg <- gargs[[arg]]
        if (missing(marg) && !missing(garg)) {
            changes <- TRUE
            margs[arg] <- gargs[arg]
        }
    }
    if (changes) 
        formals(method, envir = environment(method)) <- margs
    method
}
