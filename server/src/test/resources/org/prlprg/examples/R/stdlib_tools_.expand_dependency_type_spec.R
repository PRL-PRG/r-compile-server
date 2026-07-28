#? stdlib
`.expand_dependency_type_spec` <- function (x) 
{
    if (identical(x, "strong")) 
        c("Depends", "Imports", "LinkingTo")
    else if (identical(x, "most")) 
        c("Depends", "Imports", "LinkingTo", "Suggests")
    else if (identical(x, "all")) 
        c("Depends", "Imports", "LinkingTo", "Suggests", "Enhances")
    else x
}
