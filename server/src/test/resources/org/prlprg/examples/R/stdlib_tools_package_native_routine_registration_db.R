#? stdlib
`package_native_routine_registration_db` <- function (dir, character_only = TRUE) 
{
    calls <- package_ff_call_db(dir)
    native_routine_registration_db_from_ff_call_db(calls, dir, 
        character_only)
}
