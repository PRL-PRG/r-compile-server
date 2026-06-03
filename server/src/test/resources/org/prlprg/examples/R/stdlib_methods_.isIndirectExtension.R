#? stdlib
`.isIndirectExtension` <- function (object) 
{
    is(object, "SClassExtension") && length(object@by) > 0
}
