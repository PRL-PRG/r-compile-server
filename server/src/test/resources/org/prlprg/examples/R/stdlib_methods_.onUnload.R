#? stdlib
`.onUnload` <- function (libpath) 
{
    message("unloading 'methods' package ...")
    .isMethodsDispatchOn(FALSE)
    library.dynam.unload("methods", libpath)
}
