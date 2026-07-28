#? stdlib
`getMethodsForDispatch` <- function (fdef, inherited = FALSE) 
{
    .getMethodsTable(fdef, environment(fdef), inherited = inherited)
}
