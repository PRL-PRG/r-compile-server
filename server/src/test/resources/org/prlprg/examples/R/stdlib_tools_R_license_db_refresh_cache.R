#? stdlib
`R_license_db_refresh_cache` <- function (paths = NULL) 
{
    R_license_db(.make_R_license_db(paths))
    R_license_db_vars(.make_R_license_db_vars())
}
