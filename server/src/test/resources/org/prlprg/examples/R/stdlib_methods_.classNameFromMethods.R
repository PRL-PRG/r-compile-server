#? stdlib
`.classNameFromMethods` <- function (what) 
{
    packageSlot(what) <- "methods"
    what
}
