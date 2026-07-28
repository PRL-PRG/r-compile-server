#? stdlib
`makevars_site` <- function () 
{
    m <- character()
    if (is.na(f <- Sys.getenv("R_MAKEVARS_SITE", NA_character_))) 
        f <- file.path(paste0(R.home("etc"), Sys.getenv("R_ARCH")), 
            "Makevars.site")
    if (file.exists(f)) 
        m <- f
    m
}
