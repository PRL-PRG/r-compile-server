#? stdlib
`makevars_user` <- function () 
{
    m <- character()
    if (.Platform$OS.type == "windows") {
        if (!is.na(f <- Sys.getenv("R_MAKEVARS_USER", NA_character_))) {
            if (file.exists(f)) 
                m <- f
        }
        else if ((Sys.getenv("R_ARCH") == "/x64") && file.exists(f <- path.expand("~/.R/Makevars.ucrt"))) 
            m <- f
        else if ((Sys.getenv("R_ARCH") == "/x64") && file.exists(f <- path.expand("~/.R/Makevars.win64"))) 
            m <- f
        else if (file.exists(f <- path.expand("~/.R/Makevars.win"))) 
            m <- f
        else if (file.exists(f <- path.expand("~/.R/Makevars"))) 
            m <- f
    }
    else {
        if (!is.na(f <- Sys.getenv("R_MAKEVARS_USER", NA_character_))) {
            if (file.exists(f)) 
                m <- f
        }
        else if (file.exists(f <- path.expand(paste0("~/.R/Makevars-", 
            Sys.getenv("R_PLATFORM"))))) 
            m <- f
        else if (file.exists(f <- path.expand("~/.R/Makevars"))) 
            m <- f
    }
    m
}
