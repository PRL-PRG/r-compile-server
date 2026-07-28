#? stdlib
`Sys.setenv1` <- function (var, value) 
{
    if (!nzchar(Sys.getenv(var))) 
        .Internal(Sys.setenv(var, as.character(value)))
}
