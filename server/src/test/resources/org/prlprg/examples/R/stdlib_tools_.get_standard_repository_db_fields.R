#? stdlib
`.get_standard_repository_db_fields` <- function (type = c("source", "mac.binary", "win.binary")) 
{
    type <- match.arg(type)
    c("Package", "Version", "Priority", "Depends", "Imports", 
        "LinkingTo", "Suggests", "Enhances", "License", "License_is_FOSS", 
        "License_restricts_use", "OS_type", "Archs", "MD5sum", 
        if (type == "source") "NeedsCompilation")
}
