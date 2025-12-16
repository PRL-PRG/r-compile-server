#? stdlib
`.get_S3_generics_in_ns_exports` <- function (ns) 
{
    env <- asNamespace(ns)
    nms <- sort(intersect(names(env), getNamespaceExports(env)))
    .get_S3_generics_in_env(env, nms)
}
