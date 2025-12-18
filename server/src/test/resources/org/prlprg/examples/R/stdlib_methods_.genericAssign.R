#? stdlib
`.GenericAssign` <- function (name, fdef, where) 
{
    assign(name, fdef, where)
    .cacheGeneric(name, fdef)
    methods <- fdef@default
    assignMethodsMetaData(name, methods, fdef, where)
    .assignMethodsTableMetaData(name, fdef, where)
    name
}
