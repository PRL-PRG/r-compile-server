#? stdlib
`Rcmd` <- function (args, ...) 
{
    if (.Platform$OS.type == "windows") 
        system2(file.path(R.home("bin"), "Rcmd.exe"), args, ...)
    else system2(file.path(R.home("bin"), "R"), c("CMD", args), 
        ...)
}

# Examples
