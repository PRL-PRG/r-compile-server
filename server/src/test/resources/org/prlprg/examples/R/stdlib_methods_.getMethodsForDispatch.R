#? stdlib
`.getMethodsForDispatch` <- function (fdef) 
{
    ev <- base::environment(fdef)
    if (base::exists(".Methods", envir = ev)) 
        base::get(".Methods", envir = ev)
}
