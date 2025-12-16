#? stdlib
`.OptRequireMethods` <- function () 
{
    pkg <- "methods"
    if (pkg %in% getOption("defaultPackages")) 
        if (!require(pkg, quietly = TRUE, warn.conflicts = FALSE, 
            character.only = TRUE)) 
            warning("package \"methods\" in options(\"defaultPackages\") was not found", 
                call. = FALSE)
}
