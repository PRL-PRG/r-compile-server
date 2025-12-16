#? stdlib
`.gblEnv` <- function (f) 
{
    environment(f) <- .GlobalEnv
    f
}
