#? stdlib
`package_native_routine_registration_skeleton` <- function (dir, con = stdout(), align = TRUE, character_only = TRUE, 
    include_declarations = TRUE) 
{
    nrdb <- package_native_routine_registration_db(dir, character_only)
    writeLines(format_native_routine_registration_db_for_skeleton(nrdb, 
        align, include_declarations), con)
}

# Examples
