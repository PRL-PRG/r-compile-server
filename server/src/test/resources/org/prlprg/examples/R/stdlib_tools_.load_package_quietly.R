#? stdlib
`.load_package_quietly` <- function (package, lib.loc) 
{
    if (package != "base") 
        .try_quietly({
            pos <- match(paste0("package:", package), search())
            if (!is.na(pos)) {
                detach(pos = pos)
            }
            library(package, lib.loc = lib.loc, character.only = TRUE, 
                verbose = FALSE)
        })
}
