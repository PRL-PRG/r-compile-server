#? stdlib
`isBaseFun` <- function (fun) 
{
    is.primitive(fun) || identical(environment(fun), .BaseNamespaceEnv)
}
