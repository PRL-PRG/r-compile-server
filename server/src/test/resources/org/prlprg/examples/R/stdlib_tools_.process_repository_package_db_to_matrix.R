#? stdlib
`.process_repository_package_db_to_matrix` <- function (desc, path, addFiles, addPaths, latestOnly) 
{
    desc <- Filter(length, desc)
    if (length(desc)) {
        Files <- names(desc)
        fields <- names(desc[[1L]])
        desc <- matrix(unlist(desc), ncol = length(fields), byrow = TRUE)
        colnames(desc) <- fields
        if (addFiles) 
            desc <- cbind(desc, File = Files)
        if (addPaths) 
            desc <- cbind(desc, Path = path)
        if (latestOnly) 
            desc <- .remove_stale_dups(desc)
        license_info <- analyze_licenses(desc[, "License"])
        desc[, "License"] <- ifelse(license_info$is_standardizable, 
            license_info$standardization, NA)
    }
    desc
}
