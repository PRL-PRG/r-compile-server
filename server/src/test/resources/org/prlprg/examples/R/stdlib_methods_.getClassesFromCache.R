#? stdlib
`.getClassesFromCache` <- function (name) 
{
    .Call(C_R_getClassFromCache, name, .classTable)
}
