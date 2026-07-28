#? stdlib
`.checkDuplicateMethodClasses` <- function (classDefs, env, label) 
{
    supers <- strsplit(label, "#", TRUE)[[1]]
    sigs <- sort(names(env))
    plabels <- strsplit(sigs, "#", TRUE)
    hasSubclass <- vapply(plabels, .hasThisSubclass, logical(1L), 
        classDefs = classDefs, supers = supers)
    mget(sigs[hasSubclass], env)
}
