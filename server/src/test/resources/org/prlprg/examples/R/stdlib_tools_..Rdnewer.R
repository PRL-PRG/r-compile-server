#? stdlib
`..Rdnewer` <- function (dir, file, OS = .Platform$OS.type) 
{
    if (!file.exists(file)) 
        return(0L)
    age <- file.mtime(file)
    if (any(file.mtime(c(Sys.glob(file.path(dir, "man", "*.Rd")), 
        Sys.glob(file.path(dir, "man", "*.rd")))) > age)) 
        return(0L)
    if (dir.exists(file.path(dir, OS))) {
        if (any(file.mtime(c(Sys.glob(file.path(dir, "man", OS, 
            "*.Rd")), Sys.glob(file.path(dir, "man", OS, "*.rd")))) > 
            age)) 
            return(0L)
    }
    1L
}
