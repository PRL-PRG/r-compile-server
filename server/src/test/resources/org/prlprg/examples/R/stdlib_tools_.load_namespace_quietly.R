#? stdlib
`.load_namespace_quietly` <- function (package, lib.loc) 
{
    if (package != "base") 
        .try_quietly(loadNamespace(package, lib.loc))
}
