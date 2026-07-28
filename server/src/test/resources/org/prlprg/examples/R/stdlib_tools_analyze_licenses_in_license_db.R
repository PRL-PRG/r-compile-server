#? stdlib
`analyze_licenses_in_license_db` <- function (db) 
{
    results <- cbind(db, analyze_licenses(db$License, db))
    results
}
