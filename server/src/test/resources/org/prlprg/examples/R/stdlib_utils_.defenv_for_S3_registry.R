#? stdlib
`.defenv_for_S3_registry` <- function (genfun) 
{
    if (typeof(genfun) == "closure") {
        topenv(environment(genfun))
    }
    else .BaseNamespaceEnv
}
