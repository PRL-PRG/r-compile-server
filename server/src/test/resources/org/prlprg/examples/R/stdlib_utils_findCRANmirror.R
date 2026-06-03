#? stdlib
`findCRANmirror` <- function (type = c("src", "web")) 
{
    e <- paste0("R_CRAN_", toupper(type))
    Sys.getenv(e, tools:::.get_CRAN_repository_URL())
}

# Examples
old <- Sys.getenv("R_CRAN_WEB", NA_character_)
c(findCRANmirror("src"), findCRANmirror("web"))

Sys.setenv(R_CRAN_WEB = "https://cloud.r-project.org")
c(findCRANmirror("src"), findCRANmirror("web"))
if(is.na(old)) Sys.setenv(R_CRAN_WEB = old) else Sys.unsetenv("R_CRAN_WEB")

