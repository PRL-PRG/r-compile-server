#? stdlib
`hasMethod` <- function (f, signature = character(), where = .genEnv(f, topenv(parent.frame()))) 
{
    fdef <- getGeneric(f, where = where)
    if (is.null(fdef)) 
        FALSE
    else !is.null(selectMethod(f, signature, optional = TRUE, 
        fdef = fdef))
}
