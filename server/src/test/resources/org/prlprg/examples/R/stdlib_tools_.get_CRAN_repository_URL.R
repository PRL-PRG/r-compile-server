#? stdlib
`.get_CRAN_repository_URL` <- function () 
{
    repos <- getOption("repos")
    if (!is.null(repos) && !is.na(cr <- repos["CRAN"]) && (cr != 
        "@CRAN@")) 
        return(cr)
    cr <- utils:::.get_repositories()["CRAN", "URL"]
    if (is.na(cr) || cr == "@CRAN@") 
        cr <- "https://CRAN.R-project.org"
    cr
}
