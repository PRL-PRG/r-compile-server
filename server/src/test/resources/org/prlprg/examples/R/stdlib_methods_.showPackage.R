#? stdlib
`.showPackage` <- function (className) 
{
    if (is.logical(opt <- getOption("showPackageForClass"))) 
        opt
    else is.list(.Call(C_R_getClassFromCache, as.character(className), 
        .classTable))
}
