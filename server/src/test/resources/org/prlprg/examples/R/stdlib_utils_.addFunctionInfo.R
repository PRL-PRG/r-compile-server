#? stdlib
`.addFunctionInfo` <- function (...) 
{
    dots <- list(...)
    for (nm in names(dots)) .FunArgEnv[[nm]] <- dots[[nm]]
}
