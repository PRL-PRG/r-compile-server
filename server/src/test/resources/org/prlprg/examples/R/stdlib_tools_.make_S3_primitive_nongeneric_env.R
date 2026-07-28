#? stdlib
`.make_S3_primitive_nongeneric_env` <- function (parent = parent.frame()) 
{
    list2env(as.list(base::.ArgsEnv, all.names = TRUE), hash = TRUE, 
        parent = parent)
}
