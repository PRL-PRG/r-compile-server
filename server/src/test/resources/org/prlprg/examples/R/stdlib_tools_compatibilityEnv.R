#? stdlib
`compatibilityEnv` <- function () 
{
    switch(.Platform$OS.type, windows = .unix_only_proto_objects, 
        unix = .windows_only_proto_objects, stop(gettextf("invalid 'OS.type' \"%s\".  Should not happen", 
            .Platform$OS.type), domain = NA))
}
