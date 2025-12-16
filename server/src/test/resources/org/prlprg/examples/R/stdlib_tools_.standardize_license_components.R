#? stdlib
`.standardize_license_components` <- function (x) 
{
    with(.standardizable_license_specs_db, ospecs[match(x, ispecs)])
}
