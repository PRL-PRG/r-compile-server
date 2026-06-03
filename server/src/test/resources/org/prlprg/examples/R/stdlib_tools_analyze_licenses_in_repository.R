#? stdlib
`analyze_licenses_in_repository` <- function (dir, unpacked = FALSE, full = TRUE) 
{
    db <- build_license_db(dir, unpacked)
    if (!full) {
        db <- .remove_stale_dups(db)
    }
    analyze_licenses_in_license_db(db)
}
