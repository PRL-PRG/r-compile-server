#? stdlib
`.get_repositories` <- function () 
{
    rfile <- Sys.getenv("R_REPOSITORIES", unset = NA_character_)
    if (is.na(rfile) || rfile == "NULL" || !file_test("-f", rfile)) {
        rfile <- file.path(Sys.getenv("HOME"), ".R", "repositories")
        if (!file_test("-f", rfile)) 
            rfile <- file.path(R.home("etc"), "repositories")
    }
    .read_repositories(rfile)
}
