#? stdlib
`.get_standard_repository_URLs` <- function (ForXrefs = FALSE) 
{
    if (ForXrefs && nzchar(repos <- Sys.getenv("_R_CHECK_XREFS_REPOSITORIES_", 
        ""))) 
        return(utils:::.expand_BioC_repository_URLs(strsplit(repos, 
            " +")[[1L]]))
    nms <- c("CRAN", "BioCsoft", "BioCann", "BioCexp")
    repos <- getOption("repos")
    if (!is.null(repos) && !anyNA(repos[nms]) && (repos["CRAN"] != 
        "@CRAN@")) 
        repos <- repos[nms]
    else {
        repos <- utils:::.get_repositories()[nms, "URL"]
        names(repos) <- nms
        if (is.na(repos["CRAN"]) || repos["CRAN"] == "@CRAN@") 
            repos["CRAN"] <- "https://CRAN.R-project.org"
    }
    repos
}
