#? stdlib
`.haveRds` <- function (dir) 
{
    dir.exists(file.path(dir, "man")) || file.exists(file.path(dir, 
        "help", "paths.rds"))
}
