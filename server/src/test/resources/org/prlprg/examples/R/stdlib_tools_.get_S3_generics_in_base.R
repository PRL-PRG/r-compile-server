#? stdlib
`.get_S3_generics_in_base` <- function () 
{
    c(.get_S3_generics_in_env(.BaseNamespaceEnv), .get_internal_S3_generics(), 
        .get_S3_group_generics())
}
