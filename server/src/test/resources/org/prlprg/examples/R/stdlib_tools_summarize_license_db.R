#? stdlib
`summarize_license_db` <- function (db) 
{
    packages <- db$Package
    if (any(duplicated(packages))) 
        packages <- sprintf("%s_%s", packages, db$Version)
    packages <- split(packages, db$License)
    licenses <- names(packages)
    out <- data.frame(Licenses = licenses, stringsAsFactors = FALSE)
    out$Packages <- packages
    cat(formatDL(out$Licenses, vapply(out$Packages, function(p) paste(unique(p), 
        collapse = " "), ""), style = "list"), sep = "\n\n")
    invisible(out)
}
