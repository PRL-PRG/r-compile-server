#? stdlib
`.get_requires_with_version_from_package_db` <- function (db, category = c("Depends", "Imports", "LinkingTo", 
    "VignetteBuilder", "Suggests", "Enhances")) 
{
    category <- match.arg(category)
    if (category %in% names(db)) {
        res <- .split_dependencies(db[category])
        if (category == "Depends") 
            res[names(res) != "R"]
        else res
    }
    else list()
}
