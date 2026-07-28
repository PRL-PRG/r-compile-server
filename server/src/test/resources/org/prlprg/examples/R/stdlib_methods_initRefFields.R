#? stdlib
`initRefFields` <- function (.Object, classDef, selfEnv, args) 
{
    if (length(args)) {
        snames <- allNames(args)
        which <- nzchar(snames)
        elements <- args[which]
        supers <- args[!which]
        elNames <- names(elements)
        for (super in supers) {
            if (!is(super, "refClass")) {
                warning(gettextf("unnamed arguments to $new() must be objects from a reference class; got an object of class %s", 
                  dQuote(class(super))), domain = NA)
                next
            }
            fields <- names(super$.refClassDef@fieldClasses)
            fields <- fields[is.na(match(fields, elNames))]
            for (field in fields) elements[[field]] <- super$field(field)
            elNames <- names(elements)
        }
        for (field in elNames) envRefSetField(.Object, field, 
            classDef, selfEnv, elements[[field]])
    }
    .Object
}
