#? stdlib
`Rd_aliases` <- function (package, dir, lib.loc = NULL) 
{
    if (!missing(package)) {
        dir <- find.package(package, lib.loc)
        rds <- file.path(dir, "Meta", "Rd.rds")
        if (file_test("-f", rds)) {
            aliases <- readRDS(rds)$Aliases
            if (length(aliases)) 
                sort(unlist(aliases))
            else character()
        }
        else character()
    }
    else {
        if (dir.exists(file.path(dir, "man"))) {
            db <- Rd_db(dir = dir)
            aliases <- lapply(db, .Rd_get_metadata, "alias")
            if (length(aliases)) 
                sort(unique(unlist(aliases, use.names = FALSE)))
            else character()
        }
        else character()
    }
}
