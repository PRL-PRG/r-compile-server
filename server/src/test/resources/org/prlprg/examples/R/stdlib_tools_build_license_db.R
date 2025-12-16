#? stdlib
`build_license_db` <- function (dir, unpacked = FALSE) 
{
    CRAN <- getOption("repos")["CRAN"]
    if (missing(dir) && substr(CRAN, 1L, 7L) == "file://") 
        dir <- file.path(substring(CRAN, 8L), "src", "contrib")
    fields <- c("License", "License_is_FOSS", "License_restricts_use", 
        "Maintainer")
    db <- .build_repository_package_db(dir, fields, unpacked = unpacked)
    db <- do.call(rbind, db)
    data.frame(db[, c("Package", "Version", fields)], stringsAsFactors = FALSE)
}
