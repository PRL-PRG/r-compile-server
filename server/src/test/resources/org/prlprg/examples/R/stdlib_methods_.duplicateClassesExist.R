#? stdlib
`.duplicateClassesExist` <- function (on) 
{
    value <- get("#HAS_DUPLICATE_CLASS_NAMES", envir = .classTable)
    if (nargs()) 
        assign("#HAS_DUPLICATE_CLASS_NAMES", on, envir = .classTable)
    value
}
