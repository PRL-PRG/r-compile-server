#? stdlib
`maintainer` <- function (pkg) 
{
    force(pkg)
    desc <- packageDescription(pkg)
    if (is.list(desc)) 
        gsub("\n", " ", desc$Maintainer, fixed = TRUE)
    else NA_character_
}

# Examples
maintainer("MASS")

