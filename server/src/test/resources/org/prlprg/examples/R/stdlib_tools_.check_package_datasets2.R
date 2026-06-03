#? stdlib
`.check_package_datasets2` <- function (fileName, pkgname) 
{
    oldSearch <- search()
    dataEnv <- new.env(hash = TRUE)
    suppressMessages(utils::data(list = fileName, package = pkgname, 
        envir = dataEnv))
    if (!length((ls(dataEnv)))) 
        message("No dataset created in 'envir'")
    if (!identical(search(), oldSearch)) 
        message("Search path was changed")
    invisible(NULL)
}
