#? stdlib
`.get_requires_from_package_db` <- function (db, category = c("Depends", "Imports", "LinkingTo", 
    "VignetteBuilder", "Suggests", "Enhances", "RdMacros")) 
{
    category <- match.arg(category)
    if (category %in% names(db)) {
        requires <- unlist(strsplit(db[category], ","))
        requires <- sub("^[[:space:]]*([[:alnum:].]+).*$", "\\1", 
            requires)
        if (category == "Depends") 
            requires <- requires[requires != "R"]
    }
    else requires <- character()
    requires
}
