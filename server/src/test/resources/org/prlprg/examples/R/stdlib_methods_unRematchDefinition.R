#? stdlib
`unRematchDefinition` <- function (definition) 
{
    if (isRematched(definition)) 
        definition <- body(definition)[[2]][[3]]
    definition
}
