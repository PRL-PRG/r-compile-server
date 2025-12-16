#? stdlib
`.addMethodFrom` <- function (def, arg, Class, fromClass) 
{
    if (is(def, "MethodDefinition")) {
        def@target[[arg]] <- Class
        def@defined[[arg]] <- fromClass
    }
    def
}
