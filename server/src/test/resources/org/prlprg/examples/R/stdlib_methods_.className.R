#? stdlib
`.className` <- function (cl) 
if (is(cl, "classRepresentation")) cl@className else as(cl, "character")
