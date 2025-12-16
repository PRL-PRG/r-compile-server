#? stdlib
`.genericAssign` <- function (f, fdef, methods, where, deflt) 
{
    ev <- environment(fdef)
    assign(".Methods", methods, ev)
}
