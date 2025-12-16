#? stdlib
`.onAttach` <- function (libname, pkgname) 
{
    env <- environment(sys.function())
    unlockBinding(".BasicFunsList", env)
    if (.hasS4MetaData(.GlobalEnv)) {
        result <- try(cacheMetaData(.GlobalEnv, TRUE))
        if (inherits(result, "try-error")) 
            warning("apparently bad method or class metadata in saved environment;\n", 
                "move the file or remove the class/method")
    }
}
