#? stdlib
`.OStype` <- function () 
{
    Sys.getenv("R_OSTYPE", unset = .Platform$OS.type, names = FALSE)
}
